#pragma once

#include <GoSheepGo/Drawable.hh>
#include <GoSheepGo/GoSheepHelpers.hh>
#include <array>
#include <string>

namespace gosheep {

class Map {

    enum Tiles {grass, select};
    enum Sheeps {none, black, white};

    template <class T>
    using layer_t = std::array <std::array<T, 5>, 5>;

public:
    Map(window_surface target_surf);
    
    void Draw(window_surface target_surf);
    void AddSheepAtSelect(Sheeps color);
    void RemoveSheepAt(gridpt position);
    void SetSelectPosition(gridpt position);

private:

    void DrawTiles(window_surface target_surf);
    void DrawSheep(window_surface target_surf);
    template <class T>
    void FillLayer(layer_t <T> target_layer, T value);

    layer_t <Tiles> m_tilemap;
    layer_t <Sheeps> m_sheepmap;

    std::string grass_regular_path = "../../res/grass.png";
    std::string grass_select_path = "../../res/grass_sel.png";
    std::string sheep_white_path = "../../res/sheep_white.png";
    std::string sheep_black_path = "../../res/sheep_black.png";
/*
    Drawable grass_regular(grass_regular_path);
    Drawable grass_select(grass_select_path);
    Drawable sheep_white(sheep_white_path);
    Drawable sheep_black(sheep_black_path);
*/
    gridpt m_select_position;

};

}