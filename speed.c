#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int distancePlane (float x1, float x2, float y1, float y2) {
	float distance;
	distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2);
	return distance;
}
int main {
	float a1, a2, b1, b2, t1, t2, time, speed ;
	printf("Type the coordinates from the first point:\n");
	scanf("%f%f", &a1 , &b1 );
	printf("Type the coordinates from the second point:\n");
	scanf("%f%f", &a2, &b2);
	printf("Type the time from point one and from the second point:\n");
	scanf("%f%f",t1,t2);
		while (t1 < 0 && t2 < 0 && t1<t2){
		printf("The time should be positive");
		scanf("%f%f",t1,t2);
					}
	time = t2-t1
	printf("The distance traveled by the particle was:%f\n",distance(a1, b1, a2, b2));
	speed = distance(a1, b1, a2, b2)/(time);
	printf("The averange speed of the particle was:%f\n",speed);

}

