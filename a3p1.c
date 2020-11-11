// Lacy Hayes
// COP 3223C
// 10.16.20
// Assignment 3 - Program 1
 
// program will output the ten elements in the array
#include <stdio.h>
 
int main () {		
 	// declaring array
int x[10];
// assigning ten elements to the array
x[0] = 1;
x[1] = 11;
x[2] = 21;
x[3] = 31;
x[4] = 41;
x[5] = 51;
x[6] = 61;
x[7] = 71;
x[8] = 81;
x[9] = 91;
 
// for loop that will printout each of the elements in the array
for(int i = 0; i<10; i++) {
printf("%d\n", x[i]);	
}	
return 0;
 
}

