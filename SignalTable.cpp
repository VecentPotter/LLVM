#include <iostream>
#include <unordered_map> 
#include <string> 
#include <SignalTable.h>
using namespace std;

int main()
{
	string a, b;
	unordered_map<string, Variable>::const_iterator got;
	a = "int";
	b = "ÕûĞÎ";
	Variable x = { a, b };
	insert("number", x);// int number;
	got = look_up("number");
	cout << got->first << endl;
	cout << got->second.information << endl;
	cout << got->second.kind << endl;

	cut_off("number");
	got = look_up("number");
	cout << (mymap.end() == got);
	return 0;
}