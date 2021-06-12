#include<stdio.h>
#include<string.h>

int main(){

	char password[] = "1234";
	char userpass[20] = "";
	
	printf("Input the password : ");
	scanf("%s", userpass);

	int i = 0;
	int a = 0;
	while(i < strlen(userpass)){

		if(password[i] != userpass[i]){
			a = 1;
			break;
		}	
		i++;
	}

	if(a == 0){
		printf("Correct password\n");
	}
	else{
		printf("Incorrect password\n");
	}

}
