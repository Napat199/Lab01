#include <unistd.h>
#include <stdio.h>
int main() {
	int a;
	int b;
	printf("Input number : ");
	scanf("%d", &a);
	printf("Input number : ");
	scanf("%d", &b);
	if (a>b){
	    int g = a - b;
		printf("%d %s %d %s %d", a," more than ",b," = ",g);
	}
	else {
	    int g = b - a;
		printf("%d %s %d %s %d", b," more than ",a," = ",g);
	}	
	return 0;
}
