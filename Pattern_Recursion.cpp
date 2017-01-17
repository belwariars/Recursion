//  Print a pattern without using any loop
// We could have used flags to use only one function...
#include <bits/stdc++.h>
using namespace std;

void printPattern2(int n, int dup)
{
	if(n == dup)
	{
		printf("%d ", n);
		return;
	}
	
	printf("%d ", n);
	printPattern2(n+5, dup);
}

void printPattern(int n, int dup)
{
	if(n <= 0)
	{
		printPattern2(n, dup);
		return;
	}
	printf("%d ", n, dup);
	printPattern(n-5, dup);
}

int main()
{
	int n =16;
	int dup = n;
	
	printPattern(n, dup);
	return 0;
}
