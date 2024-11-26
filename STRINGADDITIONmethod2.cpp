#include <iostream>
using namespace std;
int main()
{
	string inserting;
	cout<<"Enter the argument 'a': ";
	getline(cin, inserting);
	
	string result = "something " + inserting;
	cout<<result;
	
	
	
}