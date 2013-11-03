//Fibonacci's Sequence 2//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacciSequence (int n){
	int lastTerm, penultTerm, currentTerm, i;
	if (n <=1){
	printf("The term for this integer is 0\n");
	}
	if (n<=2){
	printf("The term for this integer is 1\n");
	}
	lastTerm = 1;
	penultTerm = 0;
	currentTerm = 2;
	for(i=0 ; i<=n-2; i=i++){
	printf("The actual term from Fibonacci's Sequence to integer :%d\n", currentTerm);
	penultTerm = lastTerm;
	lastTerm = currentTerm;
	currentTerm = lastTerm + penultTerm;
	}
	return currentTerm;
}

int main (){
	int k, sequence;
	printf("Type how many terms you want:");
	scanf("%d",&k);
	sequence = fibonacciSequence (k);
	printf ("The %dth term from Fibonacci's Sequence is:%d\n",k, sequence);
}
