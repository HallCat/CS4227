#include "AchievementSystem.h"

AchievementSystem::AchievementSystem()
{
    numOfAchievements = 0;
    numUnlocked = 0;

    addAchievement(new Achievement("10 Kills", GameEvent::TYPE_KILLS, 10));
    addAchievement(new Achievement("50 Kills", GameEvent::TYPE_KILLS, 50));
    addAchievement(new Achievement("100 Kills", GameEvent::TYPE_KILLS, 100));

    addAchievement(new Achievement("10 points", GameEvent::TYPE_POINTS, 10));
    addAchievement(new Achievement("50 points", GameEvent::TYPE_POINTS, 50));
    addAchievement(new Achievement("100 points", GameEvent::TYPE_POINTS, 100));

    addAchievement(new Achievement("10 gold", GameEvent::TYPE_MONEY, 10));
    addAchievement(new Achievement("50 gold", GameEvent::TYPE_MONEY, 50));
    addAchievement(new Achievement("100 gold", GameEvent::TYPE_MONEY, 100));
}

AchievementSystem::~AchievementSystem()
{
    while(achievements.size() != 0)
    {
        delete achievements[0];
    }
}

void AchievementSystem::addAchievement(Achievement* achievement)
{
    achievements.push_back(achievement);
    numOfAchievements++;
}

void AchievementSystem::removeAchievement(Achievement* achievement)
{
    for(int i = 0; i < numOfAchievements; i++)
    {
        if(achievements[i] == achievement)
        {
            achievements.erase(achievements.begin() + i);
            numOfAchievements--;
            break;
        }
    }
}

void AchievementSystem::update(GameEvent event)
{
    for(int i =0; i < numOfAchievements; i++)
    {
        if (achievements[i]->updateProgress(event.getType(), event.getValue()))
        {
            achievements[i]->unlock();
            numUnlocked++;
        }
    }
}

int AchievementSystem::getNumUnlocked()
{
    return numUnlocked;
}
