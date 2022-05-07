/*
Question Link :-
https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/#
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    
    /* APPROACH 1*/
    
    auto mx = 0;
    auto mn = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(a[i]>mx){
          mx = a[i];
        }
        if(a[i]<mn){
          mn = a[i];
        }
    }
    return {mn, mx};
    
    /* APPROACH 2*/
    
    // auto mx = *max_element(a, a+n);
    // auto mn = *min_element(a, a+n);
    // return {mn, mx};
}
