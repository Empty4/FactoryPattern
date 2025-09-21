#ifndef TANK_H
#define TANK_H

#include "GameAgent.h"

class Tank : public GameAgent {
    int _pos, _shieldLevel;
public:
    Tank(int x, int shield);
    bool gotShot(int shoot) override;
    ~Tank() override;
};

#endif
