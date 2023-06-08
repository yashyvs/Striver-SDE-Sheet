#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    for(int i=0; i<arr.size(); i++) {
        if(cnt1 == 0 && el2 != arr[i]) {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if(cnt2 == 0 && el1 != arr[i]) {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if(arr[i] == el1) cnt1++;
        else if(arr[i] == el2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = 0; cnt2 = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == el1) cnt1++;
        else if(arr[i] == el2) cnt2++;
    }
    if(cnt1 > arr.size()/3) ans.push_back(el1);
    if(cnt2 > arr.size()/3) ans.push_back(el2);
        
    return ans;
}
