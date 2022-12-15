#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct card
{
	char *face;
	char *suit;
}card;



void fullDeck(card *const wDeck, const char *wFace[], const char *wSuit[]);

void shuffle(card *const wDeck);
void deal(card *const wDeck);

int main()
{

	const char *suit[4] = { "Hearts", "Diamons","Clubs","Spades" };
	const char *face[13] =
	{ "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack" , "Queen","King" };
	card deck[52];

	srand(time(0));

	fullDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	system("pause");
	return 0;
}

void fullDeck(card *const wDeck, const char *wFace[], const char *wSuit[]) {
	for (int i = 0; i < 52; i++)
	{
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wSuit[i / 13];
	}
}

void shuffle(card * const wDeck)
{
	card temp;
	int j;

	for (int i = 0; i < 52; i++)
	{
		j = rand() % 52;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

void deal(card* const wDeck)
{
	for (int i = 0; i < 52; i++)
	{
		printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit,
			(i + 1) % 4 ? " " : "\n");
	}
}