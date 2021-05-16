
#ifndef ASSIGN2_PLAYER_H
#define ASSIGN2_PLAYER_H

#include "Tile.h"
#include "LinkedList.h"

#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
class Player
{
public:
    Player();
    Player(string name, LinkedList* hand);

    int getScore();
    void setScore(int Score);

    LinkedList *getHand();
    void setTilesInHand(LinkedList *hand);

    string getName();
    void setName(string name);

    friend ofstream& operator << (ofstream& of, const Player& p);
    friend ifstream& operator >> (ifstream& in, Player* p);

private:
    string name;
    int score;
    LinkedList *hand;
};

#endif // ASSIGN2_NODE_H