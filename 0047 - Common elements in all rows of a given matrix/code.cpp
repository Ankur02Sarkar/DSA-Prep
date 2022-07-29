public static void commonElements(int Mat[][], int r, int c)
  {
    
    unordered_map<int, int> mp;

    for(int i=0;i<c;i++)
    {
      map.put(Mat[0][i], 1);
      //put count of all unique elems = 1
    }

      for(int i=1;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
          // To avoid counting duplicate elements of same row
          if(mp[ Mat[i][j] ] == i) // if count = the num of row it is in then the num is unique and is not a repetition of the num from prev row
          {
            mp[Mat[i][j]] = i + 1;
          }

          if(i==r-1 && mp[Mat[i][j]]==r) // if count = last row then the num is present in all rows
          {
            cout << Mat[i][j] << " ";
          }
        }
      }

  }
