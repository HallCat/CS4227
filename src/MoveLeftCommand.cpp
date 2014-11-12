#include "MoveLeftCommand.h"
#include "Player.h"

//Concrete Command to move left takes a player movement Reciever.
MoveLeftCommand::MoveLeftCommand(Player* player)
{
    this->player = player;
}

//Destructor
MoveLeftCommand::~MoveLeftCommand()
{

}

//Command allowing the player to move left.
void MoveLeftCommand::execute()
{
    player->moveLeft();
}
