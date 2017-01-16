// CHECK IF A NUMBER IS PALINDROME RECURSION...
// NOT BEST SOLUTION....BEST SOLUTION IS:  http://www.geeksforgeeks.org/check-if-a-number-is-palindrome/
// TIME COLPLEXITY: O(N+N+N) = O(N)     SPACE COMPLEXITY: O(100+N)

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(int arr[], int start, int end)
{
	while(start < end)
	{
		swap(&arr[start], &arr[end]);
		start++;
		end--;
	}
}

int checkPalindrome(int arr[], int start, int end)
{
	if(start>=end)
		return 1;
		
	if(arr[start] != arr[end])
		return 0;
		
	checkPalindrome(arr, start+1, end-1);
}

int main()
{
	int num = 12321;
	int arr[100];
	int n=0;
	int dup = num;
	while(dup!= 0)
	{
		arr[n] = dup%10;
		dup = dup/10;
		n++;
	}
	
	int j;
/*	for(j=0; j<n; j++)
	{
		printf("%d ", arr[j]);
	} */
	
//	printf("\n\n"); 

//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n", sz);
	reverse(arr, 0, n-1);
	
/*	for(j=0; j<n; j++)
	{
		printf("%d ", arr[j]);
	}  */
	
	if(checkPalindrome(arr, 0, n-1) == 1)
	{
		printf("Is a Palindrome\n");
	}
	else
	{
		printf("Isn't a Palindrome'\n");
	}
	
	return 0;
}
