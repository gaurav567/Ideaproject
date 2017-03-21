#include <iostream>
#include <fstream>
#include<stdio.h>
using namespace std;
//#include<string.h>
//If the file you open for appending does not exist, the operating system creates one just as if you had opened it using ios::out mode.

int main(void)
{
     string name,dummy,age,title,detail,unique_Id;
     int number, i;
     ofstream fout;



     fout.open("UniqueData.dat",ios::app);    // open file for appending
     assert (!fout.fail( ));


         fout<<endl<<"---------New record-----------"<<endl;
         cout<<"Enter Your Name :";
         getline(cin,name);
         cout<<"Enter Your unique_Id(eg pan_card,aadhar_card) :";
         getline(cin,unique_Id);
         cout<<"Enter Idea Title :  ";
         getline(cin,title);
         cout<<"Enter Idea detail :  ";
         getline(cin,detail);

         fout<<"Name-> "<<name<<endl<<endl;
         fout<<"unique_Id-> "<<unique_Id<<endl<<endl;
         fout<<"Title-> "<<title<<endl<<endl;   //send to file
         fout<<"Detail-> "<<detail<<endl<<endl;
     //}
     fout.close( );       //close file
     assert(!fout.fail( ));
     return 0;
}
