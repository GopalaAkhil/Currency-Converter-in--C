#include <stdio.h>

void main()
{
	float dollar, inr, rupees;
	int num;

	{
		printf("\n\n WELCOME TO CURRENCY CONVERTER");
		printf("\n\n 1.United States Dollar -> Rupees");
		printf("\n\n 2.Rupees -> United States Dollor");
		printf("\n\n 3.Rupees-> British Pound ");
		printf("\n\n 4.Rupees -> Euro");
		printf("\n\n 5.Rupees -> Kuwaiti dinar");
		printf("\n\n 6.Rupees -> Japanese yen");
		printf("\n\n 7.Rupees -> Australlian Dollor");
		printf("\n\n 8.Rupees -> Canadian Dollor");
		printf("\n\n 9.Rupees -> New Zealand Dollor");
		printf("\n\n 10.Rupees -> Swiss franc");
		printf("\n\n 11.Rupees -> Chinese yuan");
		printf("\n\n 12.Rupees -> Bahraini Dollor");
		printf("\n\n 13.Rupees -> Brazilian real");
		printf("\n\n 14.Rupees -> Danish krone");
		printf("\n\n 15.Rupees -> Singapore Dollor");
		printf("\n\n 16.Rupees -> Czech koruna");
		printf("\n\n 17.Rupees -> Bahamian Dollor");
		printf("\n\n 18.Rupees -> Bulgarian Lev");
		printf("\n\n 19.Rupees -> Fijian Dollor");
		printf("\n\n 20.Rupees -> Sri Lankan Rupee");
		printf("\n\n 21.Rupees -> Indonessian rupiah");
		printf("\n\n 22. Exit");
		printf("\n\nChoose a number to convert currency = ");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("\n\nEnter the currency in United States Dollor = ");
			scanf("%f", &rupees);
			dollar = rupees * 82.2125;
			printf("\n\nThe currency in Rupees is = %f$", dollar);
			break;
		case 2:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0122;
			printf("\n\nThe currency in United States Dollor is = %f", inr);
			break;
		case 3:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0099;
			printf("\n\nThe currency in British Pound  = %f", inr);
			break;
		case 4:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0111;
			printf("\n\nThe currency in Euro is = %f", inr);
			break;
		case 5:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0037;
			printf("\n\nThe currency in Kuwaiti dinar is = %f", inr);
			break;
		case 6:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 1.5622;
			printf("\n\nThe currency in Japanese yen is = %f", inr);
			break;
		case 7:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0171;
			printf("\n\nThe currency in Australlian Dollor is = %f", inr);
			break;
		case 8:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0162;
			printf("\n\nThe currency in Canadian Dollor is = %f", inr);
			break;
		case 9:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0187;
			printf("\n\nThe currency in New Zealand Dollor is = %f", inr);
			break;
		case 10:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0111;
			printf("\n\nThe currency in Swiss franc is = %f", inr);
			break;
		case 11:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0818;
			printf("\n\nThe currency in Chinese yuan is = %f", inr);
			break;
		case 12:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0046;
			printf("\n\nThe currency in Bahraini Dollor is = %f", inr);
			break;
		case 13:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0611;
			printf("\n\nThe currency in Brazilian real is = %f", inr);
			break;
		case 14:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0824;
			printf("\n\nThe currency in Danish krone is = %f", inr);
			break;
		case 15:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0159;
			printf("\n\nThe currency in Singapore Dollor is = %f", inr);
			break;
		case 16:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.2636;
			printf("\n\nThe currency in Czech koruna is = %f", inr);
			break;
		case 17:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0122;
			printf("\n\nThe currency in Bahamian Dollor is = %f", inr);
			break;
		case 18:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0217;
			printf("\n\nThe currency in Bulgarian Lev is = %f", inr);
			break;
		case 19:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 0.0057;
			printf("\n\nThe currency in Fijian Dollor is = %f", inr);
			break;
		case 20:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 4.4524;
			printf("\n\nThe currency in Sri Lankan Rupee is = %f", inr);
			break;
		case 21:
			printf("\n\nEnter the currency in Rupees = ");
			scanf("%f", &rupees);
			inr = rupees * 181.5522;
			printf("\n\nThe currency in Indonessian rupiah is = %f", inr);
			break;
		case 22:
			printf("THANK YOU !");
			break;
		default:
			printf("invalid,enter a valid number.");
		}
	}
}
