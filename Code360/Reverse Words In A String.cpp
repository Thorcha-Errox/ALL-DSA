// Reverse Words In A String
string reverseString(string &str){
	// Write your code here.
	int n = str.length();
	string ans = "";
	reverse(str.begin(), str.end());

	for(int i=0; i<n; i++){
		string word = "";

		while(i<n && str[i] !=' '){
			word+= str[i];
			i++;
		}

		reverse(word.begin(), word.end());
		if(word.length() > 0){
			ans+= " " + word;
		}
	}
	if (ans.empty()) return "";
	return ans.substr(1);
}