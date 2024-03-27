#include <math.h> 
#include <stdio.h> 

int main() 
{ 
	double x, ret; 
	x = 2.7; 

	/* finding log(2.7) */
	ret = log(x); 
	printf("log(%lf) = %lf", x, ret); 

	return (0); 
}
