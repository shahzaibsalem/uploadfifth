#include<iostream>
using namespace std;
void print();
void again();
main()
{
int option;
string student_1;
string student_2;
int matric_1;
int matric_2;
int fsc_1;
int fsc_2;
int ecat_1;
int ecat_2;
float aggregate_1;
float aggregate_2;
print();
while(true)
{
again();
cout<<"PLZZZZ! SELECT ONE OF THE FOLLOWING OPTIONS...."<<endl;
cin>>option;

if (option == 1)
     {
      cout<<" ENTER NAME OF FIRST STUDENT ..."<<endl;
      cin>>student_1;
      cout<<"ENTER FIRST STUDENT MATRIC MARKS(OUT OF 1100)..."<<endl;
      cin>>matric_1;
      cout<<"ENTER FIRST STUDENT FSC MARKS(OUT OF 1100)..."<<endl;
      cin>>fsc_1;
      cout<<"ENTER FIRST STUDENT ECAT MARKS(OUT OF 400)..."<<endl;
      cin>>ecat_1;
      }
if (option == 2)
     {
    cout<<" ENTER NAME OF SECOND STUDENT ..."<<endl;
    cin>>student_2;
    cout<<"ENTER SECOND STUDENT MATRIC MARKS(OUT OF 1100)..."<<endl;
    cin>>matric_2;
    cout<<"ENTER SECOND STUDENT FSC MARKS(OUT OF 1100)..."<<endl;
    cin>>fsc_2;
    cout<<"ENTER SECOND STUDENT ECAT MARKS(OUT OF 400)..."<<endl;
    cin>>ecat_2;
     }
if (option == 3)
     {
     
      aggregate_1=(matric_1*30)/1100 + (fsc_1*30)/1100 + (ecat_1*40)/400;
      cout<<"AGGREGATE OF FIRST STUDENT IS : "<< aggregate_1<<endl;
     }
if (option == 4)
     {
     
      aggregate_2 = (matric_2*30)/1100 + (fsc_2*30)/1100 + (ecat_2*40)/400;
      cout<<"AGGREGATE OF SECOND STUDENT IS : "<< aggregate_2<<endl;
     }
if (option == 5)
     {
     	if(aggregate_1>aggregate_2){
		 
    cout<<"FIRST STUDENT HAS ROLL NUMBER 1"<<endl;
    cout<<"SECOND STUDENT HAS ROLL NUMBER 2"<<endl;
	}
    	if(aggregate_2>aggregate_1){
		 
    cout<<"SECOND STUDENT HAS ROLL NUMBER 1"<<endl;
    cout<<"FIRST STUDENT HAS ROLL NUMBER 2"<<endl;
	  }
     }
}
}
void print()
{
cout<<"   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @             UNIVERSITY ADMISSION              @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @              MANAGMENT SYSYTEM                @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @                                               @"<<endl;
cout<<"   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
} 
void again()
{
cout<<"1.ENTER DETAILS OF FIRST STUDENT..."<<endl;
cout<<"2.ENTER DETAILS OF SECOND STUDENT..."<<endl;
cout<<"3.CALCULATE AGGREGATE OF FIRST STUDENT..."<<endl;
cout<<"4.CALCULATE AGGREGATE OF SECOND STUDENT..."<<endl;
cout<<"5.STUDENT RECORD..."<<endl;


}
