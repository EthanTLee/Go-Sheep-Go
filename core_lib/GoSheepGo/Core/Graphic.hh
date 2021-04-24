#pragma once


#include <GoSheepGo/Core/GameWindow.hh>
#include <GoSheepGo/Core/Helpers.hh>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <vector>

namespace core {


class SpriteSheet {

    public:
    SpriteSheet(){}

    SpriteSheet(std::string path_to_image, GameWindow window) {

        SDL_Surface* loaded_surface = LoadImageAsSurface(path_to_image);
        m_texture = SDL_CreateTextureFromSurface(window.m_renderer, loaded_surface);
        SDL_FreeSurface(loaded_surface);

        m_renderer = window.m_renderer;

    }

    SDL_Texture* m_texture = nullptr;
    SDL_Renderer* m_renderer = nullptr;

    private:

    SDL_Surface* LoadImageAsSurface(std::string path_to_image) {

        SDL_Surface* ret = IMG_Load(path_to_image.c_str());
        if (ret == nullptr) { throw std::runtime_error("sprite not loaded"); }
        
        return ret;
    }

};

class Animation {


    using spritesheet_pos = pixelpt;
    using window_pos = pixelpt;
    using fps = int;
    using sprite_bounders = std::vector<core::Rectangle>;
    
    public:

    Animation(
        int number_of_cells, 
        pixelpt cell_size, 
        fps frame_rate, 
        spritesheet_pos first_cell,
        SpriteSheet sprite_sheet
    ) {
        m_number_of_cells = number_of_cells;
        m_cell_size = cell_size; 
        m_frame_rate = frame_rate;
        m_first_cell = first_cell;
        m_where_to_draw_on_window.m_rect.w = cell_size.x;
        m_where_to_draw_on_window.m_rect.h = cell_size.y;
        m_renderer = m_sprite_sheet.m_renderer;
    }

    int m_number_of_cells = 0;
    pixelpt m_cell_size;
    fps m_frame_rate = 0;
    spritesheet_pos m_first_cell;
    Rectangle m_where_to_draw_on_window;
    SDL_Renderer* m_renderer = nullptr;

    void Play() {

        using sec = Uint32;

        while (true) {

            sec time = SDL_GetTicks() / 1000;

            Rectangle frame(pixelpt(m_first_cell.x + (m_cell_size.x * m_current_frame),m_first_cell.y), m_cell_size);

            if (time % (1/m_frame_rate) == 0) {

                SDL_RenderCopy(
                    m_renderer, 
                    m_sprite_sheet.m_texture, 
                    &m_where_to_draw_on_window.m_rect,
                    &frame.m_rect
                );

                SDL_RenderPresent(m_renderer);

                AdvanceFrameNumber();

            }

        }

        
    }
    void Pause() {}

    private:

    SpriteSheet m_sprite_sheet;
    int m_current_frame = 0;

    sprite_bounders bounders;

    void AdvanceFrameNumber(){
        m_current_frame+=1;
        
        if (m_current_frame > m_number_of_cells) {
            m_current_frame = 0;
        }

    }
};


}