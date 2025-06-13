#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include<tuple>

namespace queen_attack {
    class chess_board {
        private:
            std::pair<int, int> white_piece, black_piece;
        public:
            chess_board(std::pair<int, int> piece1, std::pair<int, int> piece2);
            std::pair<int, int> white() const;
            std::pair<int, int> black() const;
            bool can_attack() const;
    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H