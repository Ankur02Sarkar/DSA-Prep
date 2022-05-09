/*
Question:-
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/


// Kadane's Algorithm
long long maxSubarraySum(int arr[], int n){
        long max_sum=arr[0], curr_sum=arr[0];
        for(int i =1; i<n;i++){
            
            if(curr_sum<0){
                curr_sum=arr[i];
            }
            else{
                curr_sum+=arr[i];
            }
            if(curr_sum > max_sum){
                max_sum=curr_sum;
            }
        }
        return max_sum;
    }
};
