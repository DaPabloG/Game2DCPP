#include "Board.h"

using namespace::std

Board::Board(int board_size): board_size{board_size}
{
    this->board = new char*[this->board_size];
    for(int i=0;i<board_size;i++)
    {
        board[i] = new char[this->board_size];
    }
    Reset();
}
Board::~Board()
{
    for(int=0;int<board_size;i++)
    {
        delete[] board[i];
    }
    delete[] board;
}

void Board::Reset()
{
    for(int i =0;i<board_size;i++)
    {
        for(int j = 0;j<board_size;j++)
        {
            board[i][j]=' ';
        }
    }
}

void Board::Display()
{

}

Board::~Board()
{
    //dtor
}
