#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
// In class excersise two project
// intro to cs class project 

 string name;
 cout<<"What is your name? \t"<< name;
 cin>> name;

 // declaring "name" as a variable

 cout<<"\n \n \t WELCOME TO MATH TRICKS, "<<name<<endl;
 // intro to game

 cout<<"I am a mind reader…… \n";

 cout<<"We will chose a 5 digit numbers together \n";


 cout<<"but I will be able to give you the sum \n";

 cout<<"of all five after only hearing the first one!!\n \n";

 //first half of the game

 int num1;

 // num1 is the users first five digits

 cout<<"What is your first five digit number?\t \t";

 cin>> num1;

 cout<< endl<< endl;

 cout<<"The sum of all five numbers is \t \t \t 2" << (num1 - 2)<< endl<<endl;

 int num2;

 //num2 is the second imput

 cout<<"\nWhat is your second five digit number \t \t ";

 cin>> num2;

 cout<< endl<< endl;

 cout<<"I'm choosng\t \t \t \t \t \t \t \t \t "<<(99999 - num2)<<endl<<endl;

 // too many \t but i could not find another way

 cout<<"What is your third five digit number? \t \t ";

 int num3;

 cin>>num3;

 cout<< endl<<endl;

 cout<<"I'm choosing \t \t \t \t \t \t \t \t "<<(99999 - num3)<<endl<<endl;

 cout<<"CHECK MY ANSWER THAT I GAVE!! AM I CORRECT??\n";

 //turn e into return

 cout << "Press the 'e' key and return to exit.... "<<endl;

 // code ends!

 return 0;
}
