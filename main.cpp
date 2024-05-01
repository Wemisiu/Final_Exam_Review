// bring in definitions
#include <iostream>
using namespace std;

#include "binary.h"


int main() {
   
double arr [] = {9.2,0.3,-6.6,10.1,0.02};

double  * ptr; 

ptr = arr + 3;

cout << *ptr;


  
}