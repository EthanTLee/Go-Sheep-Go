#pragma once

namespace core {

struct point {
    int x= 0, y=0;

    bool operator==(const point& p) const {
        return (x == p.x) && (y == p.y);    
    }
};


struct pixelpt : public point {
    pixelpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }
};


} // namespace core