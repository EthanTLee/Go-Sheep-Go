#include "catch.hpp"
#include <GoSheepGo/Drawable.hh>
#include <GoSheepGo/MapHelpers.hh>
#include <GoSheepGo/clusterfinder.hh>

using namespace gosheep;


struct GameDrawables {
     GameDrawables() {
        grass_regular = Drawable("../../res/grass.png");
        grass_select = Drawable("../../res/grass_sel.png");
        sheep_white = Drawable("../../res/sheep_white.png");
        sheep_black = Drawable("../../res/sheep_black.png");
        wall = Drawable("../../res/wall.png");
    }

    Drawable grass_regular;
    Drawable grass_select;
    Drawable sheep_white;
    Drawable sheep_black;
    Drawable wall;
};


class Game {

    public:

    Game() {
       Initialize();
    }

    void RunGameLoop() {
        while(m_quit_status == false) {
            Update();
            Draw();
        }
    }


    private:

    SDL_Window* m_window;
    window_surface m_window_surf;
    GameDrawables m_drawables;  
    gameboard_t m_tilemap;
    sheepboard_t m_sheepmap;
    gridpt m_select_tile_pos;
    bool m_quit_status;
    SDL_Event m_user_input;     
    SheepColor m_active_sheep_color;
    int m_turn_number;

    void Initialize() {
        m_quit_status = false;

        SDL_Init(SDL_INIT_VIDEO);
        IMG_Init(IMG_INIT_PNG);
        
        m_window = Make_Window();
        m_window_surf = SDL_GetWindowSurface(m_window);
        m_tilemap = gameboard_t{{
            {TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall}
            
        }};

        m_sheepmap = sheepboard_t{SheepColor::none};
        m_select_tile_pos = gridpt{1,1};
        m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] = TileType::select;
        m_active_sheep_color = SheepColor::black;
        m_turn_number = int{0};
    }

    void Update() {
        

        m_tilemap = gameboard_t{{
            {TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::regular, TileType::regular, TileType::regular, TileType::regular, TileType::wall},
            {TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall, TileType::wall}
            
        }};
        
        m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] = TileType::select;

        while(SDL_PollEvent(&m_user_input) != 0) {
            if (m_user_input.type == SDL_QUIT) {
                m_quit_status = true;
            }
            else if (m_user_input.type == SDL_KEYDOWN) {
                
                if (m_user_input.key.keysym.sym == SDLK_LEFT) {
                    MoveSelectLeft();
                }
                if (m_user_input.key.keysym.sym == SDLK_RIGHT) {
                    MoveSelectRight();
                }
                if (m_user_input.key.keysym.sym == SDLK_UP) {
                    MoveSelectUp();
                }
                if (m_user_input.key.keysym.sym == SDLK_DOWN) {
                    MoveSelectDown();
                }
                if (m_user_input.key.keysym.sym == SDLK_SPACE) {

                    m_sheepmap[m_select_tile_pos.x][m_select_tile_pos.y] = m_active_sheep_color;
                    m_sheepmap = DeleteSurroundedSheepOf(m_sheepmap, m_tilemap);
                    AdvanceTurn();
                    
                }
            }
            
        }
    }

    void Draw(){
        for (auto [row, col] : array_helpers::enumarate(m_tilemap)) {
            gridpt grid_pos;
            grid_pos.x = row;
            grid_pos.y = col;
            pixelpt tile_pixel_pos = ConvertTileGridToPixel(grid_pos);
            pixelpt sheep_pixel_pos = ConvertSheepGridToPixel(grid_pos);

            if (m_tilemap[row][col] == TileType::regular) {
                m_drawables.grass_regular.Draw(tile_pixel_pos,m_window_surf);
            }
            else if (m_tilemap[row][col] == TileType::select) {
                m_drawables.grass_select.Draw(tile_pixel_pos,m_window_surf);
            }
            else if (m_tilemap[row][col] == TileType::wall) {
                m_drawables.wall.Draw(tile_pixel_pos,m_window_surf);
            }
            
            if (m_sheepmap[row][col] == SheepColor::white) {
                m_drawables.sheep_white.Draw(sheep_pixel_pos,m_window_surf);
            }
            else if (m_sheepmap[row][col] == SheepColor::black) {
                m_drawables.sheep_black.Draw(sheep_pixel_pos,m_window_surf);
            }
        }
        SDL_UpdateWindowSurface(m_window);
    }
    void MoveSelectRight(){
        m_select_tile_pos.x += 1;
        if (m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] == TileType::wall) {
            m_select_tile_pos.x -= 1;
        }
        
    }
    void MoveSelectLeft(){
        m_select_tile_pos.x -= 1;
        if (m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] == TileType::wall) {
            m_select_tile_pos.x += 1;
        }
    }
    void MoveSelectUp(){
        m_select_tile_pos.y += 1;
        if (m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] == TileType::wall) {
            m_select_tile_pos.y -= 1;
        }
    }
    void MoveSelectDown(){
        m_select_tile_pos.y -= 1;
        if (m_tilemap[m_select_tile_pos.x][m_select_tile_pos.y] == TileType::wall) {
            m_select_tile_pos.y += 1;
        }
    }

    void AdvanceTurn() {
        m_turn_number +=1;
        if(m_turn_number % 2 == 0) {
            m_active_sheep_color = SheepColor::black;
        }
        else {
            m_active_sheep_color = SheepColor::white;
        }
    }
};


TEST_CASE("game") {
    Game gosheep;

    gosheep.RunGameLoop();
}