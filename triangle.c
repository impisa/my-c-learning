//Is this triangle rectangle?//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("Type the sides of a triangle:\n\n");
	scanf("%f%f%f", &a,&b,&c);

		if((a*a)==((b*b)+(c*c)))
			{
			printf("Triangle rectangle\n\n");
			}
		else if ((b*b)==((a*a)+(c*c)))
			{
			printf("Triangle rectangle\n\n");
			}
		else if ((c*c)==((a*a)+(b*b)))
			{
			printf ("Triangle rectangle\n\n");
			}
		else
			{
			printf("Triangle isn't rectangle\n\n");
			}
}
