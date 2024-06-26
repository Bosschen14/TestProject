#include <card.h>
#include <Windows.h>

struct EntireCards EntireCardPlayer1;
struct EntireCards EntireCardPlayer2;

int main()
{
    EntireCardPlayer1 = makeCard();
    Sleep(1000);
    EntireCardPlayer2 = makeCard();



}