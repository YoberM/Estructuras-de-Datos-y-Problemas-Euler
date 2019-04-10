#include <iostream>
using namespace std;
void printNTimes ( char * msg ="\n", int n = 1 ) {
	for ( int i = 0; i < n ; ++ i ) {
		cout << msg;
	}
}

 int main(){
 	char *a; int n;
	cout << "----\n";
	printNTimes();
 	cin>>a; cin>>n;
 	printNTimes(a,n);
	cout<<endl;
 }