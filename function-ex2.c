#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float calculatesum(float num[]);
	int main (int argc, const char *argv[]) {
		float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};
		result = calculatesum(num);
		printf ("Result = %.2f\n", result);
		return 0;
		}
float calculatesum(float num[]){
	int i;
	float sum = 0.0;
	for ( i = 0; i < 6; i++){
		sum += num[i];
	}
	return sum;
}
