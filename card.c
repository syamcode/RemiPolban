void resetDeck() { //Reset deck
  int i;
  deckLengthNow=54;
  for (i=0;i<DECK_CARD_LENGTH;i++) {
    deck[i]=i+1;
  }
}

int getCardValue(int n) { //Return the card number
  return n%13;
}

char getCardSymbol(int n) { //Return the card symbol
  switch(n) {
    case 1 ... 13 : return 'D'; break; //Diamond
    case 14 ... 26 : return 'C'; break; //Club
    case 27 ... 39 : return 'H'; break; //Heart
    case 40 ... 52 : return 'S'; break; //Spade
    case 53 ... 54 : return 'R'; break; //Joker
  }
}

void emptyPlayerDeck(playerControl *player) { //Empty the player deck
  int i;
  for (i=0;i<PLAYER_CARD_LENGTH;i++) {
    player->card[i]=0;
  }
  player->cardLength = 0;
}

void swapCard(int card[], int i, int j) { //Swap Card from element i to element j
  int temp;
  temp = card[i];
  card[i]=card[j];
  card[j]=temp;
}

void shuffleDeck() {//Shuffle the deck
  int i;
  srand(time(NULL));
  for (i=DECK_CARD_LENGTH-1;i>0;i--) {
    int j = rand() % (i+1);

    swapCard(deck, i, j);
  }
}

void trashCard(playerControl *player, int n) {
  trashDeck[0]=player->card[n];
  player->card[n] = 0;
  player->cardLength--;
}

void getFromTrash(playerControl *player) {
  player->card[8]=trashDeck[0];
  trashDeck[0]=0;
  player->cardLength+=1;
}

void getFromDeck(playerControl *player, int i) {
  player->card[i]=deck[deckLengthNow-1];
  deckLengthNow--;
  player->cardLength++;
}

void dealFromDeck(playerControl *player) {
  int i;
  for (i=0;i<PLAYER_CARD_LENGTH-1;i++) {
    getFromDeck(player, i);
  }
}
