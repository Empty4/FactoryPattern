#ifndef GAMEAGENT_H
#define GAMEAGENT_H

class GameAgent {
public:
    virtual bool gotShot(int shoot) = 0;
    virtual ~GameAgent() {}
};

#endif
