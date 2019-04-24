#include <iostream>
#include <string.h>
using namespace std;
const string vowels = " aeiou ";

string pigLatinify ( const string s) {
	if(s. size () == 0) {
	// oops , empty string
	return s;
}
	if(s. find ("qu") == 0) { // Starts with "qu"
	 return s. substr (2, s. size () -2) + "-" + s. substr (0, 2) + "ay"
	;
	} else if( vowels . find (s [0]) != string :: npos ) { // Starts with a vowel
	return s + " way";
	} else {
	return s. substr (1, s. size () -1) + "-" + s[0] + "ay";
	}
}

int main(){
	string pal;
	for(int i=0;i<5;i++){
		cin>>pal;
		cout<<pal<<" "<<pigLatinify(pal)<<endl;
	}
	return 0;
}
