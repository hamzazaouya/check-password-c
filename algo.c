#include<stdio.h>
 
int main(){


        char  month[12][3] = {"Jan", "Feb", "Mar","Apr", "Mai", "Jun", "jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 

        int n = 0;
	int i = 0;
        printf("Enter a Number");
	scanf("%d", &n);

        for( i = 0; i < 3; i++){
		
		printf("%c", month[n-1][i]);		

	}

	printf("\n");

        return 0;



}
