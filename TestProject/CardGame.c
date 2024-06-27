////#include <card.h>
//#include <Windows.h>
//
//struct EntireCards EntireCardPlayer1;
//struct EntireCards EntireCardPlayer2;
//
//
//int WinCheck(struct EntireCards EntireCard1, struct EntireCards EntireCard2)
//{
//    int P1Card = EntireCard1.cardOrder;
//    int P1Suit = EntireCard1.suitOrder;
//    int P2Card = EntireCard2.cardOrder;
//    int P2Suit = EntireCard2.suitOrder;
//    if (P1Card == 1) /*improve Ace order*/
//    {
//        P1Card = 14;
//    }
//    if (P1Card == 2) /*improve 2 order*/
//    {
//        P1Card = 15;
//    }
//    if (P2Card == 1)
//    {
//        P1Card = 14;
//    }
//    if (P2Card == 2)
//    {
//        P1Card = 15;
//    }
//    if (P1Card > P2Card)
//    {
//        printf("Player1 win!");
//    }
//    else if(P1Card == P2Card)
//    {
//        if (P1Suit < P2Suit)
//        {
//            printf("Player1 win!");
//        }
//        else if(P1Suit == P2Suit)
//        {
//            printf("There is a tie");
//        }
//        else
//        {
//            printf("Player2 win!");
//        }
//    }
//    else
//    {
//        printf("Player2 win!");
//    }
//    return 0;
//}
//
////int main()
////{
////    printf("player1's turn:\n");
////    EntireCardPlayer1 = makeCard();
////    printf("player2's turn:\n");
////    Sleep(1000);
////    EntireCardPlayer2 = makeCard();
////
////    WinCheck(EntireCardPlayer1, EntireCardPlayer2);
////
////}