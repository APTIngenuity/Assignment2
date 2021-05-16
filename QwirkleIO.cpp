#include "QwirleIO.h"

void saveGameState(Player** players, GameBoard* gameBoard, TileBag* tileBag, std::string filename, bool isPlayerOne) {
    ofstream file;
    file.open(filename);
    file << players[0];
    file << players[1];
    file << gameBoard;
    file << tileBag;

    file << (isPlayerOne ? players[0]->getName() : players[1]->getName());
}