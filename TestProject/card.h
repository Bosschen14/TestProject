#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*
 * Name : <Insert name here>
 * Program to draw playing cards
 */

struct EntireCards
{
    char Cards[8];
    char Suits[8];
    int cardOrder;
    int suitOrder;
}EntireCard;

struct EntireCards PrintCard(int card, int suit)
{
    char strCard[16] = "";
    char strSuit[16] = "";


    switch (card)
    {
    case 1:
        sprintf_s(strCard,sizeof(strCard), "Ace");
        break;

    case 11:
        sprintf_s(strCard, sizeof(strCard), "Jack");
        break;

    case 12:
        sprintf_s(strCard, sizeof(strCard), "Queen");
        break;

    case 13:
        sprintf_s(strCard, sizeof(strCard), "King");
        break;

    default:
        sprintf_s(strCard, sizeof(strCard), "%d", card);
        break;
    }

    switch (suit)
    {
    case 0:
        sprintf_s(strSuit, sizeof(strSuit), "Hearts");
        break;

    case 1:
        sprintf_s(strSuit, sizeof(strSuit), "Diamonds");
        break;

    case 2:
        sprintf_s(strSuit, sizeof(strSuit), "Spades");
        break;

    case 3:
        sprintf_s(strSuit, sizeof(strSuit), "Clubs");
        
        break;
    }
    printf("%s of %s", strCard, strSuit);
    printf("\n");
    strcpy_s(EntireCard.Cards , sizeof(EntireCard.Cards), strCard);
    strcpy_s(EntireCard.Suits, sizeof(EntireCard.Suits),strSuit);
    EntireCard.cardOrder = card;
    EntireCard.suitOrder = suit;
    return EntireCard;
}



struct EntireCards makeCard()
{
    int suit;
    int card;

    /*
     . This seeds the random number
     . generator with the current time
     */
    srand(time(NULL));

    /* Create a random card and suit */
    /* This will compute a random number from 0 to 3 */
    suit = rand() % 4;

    /* This will compute a random number from 1 to 13 */
    card = rand() % 13 + 1;

    PrintCard(card, suit);
    printf("%s\n", EntireCard.Cards);
    printf("%s\n", EntireCard.Suits);
    return EntireCard;
}



