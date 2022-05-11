/*
Question:-
https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
*/


int minJumps(int arr[], int n){
        int maxrange = arr[0];   // max number till which i can jump
        int steps = arr[0];      // number of steps you can take
        int jumps = 1;           // number of jumps you have taken
        if(n == 1)
            return 0;
        else if(arr[0] == 0)
            return -1;
        else{
            for(int i = 1 ; i < n ; i++){
                if(i == n - 1)   // if i reaches the end then return jumps
                    return jumps;
                maxrange = max(maxrange, i + arr[i]);  // getting the maxrange
                steps--; //since you have taken a step so max steps reuces by 1 thus you move forward
                if(steps == 0){
                    jumps++; // iff you have taken all the steps then you'll have to jump
                    if(i >= maxrange)
                        return -1; // if i becomes greater than the range
                    steps = maxrange - i; // no. of steps you can take is between your current pos and maxrange
                }
            }
        }
    }
