/*
Question Link:-
https://practice.geeksforgeeks.org/problems/reverse-a-string/1
*/

string reverseWord(string str){
    /* APPROACH 1 */
    
    // for(int i = str.length(); i > 0 ; i--){
    //     cout<<str[i-1];
    // }
    
    /* APPROACH 2 */
    int first_half = str.length() / 2;
    for(int i = 0 ; i < first_half ; i++){
        swap(str[i], str[str.length() - 1 - i]);
    }
    return str;
}
