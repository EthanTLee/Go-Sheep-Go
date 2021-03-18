/* #pragma once

#include <exception>
#include <string>
#include <array>

template <int boardsize>
class Gameboard {
    public:
    std::array <std::array <int , boardsize>, boardsize> m_board = {0};
    std::string input;

    void update (gridpt point, int player) {
        if (!is_empty_field(point)) {
            throw std::runtime_error("gridpt already filled");
        }
        m_board.at(point.x).at(point.y) = player;
    }

    bool is_empty_field(gridpt point) const {
        return m_board.at(point.x).at(point.y) == 0;
    }



};

*/