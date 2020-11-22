#include <iostream>

using namespace std;

int main()
{

int n1,n2, temp;

cout << "SWAPPING OF TWO NUMBERS \n\n";

cout << "enter two numbers : \n";

cin >> n1>>n2;

cout << "Before swapping the numbers are:\n " ;

cout << "n1 = " << n1 ;

cout << "\n n2 = " << n2 ;

temp = n1;

n1 = n2;

n2 = temp;

cout << "\n After swapping the numbers are:" << endl;
cout <<"\n n1= "<<n1;
cout<<"\n n2= "<<n2; 
}