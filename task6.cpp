#include<iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x , int y);
main()
{


 gotoxy( 25 , 2);
cout<<"              @          @        @";
 gotoxy( 24 , 3);
cout<<"            @   @        @        @";
 gotoxy( 23 , 4);
cout<<"          @       @      @        @";
gotoxy( 22 , 5);
cout<<"        @@@@@@@@@@@ @    @        @";
gotoxy( 21 , 6);
cout<<"       @              @  @        @ ";
gotoxy( 20 , 7);
cout<<"     @                 @ @@@@@@@@ @";
}
void gotoxy(int x , int y)
{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
