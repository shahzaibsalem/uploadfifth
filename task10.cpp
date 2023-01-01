#include <iostream>
using namespace std;
void discount(int amount , string country , float final_price);
main()
{
string country;
float final_price;
int amount;
while(true){

discount(amount , country ,final_price);
    }
}

void discount(int amount , string country , float final_price)

{
cout<<"ENTER COUNTARY NAME:"<<endl;
cin>>country;
cout<<"ENTER THE TICKET PRICE IN DOLLARS:"<<endl;
cin>>amount;
if(country=="pakistan")
     {
     final_price=amount-(0.05*100);
     cout<<"YOUR DISCOUNTED PRICE IS:"<<final_price<<endl;
     }
if(country=="ireland")
     {
     final_price=amount-(0.1*100);
     cout<<"YOUR DISCOUNTED PRICE IS:"<<final_price<<endl;
     }
  if(country=="india")
     {
     final_price=amount-(0.2*100);
     cout<<"YOUR DISCOUNTED PRICE IS:"<<final_price<<endl;
     }
if(country=="england")
     {
     final_price=amount-(0.3*100);
     cout<<"YOUR DISCOUNTED PRICE IS:"<<final_price<<endl;
     }
if(country=="canada")
     {
     final_price=amount-(0.45*100);
     cout<<"YOUR DISCOUNTED PRICE IS:"<<final_price<<endl;
	 cout<<endl;}
     }


