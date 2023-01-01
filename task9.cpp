#include <iostream>
using namespace std;
void reverse(string input);
main()
{
string input;
cout<<"ENTER YOUR STATEMENT:"<<endl;
cin>>input;
 reverse(input);
}
void reverse(string input)
{
if(input=="true")
             {
 cout<<"YOUR STATEMENT IS FALSE:"<<endl;
              }
if(input=="false")
              {
     cout<<"YOUR STATEMENT IS TRUE:"<<endl;
              }
} 
