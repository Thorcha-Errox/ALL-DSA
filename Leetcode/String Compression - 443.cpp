// Problem No :- 443
class Solution {
public:
    int compress(vector<char>& chars) {        
        int n = chars.size();
        int ansIndex = 0;
        int i=0;
        //This loop is to iterate over the vector
        while(i<n){
            // This loop is to check the next element is equal or not & j < chars.Size()
            int j = i+1;
            while(j<n && chars[i]==chars[j]){ // When non-equal elements is found loop breaks;
                j++;
            }
            chars[ansIndex++] = chars[i]; // Stores the element and increments the ansIndex.
            int count = j-i; //Store the count to characters
            if(count >1){
                string cnt = to_string(count); //convert into string for number greater then 9.
                for(char ch : cnt){
                    chars[ansIndex++] = ch; // append in the vector
                }
            }
            // when the work of one element gets complete then i becomes j 
            // because j is the element that is not equal to i;
            i=j;
        }
        return ansIndex;
    }
};