#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<conio.h>

int main(void)
{
	setlocale(LC_ALL, "UKR");
	long long n;
	bool t = true;
	scanf("%lld", &n);
	if (n < 0)
	{
		printf("мiнус ");
		n = -n;
	}
	if (n == 0)
	{
		printf("нуль ");
	}
	switch (n / 1000000000) {
	case 1:
		printf("один мiль€рд ");
		break;
	case 2:
		printf("два мiль€рди ");
		break;
	case 3:
		printf("три мiль€рди ");
		break;
	}
//мiльйони
	switch (n % 1000000000 / 100000000) {
	case 1:
		printf("сто ");
		break;
	case 2:
		printf("двiстi ");
		break;
	case 3:
		printf("триста ");
		break;
	case 4:
		printf("чотириста ");
		break;
	case 5:
		printf("п'€тьсот ");
		break;
	case 6:
		printf("шiстсот ");
		break;
	case 7:
		printf("сiмсот ");
		break;
	case 8:
		printf("вiсiмсот  ");
		break;
	case 9:
		printf("дев'€тьсот  ");
		break;
	}
	if ((n % 100000000) / 10000000 == 1)
		switch (n % 100) {
		case 10:
			printf("дес€ть мiльйонiв ");
			break;
		case 11:
			printf("одинадцать мiльйонiв ");
			break;
		case 12:
			printf("дванадцать мiльйонiв ");
			break;
		case 13:
			printf("тринадцать мiльйонiв ");
			break;
		case 14:
			printf("чотирнадцать мiльйонiв ");
			break;
		case 15:
			printf("п'€тнадцать мiльйонiв ");
			break;
		case 16:
			printf("шiстнадцать мiльйонiв ");
			break;
		case 17:
			printf("сiмнадцать мiльйонiв ");
			break;
		case 18:
			printf("вiсiмнадцать мiльйонiв ");
			break;
		case 19:
			printf("дев'€тнадцать мiльйонiв ");
			break;
		}
	else {
		switch ((n % 100000000) / 10000000) {
		case 2:
			printf("двадцать ");
			break;
		case 3:
			printf("тридцать ");
			break;
		case 4:
			printf("сорок ");
			break;
		case 5:
			printf("п'€тдес€т ");
			break;
		case 6:
			printf("шiстдес€т ");
			break;
		case 7:
			printf("сiмдес€т ");
			break;
		case 8:
			printf("вiсiмдес€т ");
			break;
		case 9:
			printf("дев'€носто ");
			break;
		}
		switch (n % 10000000 / 1000000) {
		case 1:
			printf("один мiльйон ");
			break;
		case 2:
			printf("два мiльйони ");
			break;
		case 3:
			printf("три мiльйони ");
			break;
		case 4:
			printf("чотири мiльйони ");
			break;
		case 5:
			printf("п'€ть мiльйонiв ");
			break;
		case 6:
			printf("шiсть мiльйонiв ");
			break;
		case 7:
			printf("сiм мiльйонiв ");
			break;
		case 8:
			printf("вiсiм мiльйонiв ");
			break;
		case 9:
			printf("дев'€ть мiльйонiв ");
			break;
		default: if (n % 1000000000 / 1000000 != 0)
		{
			printf("мiльйонiв "); break;
		}
		}
	}
	//“ис€чi
	switch (n % 1000000 / 100000) {
	case 1:
		printf("сто ");
		break;
	case 2:
		printf("двiстi ");
		break;
	case 3:
		printf("триста ");
		break;
	case 4:
		printf("чотириста ");
		break;
	case 5:
		printf("п'€тьсот ");
		break;
	case 6:
		printf("шiстсот ");
		break;
	case 7:
		printf("сiмсот ");
		break;
	case 8:
		printf("вiсiмсот  ");
		break;
	case 9:
		printf("дев'€тьсот  ");
		break;
	}

	if ((n % 100000) / 10000 == 1)
		switch (n % 100) {
		case 10:
			printf("дес€ть тис€ч ");
			break;
		case 11:
			printf("одинадцать тис€ч ");
			break;
		case 12:
			printf("дванадцать тис€ч ");
			break;
		case 13:
			printf("тринадцать тис€ч ");
			break;
		case 14:
			printf("чотирнадцать тис€ч ");
			break;
		case 15:
			printf("п'€тнадцать тис€ч ");
			break;
		case 16:
			printf("шiстнадцать тис€ч ");
			break;
		case 17:
			printf("сiмнадцать тис€ч ");
			break;
		case 18:
			printf("вiсiмнадцать тис€ч ");
			break;
		case 19:
			printf("дев'€тнадцать тис€ч ");
			break;
		}
	else {
		switch ((n % 100000) / 10000) {
		case 2:
			printf("двадцать ");
			break;
		case 3:
			printf("тридцать ");
			break;
		case 4:
			printf("сорок ");
			break;
		case 5:
			printf("п'€тдес€т ");
			break;
		case 6:
			printf("шiстдес€т ");
			break;
		case 7:
			printf("сiмдес€т ");
			break;
		case 8:
			printf("вiсiмдес€т ");
			break;
		case 9:
			printf("дев'€носто ");
			break;
		}

		switch (n % 10000 / 1000) {
		case 1:
			printf("одна тис€ча ");
			break;
		case 2:
			printf("двi тис€чi ");
			break;
		case 3:
			printf("три тис€чi ");
			break;
		case 4:
			printf("чотири тис€чi ");
			break;
		case 5:
			printf("п'€ть тис€ч ");
			break;
		case 6:
			printf("шiсть тис€ч ");
			break;
		case 7:
			printf("сiм тис€ч ");
			break;
		case 8:
			printf("вiсiм тис€ч ");
			break;
		case 9:
			printf("дев'€ть тис€ч ");
			break;
		default: if (n % 1000000 / 1000 != 0)
		{
			printf("тис€ч "); break;
		}
		}
	}
	//—отнi
	switch (n % 1000 / 100) {
	case 1:
		printf("сто ");
		break;
	case 2:
		printf("двiстi ");
		break;
	case 3:
		printf("триста ");
		break;
	case 4:
		printf("чотириста ");
		break;
	case 5:
		printf("п'€тьсот ");
		break;
	case 6:
		printf("шiстсот ");
		break;
	case 7:
		printf("сiмсот ");
		break;
	case 8:
		printf("вiсiмсот  ");
		break;
	case 9:
		printf("дев'€тьсот  ");
		break;
	}

	if ((n % 100) / 10 == 1)
		switch (n % 100) {
		case 10:
			printf("дес€ть ");
			break;
		case 11:
			printf("одинадцать ");
			break;
		case 12:
			printf("дванадцать ");
			break;
		case 13:
			printf("тринадцать ");
			break;
		case 14:
			printf("чотирнадцать ");
			break;
		case 15:
			printf("п'€тнадцать ");
			break;
		case 16:
			printf("шiстнадцать ");
			break;
		case 17:
			printf("сiмнадцать ");
			break;
		case 18:
			printf("вiсiмнадцать ");
			break;
		case 19:
			printf("дев'€тнадцать ");
			break;
		}
	else {
		switch ((n % 100) / 10) {
		case 2:
			printf("двадцать ");
			break;
		case 3:
			printf("тридцать ");
			break;
		case 4:
			printf("сорок ");
			break;
		case 5:
			printf("п'€тдес€т ");
			break;
		case 6:
			printf("шiстдес€т ");
			break;
		case 7:
			printf("сiмдес€т ");
			break;
		case 8:
			printf("вiсiмдес€т ");
			break;
		case 9:
			printf("дев'€носто ");
			break;
		}

		switch (n % 10) {
		case 1:
			printf("один ");
			break;
		case 2:
			printf("два ");
			break;
		case 3:
			printf("три ");
			break;
		case 4:
			printf("чотири ");
			break;
		case 5:
			printf("п'€ть ");
			break;
		case 6:
			printf("шiсть ");
			break;
		case 7:
			printf("сiм ");
			break;
		case 8:
			printf("вiсiм ");
			break;
		case 9:
			printf("дев'€ть ");
			break;
		}
	}
	_getch();
	return 0;
}