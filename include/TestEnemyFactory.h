#ifndef TESTENEMYFACTORY_H
#define TESTENEMYFACTORY_H

#include "EnemyFactory.h"
#include <gtest/gtest.h>


class TestEnemyFactory : public EnemyFactory
{
    public:
        TestEnemyFactory();
        virtual ~TestEnemyFactory();
    protected:
    private:
};

#endif // TESTENEMYFACTORY_H

