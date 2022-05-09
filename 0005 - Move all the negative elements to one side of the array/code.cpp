/*
Question Link:-
https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
*/

void rearrange(int arr[], int n)
{
  
//    APPROACH 1:-
      int arr2[n], j=0;
        for (int i = 0; i < n; i++) {
            if(arr[i]>0){
                arr2[j++]=arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if(arr[i]<0){
                arr2[j++]=arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i]=arr2[i];
        }
        

//    APPROACH 2:-
      vector<int> v;
      int w = 0, c=0;
      for(int i =0;i<n;i++)
      {
            if(arr[i]>=0)
                arr[w++] = arr[i];
            else
                v.push_back(arr[i]);
      }
      int r = 0;
      while(w<n)
      arr[w++] = v[r++];


//    APPROACH 3:-

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
