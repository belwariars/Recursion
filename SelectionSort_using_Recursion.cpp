#include <bits/stdc++.h>
using namespace std;

// SELECTION SORT USING RECURSION...

// TIME COMPLEXITY: O(N^2)   SPACE COMPLEXITY: O(N) if function stack is considered else O(1)...

int minIndex(int arr[], int start, int end)
{
	int i;
	int min = INT_MAX;
	int minI = -1;
	for(i=start; i<=end; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			minI = i;
		}
	}
	
	return minI;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSortRecursive(int arr[], int start, int end)
{
	if(start >= end)
		return;
	
	int minI = minIndex(arr, start, end);
	
	swap(&arr[start], &arr[minI]);
	
	selectionSortRecursive(arr, start+1, end);
}

int main()
{
	int arr[] = {4, 2, 6, 1, 7, 6, 9, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectionSortRecursive(arr, 0, n-1);
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
