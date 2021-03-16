#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Hello World! \n";
  
  cout << " 1st C++ code \n";

  int myNum=15;
  cout<<myNum;
  double myFloatNum=5.99;  //THis is a comment
  char myLetter='A';
  string myText="AMG-line";
  bool myBoolean=true;
   /*This is a 
   multiline comment.
   Always click save before you run the code.
   */
  int x=10;
  int y=10;

  int sum=x+y;
  cout<<sum;

  int newkey;
  cout <<"Type a number: ";
  cin >> newkey;
  cout << " Your number is: " << newkey;

  return 0;
}