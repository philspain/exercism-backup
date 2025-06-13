#include "queen_attack.h"
#include <cmath>
#include <stdexcept>

namespace queen_attack {
    chess_board::chess_board(std::pair<int, int> piece1, std::pair<int, int> piece2) {
        if(piece1.first < 0 || piece1.second < 0 || piece2.first < 0 || piece2.second < 0)
            throw std::domain_error("Too low!");
        if(piece1.first > 7 || piece1.second > 7 || piece2.first > 7 || piece2.second > 7)
            throw std::domain_error("Too High!");
        if(piece1.first == piece2.first && piece1.second == piece2.second)
            throw std::domain_error("BAD TOUCH!");
        
        this->white_piece = piece1;
        this->black_piece = piece2;
    }

    std::pair<int, int> chess_board::white() const {
        return this->white_piece;
    };

    std::pair<int, int> chess_board::black() const {
        return this->black_piece;
    };

    bool chess_board::can_attack() const {
        // get slope
        double x1 = this->white_piece.first * 1.0;
        double y1 = this->white_piece.second * 1.0;
        double x2 = this->black_piece.first * 1.0;
        double y2 = this->black_piece.second * 1.0;
        double slope = (y2 - y1) / (x2 - x1);
        return  x1 == x2 || y1 == y2 || std::abs(slope) == 1.0; 
    }

}  // namespace queen_attack
