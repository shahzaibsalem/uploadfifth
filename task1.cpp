#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y);

int main()
{
int x;
int y;
cout<<"JUMMA MUBARAK";
gotoxy(15,15);
cout<<"MY NAME IS SHAHZAIB";
return 0;
}

void gotoxy(int x , int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}