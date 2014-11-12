#include "GameView.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>

#define SPACE 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define NONE 0

using namespace std;

GameView::GameView()
{
    posX = 0;
    posY = 0;
}

GameView::~GameView()
{
    //dtor
}

int GameView::checkButtonState()
{
    char c = getch();
    if(c == 's' || c =='S')
    {
        return DOWN;
    }
    if(c == 'w' || c =='W')
    {
        return UP;
    }
    if(c == 'a' || c =='A')
    {
        return LEFT;
    }
    if(c == 'D' || c =='d')
    {
        return RIGHT;
    }
    if(c == ' ')
    {
        return SPACE;
    }

    return NONE;
}

void GameView::setXY(int x, int y)
{
        posX = x;
        posY = y;
        cout<<"X = ";
        cout<<posX<<endl;
        cout<<"Y = ";
        cout<<posY<<endl;
}
