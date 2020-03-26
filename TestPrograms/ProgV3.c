#include <stdio.h>
int main() {
  float a, b, area;
  scanf("%f %f", &a, &b);
  area = .5 * a * b;
  if (area > 0)
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.", a, b, a, b, area);
  if (area < 0)
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.", a, b, a, b, -area);
  if (area == 0){
    printf("Invalid dimension! Exiting...");
    exit(EXIT_FAILURE);
  }
  return 0;
}

