#include "Tank.h"

Tank::Tank(int x, int shield) : _pos(x), _shieldLevel(shield) {}

bool Tank::gotShot(int shoot) {
    return _pos == shoot;
}

Tank::~Tank() {}
