#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{

system("cls");
cout<<" #########################################################################"<<endl;
cout<<" ||..p.......................................................    .....  ||"<<endl;
cout<<" ||.   @@@@@@@@@@@@@@@          ...    @@@@@@@@@@@@@@@     |@|..  @@@@  ||"<<endl;
cout<<" ||..      |@|      |@|      |@|...   |@|           |@|    |@|..   |@|  ||"<<endl;
cout<<" ||..      |@|      |@|      |@|...   |@|           |@|    |@|..   |@|  ||"<<endl;
cout<<" ||..      @@@@@@@@@@@  . .  |@|...   |@|           |@|       ..  @@@@. ||"<<endl;
cout<<" ||..      |@|          . .  |@|...    @@@@@@@@@@@@@@@        ..      . ||"<<endl;
cout<<" ||..      @@@@@@@@@@@@@. .  |@|...    ................   |@| .. #### . ||"<<endl;
cout<<" ||..                 |@| .            @@@@@@@@@@         |@| ..   |@|. ||"<<endl;
cout<<" ||..|@|   .........  |@| .            |@|.....           |@| ..   |@|. ||"<<endl;
cout<<" ||..|@|  |@|@ @ |@| .|@| . |@|        |@|.....|@|            ..   |@|. ||"<<endl;
cout<<" ||..|@|  |@|    |@| ..    @@@@@@@@@      .....|@|            . |@|.    ||"<<endl;
cout<<" ||..|@|  |@|    |@| ..          ...|@|   .....|@|        |@|.. |@|.    ||"<<endl;
cout<<" ||..|@|                         ...|@|      @@@@@        |@|.. |@|.    ||"<<endl;
cout<<" ||..|@|   @@@@@@@@@@@           ...|@|@@@@@@@@@          |@|   |@|#### ||"<<endl;
cout<<" ||...................................................... |@|.......... ||"<<endl;
cout<<" ||    ..................................................               ||"<<endl;
cout<<" ||..|@|   |@|   |@| ..    @@@@@@@@@     ......|@|        |@| ..|@|.    ||"<<endl;
cout<<" ||..|@|   |@|   |@| ..      ...  |@|       @@@@@@        |@| ..|@|.    ||"<<endl;
cout<<" ||..|@|              .   G  ...  |@|                     |@| ..|@|#### ||"<<endl;
cout<<" ||..|@|  @@@@@@@@@@@@@@@@   ...  |@|@@@@@@@@@@           |@|           ||"<<endl;
cout<<" ||.....................................................  |@| ........  ||"<<endl;
cout<<" ||  ....................................................    ......     ||"<<endl;
cout<<" #########################################################################"<<endl;
 int x = 5;
 int y = 1;
 gotoxy(x, y);
 cout<<" ";
 gotoxy(30,1);
 cout<<"P";
 
   
 gotoxy(80,25);
}
void gotoxy(int x , int y)

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}




