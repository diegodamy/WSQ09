#include <iostream>
using namespace std;


int factorial (int n){
  if (n == 0){
    return 1;
} else {
    return n*factorial(n-1);
  }
}


int main(){
int  number;
char decision;

do {
cout  << "To calculate the factorial, please enter the integer number:" << endl;
cin >> number;

if (number <0){
  cout << "Please enter only positive numbers." << endl;
  cin >> number;
} else {
  cout << "The factorial of " << number << " is " << factorial (number) << endl;
  }

cout << endl << "Would you like to calculate the factorial of another number? Y/N:" << endl;
cin >> decision;
cout << endl;

  } while (decision == 'Y');

  if (decision !='Y'){
    cout << "Thank you. Goodbye!";
  }

}
