//#include <gtest/gtest.h>
#include <iostream>
#include <windows.h>
#include "Player.h"
#include "GameController.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "Game.h"
#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();

    Game* game = new Game();
    game->update();

}
