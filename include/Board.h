#ifndef BOARD_H
#define BOARD_H


class Board
{
    private:
        char** board;
        int board_size;
    public:
        Board(int board_size);
        ~Board();
        void Reset();
        void Display();
        void resetPosition(char player_chr, x, y)
};

#endif // BOARD_H
