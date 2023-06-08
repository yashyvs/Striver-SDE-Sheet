#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	if(n==0 || x==1) return 1;

    long long val = modularExponentiation(x,n/2,m);
        
    val=(val*val)%m;
    if(n%2==0) return val%m;
    else{
        if(n<0) return (val*(1/x)%m)%m;
        return (val*x%m)%m;
    }
}
