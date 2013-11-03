//Fibonacci's Sequence 2//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int fibonacciSequence (int n){ //Function to Fibonacci//
	int lastTerm, penultTerm, currentTerm, i;

	lastTerm    = 1;
	penultTerm  = 0;
	currentTerm = 2;

	if (n <=1){ //Eliminating some kind of terms witch we know answer//
	printf("The term for this integer is 0\n");
		}

	if (n<=2){
	printf("The term for this integer is 1\n");
		}

	for (i=0 ; i<=n-2; i++) {
	printf("The actual term from Fibonacci's Sequence to integer :%d\n", currentTerm);
	penultTerm = lastTerm; 
	lastTerm = currentTerm;
	currentTerm = lastTerm + penultTerm;
	}

	return currentTerm;
}

int main (){

	int k, sequence;
	char term[256];

	printf("Type how many terms you want:");
	fgets(term, 256, stdin);
	while (atoi(term) == 0) { //Testing the answer from the user
	
	printf("Are you stupid?\nType again how many terms you want:");
	fgets(term, 256, stdin); //Giving another value to string
	}
	
	k = atoi(term); //Converts string to integer
	//The function only will be called if the user give a correct imput
	sequence = fibonacciSequence (k); //Call the function
	printf ("The %dth term from Fibonacci's Sequence is:%d\n",k, sequence);
	
}
