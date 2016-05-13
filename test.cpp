#include <iostream>
#include <stdio.h>

//PALL01 - Numeros primos
bool esPrimo(unsigned int n){
	for(unsigned i = 2; i < n; ++i){
		if(i != n && n % i == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned int tests, number;
	scanf("%d\n", &tests);
	for(unsigned int i = 0; i < tests; ++i){
		scanf("%d\n", &number);
		if(esPrimo(number)){
			printf("%s\n","yes");
		}
		else{
			printf("%s\n","no");

		}
	}
	return 0;
}


//PALL11
int main1()
{
	unsigned int tests, salary;
	scanf("%d\n", &tests);
	for(unsigned int i = 0; i < tests; ++i){
		scanf("%d\n", &salary);
		if(salary < 1500){
			printf("%g\n",salary+salary*0.1 + salary*0.9);
		}
		else{
			printf("%g\n",salary+500+ salary*0.98);

		}
	}
	return 0;
}