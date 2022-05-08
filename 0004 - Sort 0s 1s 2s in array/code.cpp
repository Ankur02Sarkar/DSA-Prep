class Solution
{
    public:
    void sort012(int a[], int n)
    {
        /* Approach 1 - BruteForce */
        // int tmp[n],k=0;
        // for(int i = 0 ; i < n ; i++){
        //     if(a[i]==0){
        //         tmp[k++]=0;
        //     }
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(a[i]==1){
        //         tmp[k++]=1;
        //     }
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(a[i]==2){
        //         tmp[k++]=2;
        //     }
        // }
        // for(int i = 0 ; i < n ; i++){
        //     a[i]=tmp[i];
        // }
        
        /* Approach 2 - Dutch National Flag Algorithm */
        int lo = 0;//low pointer
        int hi = n - 1;//high pointer
        int mid = 0;//mid pointer
        while(mid <= hi){
            switch(a[mid]){
                case 0:
                    swap(a[lo++], a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid], a[hi--]);
                    break;
            }
        }
        
    }
};
