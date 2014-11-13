//#include <gtest/gtest.h>
#include <iostream>
#include "Player.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "Game.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char** argv)
{
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    Game* game = new Game();
    Enemy * enemy = EnemyFactory::createDefenseEnemy(new EnemyHorizontal());
    game->addEnemy(enemy);
    game->update();

}
