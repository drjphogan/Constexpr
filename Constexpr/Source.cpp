#include <iostream>
using namespace std;

constexpr int Fibonacci(int n)
{
	switch(n) 
	{
		case 0:
			return 0;

		case 1:
			return 1;

		default:
			return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main() 
{
	static_assert(Fibonacci(10) == 55, "Unexpected Fibonacci number.");
	return 0;
}