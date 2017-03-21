#include <iostream>
#include <fstream>
#include<stdio.h>
using namespace std;
//#include<string.h>
//If the file you open for appending does not exist, the operating system creates one just as if you had opened it using ios::out mode.

int main(void)
{
     string name,title,detail,unique_Id,Ideatopic,suggestion;
     int i;
     ofstream fout;



     fout.open("suggestData.dat",ios::app);    // open file for appending
     assert (!fout.fail( ));


         fout<<endl<<"---------New record-----------"<<endl;
         cout<<"Enter Your Name :";
         getline(cin,name);
         cout<<endl;
         cout<<"Enter Your unique_Id(eg pan_card,aadhar_card) :"<<endl;
         getline(cin,unique_Id);
         cout<<endl;
         cout<<"Enter The Idea You took write exactly same Idea title :"<<endl;
         getline(cin,Ideatopic);
         cout<<endl;
         cout<<"Suggestion or Design (if not interested write N/A) "<<endl;
         getline(cin,suggestion);
         cout<<endl;
         cout<<"implementation details (if not interested write N/A)"<<endl;
         getline(cin,detail);
         cout<<endl;

         fout<<"Name-> "<<name<<endl;
         fout<<endl;
         fout<<"unique_Id-> "<<unique_Id<<endl;
         fout<<endl;
         fout<<"Idea_Title-> "<<Ideatopic<<endl;
         fout<<endl;
         fout<<"suggestion-> "<<suggestion<<endl;   //send to file
         fout<<endl;
         fout<<"Implementation Detail-> "<<detail<<endl;
     //}
     fout.close( );       //close file
     assert(!fout.fail( ));
     return 0;
}
