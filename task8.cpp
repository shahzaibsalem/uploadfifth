#include <iostream>
using namespace std;
void isequal(int x , int y);
main()
{
int x;
int y;
cout<<"ENTER THE FIRST NUMBER:"<<endl;
cin>>x;
cout<<"ENTER THE SECOND NUMBER:"<<endl;
cin>>y;
isequal( x ,  y);
}
void isequal(int x , int y)
{
if(x==y)
    {
cout<<"TRUE..";
     }
if(x!=y)
    {
cout<<"FALSE..";
    }
}