#include<stdio.h>

int main()
{
	//initialisation
	int type;

	//switch statement case
	printf("Select type 1 if you want to convert Degree Celsius to Fahrenheit.\n");
	printf("Select type 2 if you want to convert Kelvin to Fahrenheit.\n");
	printf("Select type 3 if you want to convert Degree Celsius to Kelvin.\n");
	printf("Select type 4 if you want to convert Kelvin to Degree Celsius.\n");
	printf("Select type 5 if you want to convert Fahrenheit to Degree Celsius.\n");
	printf("Select type 6 if you want to convert Fahrenheit to Kelvin.\n");
	
	printf("Select anyone type of conversion from above: ");
	scanf("%d", &type);
	

	// c means degree celsius
	// k means kelvin
	// f means fahrenheit
	switch (type)
		{
			case 1:
				// c to f
				float c, f, k;
				printf("Input value of Degree Celsius: ");
				scanf("%f", &c);
				printf("\n");
				f = (c * 9)/5 + 32;
				printf("The value of Fahrenheit is: %f", f);
				break;
				
				
			case 2:
				// k to f
				printf("Input value of Kelvin: ");
				scanf("%f", &k);
				printf("\n");
				f = ((k - 273.15) * 9)/5 + 32;
				printf("The value of Fahrenheit is: %f", f);
				break;
				
				
			case 3:
				// c to k 
				printf("Input value of Degree Celsius: ");
				scanf("%f", &c);
				printf("\n");
				k = 273 + c;
				printf("The value of kelvin is: %f", k);
				break;
				
				
			case 4:
				// k to d
				printf("Input value of Kelvin: ");
				scanf("%f", &k);
				printf("\n");
				c = k - 273;
				printf("The value of Degree Celsius is: %f", c);
				break;
				
				
			case 5:
				// f to c
				printf("Input value of Fahrenheit: ");
				scanf("%f", &f);
				printf("\n");
				c =  (f - 32) * 5/9;
				printf("The value of Degree Celsius is: %f", c);
				break;
				
				
			case 6:
				// f to k
				printf("Input value of Fahrenheit: ");
				scanf("%f", &f);
				printf("\n");
				k = ((f - 32) * 5) / 9 + 273.15;
				printf("The value of Kelvin is: %f", k);
				break;
				
			
			default:
			printf("Invalid conversion ype");

		}// switch ends
		return 0;
		}