#include<stdio.h>
#include<stdlib.h>

struct card
{
	char *face;
	char *suit;
};



int main(void)
{
	struct card acard;
	struct card *cardPtr;

	acard.face = "Ace";
	acard.suit = "Spades";

	cardPtr = &acard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", acard.face, " of ", acard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);


	system("pause");
	return 0;
}
