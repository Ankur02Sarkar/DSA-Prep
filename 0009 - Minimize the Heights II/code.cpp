/*
Question:-
https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
*/


int getMinDiff(int arr[], int n, int k) {
        if(n==1){
            return 0;
        }
        sort(arr, arr+n);
            int res = arr[n-1] - arr[0];
            int mx, mn;
        for(int i = 1 ; i <= n ; i++){
            if(arr[i]-k<0){
                continue;
            }
            mx = max(arr[i-1]+k, arr[n-1]-k);
            mn = min(arr[0]+k, arr[i]-k);
 
            res = min(res, mx - mn);
        }
        return res;
    }
