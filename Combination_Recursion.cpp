// Print all possible combinations of r elements in a given array of size n

// TIME COMPLEXITY: O(N^2)     SPACE COMPLEXITY: O(N) ...here we're not considering the space of array arr. and the extra space is due to recursion...

#include <bits/stdc++.h>
using namespace std;

void combinationUtil(int arr[], int start, int end, int n)
{
	if(start>=n)
		return;
	int i;
	for(i=end; i<n; i++)
	{
		printf("(%d %d)", arr[start], arr[i]);
	}
//	printf("\t\t");
	
	combinationUtil(arr, start+1, end+1, n);
}

void combination(int arr[], int n)
{
	combinationUtil(arr, 0, 1, n);
}

int main()
{
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	combination(arr, n);
	return 0;
}
