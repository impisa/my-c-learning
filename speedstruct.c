//Speed in a cartesian plane with struct //

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancePlane(float x1, float x2, float y1, float y2) {
  float distance;

  distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  return distance;
}

float conditionWhile(char cx[256], float ax){
	while (atof(cx) == 0) {
	     printf("Are you stupid?\nType again the coodinate:");
	     fgets(cx, 256, stdin); //Giving another value to string
		}
  ax=atof(cx);
  return ax;
}

struct coordinates {
	char x1axis[256];
	char x2axis[256];
	char y1axis[256];
	char y2axis[256];
	char t1[256];
	char t2[256];
};

float main (){
	float a1, a2, a3, a4, a5, a6;
	struct coordinates particle;

	printf("Type the x coordinate to first point:\n");
	fgets(particle.x1axis,256,stdin);
	conditionWhile(particle.x1axis, a1);
	printf("%f",a1);

	printf("Type the y coordinate to first point:\n");
	fgets(particle.y1axis,256,stdin);
	conditionWhile(particle.y1axis, a2);

	printf("Type the x coordinate to second point:\n");
	fgets(particle.x2axis,256,stdin);
	conditionWhile(particle.x2axis, a3);

	printf("Type the y coordinate to second point:\n");
	fgets(particle.y2axis,256,stdin);
	conditionWhile(particle.y2axis, a4);

	printf("Distance is: %f\n", distancePlane(a1, a3, a2, a4));
}
