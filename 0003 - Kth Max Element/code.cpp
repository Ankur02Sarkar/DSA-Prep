/*
Question Link:-
https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
*/



class Solution{
    public:
    /* Approach 1*/
    // int kthSmallest(int arr[], int l, int r, int k) {
    //     sort(arr, arr+r+1);
    //     return arr[k-1];
    // }
    
    /* Approach 2  - MaxHeap*/
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> mxheap;
        for(int i = 0 ; i < r+1 ; i++){
            mxheap.push(arr[i]);
            if(mxheap.size() > k){
                mxheap.pop();
            }
        }
        return mxheap.top();
    }
    
};
