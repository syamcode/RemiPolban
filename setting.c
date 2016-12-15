#define DECK_CARD_LENGTH 54
#define PLAYER_CARD_LENGTH 8
#define TRASH_CARD_LENGTH 1
#define FORE_BLC "\x1B[30m"
#define FORE_RED "\x1B[31m"
#define FORE_GRN "\x1B[32m"
#define FORE_YEL "\x1B[33m"
#define FORE_BLU "\x1B[34m"
#define FORE_MAG "\x1B[35m"
#define FORE_CYN "\x1B[36m"
#define FORE_WHT "\x1B[37m"
#define BACK_BLC "\x1B[40m"
#define BACK_RED "\x1B[41m"
#define BACK_GRN "\x1B[42m"
#define BACK_YEL "\x1B[43m"
#define BACK_BLU "\x1B[44m"
#define BACK_MAG "\x1B[45m"
#define BACK_CYN "\x1B[46m"
#define BACK_WHT "\x1B[47m"
#define RESET "\x1B[0m"

int deckLengthNow = 54;
int deck[DECK_CARD_LENGTH];

typedef struct {
  int card[PLAYER_CARD_LENGTH];
  int cardLength;
  int score;
}playerControl;

playerControl player1;
playerControl player2;
int trashDeck[TRASH_CARD_LENGTH];
char errorMessage[100]="";
