#include <iostream>
using namespace std;
main()
{
int red_rose;
int white_rose;
int tulips;
int total_red;
int total_white;
int total_tulip;
float total;
float discounts;
cout<<"Enter red rose..."<<endl;
cin>>red_rose;
cout<<"Enter white rose..."<<endl;
cin>>white_rose;
cout<<"Enter tulip rose..."<<endl;
cin>>tulips;
cout<<endl;
total_red=(red_rose*2);
cin>>total_red;
total_white=(white_rose*4.10);
cin>>total_white;
total_tulip=(tulips*2.50);
cin>>total_tulip;
total=(total_red+total_white+total_tulip);
cin>>total;
cout<<"YOUR ORIGNL BILL IS :"<<total;
cout<<endl;
if(total>200){
discounts=(total)-(0.2*100);
cin>>discounts;
cout<<"YOUR DISCOUNTED BILL IS :"<<discounts;}
}

