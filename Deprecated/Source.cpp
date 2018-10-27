#include <iostream>
using namespace std;

[[deprecated("DoSomething is inefficient; use DoSomethingBetter() instead.")]]
//[[deprecated]]
void DoSomething()
{
	cout << "I'm doing something the obsolete way." << endl;
}

void DoSomethingBetter()
{
	cout << "I'm doing something in a better way." << endl;
}

int main()
{
	DoSomething();
}