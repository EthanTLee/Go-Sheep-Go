/*
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

    Drawable grass_regular;
    Drawable grass_select;
    Drawable sheep_white;
    Drawable sheep_black;

    gridpt m_select_position;

};

}
*/