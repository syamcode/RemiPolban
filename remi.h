#ifndef REMI_H
#define REMI_H

//file card.c
void resetDeck(); //Reset deck

int getCardValue(int n); //Return the card number

char getCardSymbol(int n); //Return the card symbol

void shiftLeft(playerControl *player, int x);

void emptyPlayerDeck(playerControl *player); //Empty the player deck

void swapCard(int card[], int i, int j); //Swap Card from element i to element j

void shuffleDeck();//Shuffle the deck

void trashCard(playerControl *player, int n);

void getFromTrash(playerControl *player);

void getFromDeck(playerControl *player);

void dealFromDeck(playerControl *player);

void sortDeckBySymbol(int card[], int cardLength);

void emptyMeldDeck(playerControl *player);

void insertMeldCard(playerControl *player, int card);

void getFromMeld(playerControl *player, int i);

//file interface.c
void update();

void HowToPlay();

void StartGame();

void menuDisplay(int i);

void WelcomeScreen();

void printPlayerCard(playerControl *player);

void printErrorMessage();

void printMeldCard(playerControl *player);

void printTrashCard();

// file ai.c
void copyPlayerCard(playerControl *player, int tempBrain[]);

void emptyTempBrain(int tempBrain[]);

void printAICard(int tempBrain[], int length);

int searchSymbol(int tempBrain[], int length);

void startAI(playerControl *player);

#endif