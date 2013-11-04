#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancePlane(float x1, float x2, float y1, float y2) {
  float distance;

  distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  return distance;
}

int main() {
  float a1, a2, b1, b2, t1, t2, time, speed;
  char c1[256], c2[256], c3[256], c4[256], c5[256], c6[256];

  printf("Type the x coordinate from the first point:\n");
  fgets(c1, 256, stdin);
     while (atof(c1) == 0) {
     printf("Are you stupid?\nType again the coodinate:");
     fgets(c1, 256, stdin); //Giving another value to string
	}
  a1=atof(c1);

  printf("Type the y coordinate from the first point:\n");
  fgets(c2, 256, stdin);
     while (atof(c2) == 0) {
     printf("Are you stupid?\nType again the coodinate:");
     fgets(c2, 256, stdin); //Giving another value to string
	}
  b1=atof(c2);

  printf("Type the x coordinate from the second point:\n");
  fgets(c3, 256, stdin);

    while (atof(c3) == 0) {
    printf("Are you stupid?\nType again the coodinate:");
    fgets(c3, 256, stdin); //Giving another value to string
	}
  a2=atof(c3);

  printf("Type the y coordinate from the second point:\n");
  fgets(c4, 256, stdin);

    while (atof(c4) == 0) {
    printf("Are you stupid?\nType again the coodinate:");
    fgets(c4, 256, stdin); //Giving another value to string
	}
  b2=atof(c4);

  
  printf("Type the time from the fist pair of coordeates:\n");
  fgets(c5, 256, stdin);

  while (atof(c5) == 0 || atof(c5) < 0) {
  printf("Are you stupid?\nType again the time:");
  fgets(c5, 256, stdin); //Giving another value to string
	}
  t1=atof(c5);

  printf("Type the time from the second pair of coordeates:\n");
  fgets(c6, 256, stdin);

    while (atof(c6) == 0 || c6 < 0 || atof(c6) <= atof(c5) ) {
    printf("Are you stupid?\nType again the time:");
    fgets(c6, 256, stdin); //Giving another value to string
	}

  t2=atof(c6);

  time = (t2-t1);

  printf("The distance traveled by the particle was:%f\n", distancePlane(a1, a2, b1, b2));
  speed = distancePlane(a1, a2, b1, b2) / time;
  printf("The averange speed of the particle was:%f\n", speed);

}

