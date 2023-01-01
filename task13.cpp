#include<iostream>
using namespace std;
main()
{
int holidays;
int workking_days;
int game;
int difference;
cout<<"ENTER NUMBER OF HOLIDAYS..."<<endl;
cin>>holidays;
workking_days=(365-holidays);
game=(365-holidays)*63+(holidays*127);
difference=(30000-game);
if(difference<5000)
{
cout<<"Tom do not sleep well";}
if(difference>5000){
cout<<"Tom  sleep well";}
}
