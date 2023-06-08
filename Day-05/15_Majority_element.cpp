#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt = 0;
	int x = 0;
	for(int i=0; i<n; i++) {
		if(cnt == 0) {
			x = arr[i];
		}
		if(arr[i] == x) cnt++;
		else cnt--;
	}
	
	cnt = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] == x) cnt++;
	}

	if(cnt > n/2) return x;
	return -1;
}
