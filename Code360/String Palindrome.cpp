void reverse(char str[], int i, int j){
    if(i > j)
        return;
    
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}
bool checkPalindrome(char str[]) {
    string original = str;
    reverse(str, 0, strlen(str)-1);

    return str == original; 
}
