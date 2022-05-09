/*
Question Link:-
https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1
*/

     int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            s.insert(b[i]);
        }
        return s.size();
    }


    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       unordered_set<int> s1;
       unordered_set<int> sa;
       unordered_set<int> sb;
       for(int i=0;i<n;i++)
       {
           sa.insert(a[i]);
           s1.insert(a[i]);
       }
       for(int i=0;i<m;i++)
       {
           sb.insert(b[i]);
           s1.insert(b[i]);
       }
       int size1=(sa.size()+sb.size());
       int s2=s1.size();
       return size1-s2;

   }
