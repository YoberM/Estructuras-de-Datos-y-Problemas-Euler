#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int *getRandNumPtr (){
    int x = rand ();
    return &x ;
}
int main () {
    srand(time(NULL));
    int * randNumPtr = getRandNumPtr () ;

    cout << *randNumPtr ; // ERROR
    return 0;
}
