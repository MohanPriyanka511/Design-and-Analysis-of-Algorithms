// C++ program to find maximum number of thieves caught
#include <bits/stdc++.h>
using namespace std;

// Returns maximum number of thieves that can be caught.
int policeThief(char arr[], int n, int k)
{
	// Initialize the current lowest indices of
	// policeman in pol and thief in thi variable as -1
	int pol = -1, thi = -1, res = 0;
	// Find the lowest index of policemen
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'P') {
			pol = i;
			break;
		}
	}

	// Find the lowest index of thief
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'T') {
			thi = i;
			break;
		}
	}

	// If lowest index of either policemen or thief remain
	// -1 then return 0
	if (thi == -1 || pol == -1)
		return 0;
	while (pol < n && thi < n) {
		// can be caught
		if (abs(pol - thi) <= k) {

			pol = pol + 1;
			while (pol < n && arr[pol] != 'P')
				pol = pol + 1;

			thi = thi + 1;
			while (thi < n && arr[thi] != 'T')
				thi = thi + 1;

			res++;
		}
		// increment the current min(pol , thi) to
		// the next policeman or thief found
		else if (thi < pol) {
			thi = thi + 1;
			while (thi < n && arr[thi] != 'T')
				thi = thi + 1;
		}
		else {
			pol = pol + 1;
			while (pol < n && arr[pol] != 'P')
				pol = pol + 1;
		}
	}
	return res;
}

int main()
{
	int k, n;
	char arr1[] = { 'P', 'T', 'T', 'P', 'T' };
	k = 2;//a policeman cannot catch a thief who is k units far away from policeman.
	n = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr1, n, k) << endl;

	char arr2[] = { 'T', 'T', 'P', 'P', 'T', 'P' };
	k = 2;
	n = sizeof(arr2) / sizeof(arr2[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr2, n, k) << endl;

	char arr3[] = { 'P', 'T', 'P', 'T', 'T', 'P' };
	k = 3;
	n = sizeof(arr3) / sizeof(arr3[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr3, n, k) << endl;

	return 0;
}
//Time Complexity: O(N)
