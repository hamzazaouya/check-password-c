#include<stdio.h>
#include<math.h>

int main(){

	int i = 0, num = 5214, a = 0, result = 0;

	while(num != 0) {
	
		a = num % 10;
		num = num / 10;
		
		result = result + (a * pow(8, i));
		i++;
		printf("a = %d, num = %d, result = %d \n", a, num, result);

	}

	printf("%d\n", result);
        return 0;



}
