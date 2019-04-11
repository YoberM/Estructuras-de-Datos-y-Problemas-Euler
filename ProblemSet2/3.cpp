#include <iostream>
#include <cstdlib>
using namespace std;
/*  3.1
int main(){      //to fix this code , move the function printNum
    printNum(35);//over the main function or do a prototype of
    return 0;    //the function :v
}
void printNum(int number){ std::cout << number; }
*/
//--------------------------------------------------------------
/*  3.2
void printNum (){       //to fix this code , the function should 
    std::cout << number;//have the parameter of the variable number
};                      //2.- var should be a global variable
int main(){
    int number = 35;
    printNum(number);
    return 0;
} typedef ward;
*/
//---------------------------------------------------------------
/*   3.3
void doubleNumber(int num){
    num = num * 2;}   //Para realizar el cambio se requiere un
int main(){           //paso por referencia
    int num = 35;
    doubleNumber(num); 
    std::cout << num; // Should print 70
    return 0;
}
*/
//---------------------------------------------------------------
/*  3.4
int difference(const int x,const int y){
    int diff = abs( x - y);//abs(n) returns absolute value of n
    						//to fix the code , need return 
							//variable diff;
}
int main(){
    std::cout<<difference (24,1238);
    return 0;
}
*/
//---------------------------------------------------------------
/*  3.5
int sum ( const int x, const int y ) {
return x + y ;
}

int main () {
std :: cout << sum (1, 2, 3); // Should print 6
return 0;					  //to fix this code , add an argument or do a
 }						      //sum(sum(1,2),3)
*/
//---------------------------------------------------------------
/*  3.6
const int ARRAY_LEN = 10;

int main () {
    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
                                  // other elements
    int * xPtr = arr , yPtr = arr + ARRAY_LEN - 1;
    std :: cout << * xPtr << ' ' << *yPtr ; // Should output 10 0
    return 0;								 //to fix this code , add a pointer to 
 }											 //the variable yPtr or add a pointer to
											 // "arr + ARRAY_LEN - 1" and delete the
											 //pointer of yPtr in the cout
*/


