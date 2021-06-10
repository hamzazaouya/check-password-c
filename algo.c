#include <stdio.h>

int power(int a,int b) {

	int i = 1;
	while(i < b) {

		a = a * a;
		i++;
	}

	return a;

}

float squreRoot(int a ){

	int number = a;
	float temp, sqrt;
	sqrt = number / 2;
	temp = 0;
	
	while(sqrt != temp){

		temp = sqrt;
		sqrt = (number/temp + temp)/2;
	
	}

}

 
int main(){
	
	float	a = 25;
	float	b = 35;
	float	c = 12;
	float	dt = 0;
	float	r1 = 0;
	float	r2 = 0;
	
	dt = power(b,2) -(4*a*c);

	if(dt > 0){
		
		r1 = (-b + squreRoot(dt))/(2*a);
		r2 = (-b - squreRoot(dt))/(2*a);

		printf("Root1 = %f\n", r1);
		printf("Root2 = %f\n", r2);

	}else if(dt = 0){
		
		r1 = -b/(2*a);
		printf("Root = %.2f", r1);
			
	}else {

		printf("This Equation Dont have a Solution in R");
		
	}
	
	return 0;
}
