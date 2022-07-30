// Recursion

string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);
        string res = "";
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++){
            count++;
            if( i == s.length() - 1 || s[i] != s[i+1] ){
                res += to_string(count);
                res += s[i];
                count = 0;
            }
        }
        return (res);
    }


// 2nd Approach

string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s = "11";
        for(int i = 3 ; i <= n ; i++){
            string t = "";
            s+='&'; //delimeter
            int count = 1; //each char would have atleast 1 count
            for(int j = 1 ; j < s.length() ; j++){ // checking inside string
                if(s[j] != s[j-1]){ //coresponding values are unequal
                    t += to_string(count);
                    t += s[j-1];
                    count=1;
                }
                else count++;
            }
            s=t; //using nth term's ans to find n+1th term's ans
        }
        return s;
    }
