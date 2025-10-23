// Problem Remove Space
// Solved inn 2 ways

// Code:- 1
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string temp = "";
	for(int i=0; i<str.length(); i++){
		if(str[i]== ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');

		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}

// Code:- 2
#include <bits/stdc++.h> 
bool isValid(char ch){
	return ((ch == ' '));
}
string replaceSpaces(string &str){
	Write your code here.
	string temp = "";
	string word = "@40";
	for(int i=0; i<str.length(); i++){
		if(isValid(str[i])){
			temp += word;
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}


