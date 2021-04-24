#pragma once

#include <GoSheepGo/Core/GameWindow.hh>
#include <GoSheepGo/Core/PointTypes.hh>
#include <extern/tinyxml2/tinyxml2.h>
#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace core {


struct AnimationInfo {
    AnimationInfo(std::string _name, int _number_of_frames, int _frame_rate, pixelpt _frame_size, pixelpt _first_frame_position) {
        name = _name;
        number_of_frames = _number_of_frames;
        frame_rate = _frame_rate;
        frame_size = _frame_size;
        first_frame_position = _first_frame_position;
    }
    std::string name;
    int number_of_frames{0};
    int frame_rate{0};
    pixelpt frame_size;
    pixelpt first_frame_position;
};


struct SpriteSheetInfo {
    std::string path_to_sheet_file;
    int number_of_animes;
};

class SpriteSheet {
    public:
    SpriteSheet(std::string path_to_spreet_file, core::GameWindow window){

        tinyxml2::XMLDocument spreet;
        spreet.LoadFile(path_to_spreet_file.c_str());

        int num_of_animes = std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("num_of_animes") -> GetText());
        m_num_of_animes = num_of_animes;

        for (int i{1}; i <= m_num_of_animes; i++) {
            m_animation_infos.emplace_back(
                std::string (spreet.FirstChildElement("spritesheet")-> FirstChildElement("animation") -> FirstChildElement("name") ->GetText()),
                std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("num_of_frames") ->GetText()),
                std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("frame_rate") ->GetText()),
                pixelpt (
                    std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("frame_size")-> FirstChildElement("x") ->GetText()),
                    std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("frame_size")-> FirstChildElement("y") ->GetText())
                ),
                pixelpt (
                    std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("position_of_first_frame")-> FirstChildElement("x") ->GetText()),
                    std::stoi(spreet.FirstChildElement("spritesheet")->FirstChildElement("animation") -> FirstChildElement("position_of_first_frame")-> FirstChildElement("y") ->GetText())
                )
            );
        }

        std::string path_to_image(spreet.FirstChildElement("spritesheet")-> FirstChildElement("path_to_image") ->GetText());
        SDL_Surface* loaded_surface = LoadImageAsSurface(path_to_image);
        
        m_texture = SDL_CreateTextureFromSurface(window.m_renderer, loaded_surface);
        SDL_FreeSurface(loaded_surface);
    }


    int m_num_of_animes = 0;
    std::vector<AnimationInfo> m_animation_infos;
    SDL_Texture* m_texture = nullptr;

    private:

    SDL_Surface* LoadImageAsSurface(std::string path_to_image) {

        SDL_Surface* ret = IMG_Load(path_to_image.c_str());
        if (ret == nullptr) { throw std::runtime_error("sprite not loaded"); }
        
        return ret;
    }

};


} // namespace core