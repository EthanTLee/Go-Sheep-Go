#pragma once

#include <SDL2/SDL.h>

namespace gosheep {

struct userinput {
    bool quit_pressed = false;
    bool up_key_pressed = false;
    bool down_key_pressed = false;
    bool right_key_pressed = false;
    bool left_key_pressed = false;
    bool space_bar_pressed = false;
};

inline userinput Get_Input(SDL_Event event) {
    userinput ret;

    switch (event.type) {
        case SDL_QUIT:
            ret.quit_pressed = true;
            break;

        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {

                case SDLK_UP:                    
                ret.up_key_pressed = true;
                break;
                case SDLK_DOWN:
                ret.down_key_pressed = true;
                break;
                case SDLK_RIGHT:
                ret.right_key_pressed = true;
                break;
                case SDLK_LEFT:
                ret.left_key_pressed = true;
                break;                                
            }
            break;

        case SDL_KEYUP:
            switch (event.key.keysym.sym) {

                case SDLK_UP:                    
                ret.up_key_pressed = false;
                break;               
                case SDLK_DOWN:
                ret.down_key_pressed = false;
                break;
                case SDLK_RIGHT:
                ret.right_key_pressed = false;
                break;
                case SDLK_LEFT:
                ret.left_key_pressed = false;
                break;                                
            }
            break;
    }

    return ret;
}

} // namespace gosheep