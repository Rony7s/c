/*
MD. RONY AHMMED SHAH
ICTE -BDU
taka to paisa
*/


#include<stdio.h>


int main(){


	float priceTaka;
	int pricePaisa;
	printf("Enter the item in Taka in Decimal:\n");
	scanf(" %f", &priceTaka);
	pricePaisa = priceTaka * 100;
	printf("This item in Paisa is: %d\n", pricePaisa);

	return 0;

}
