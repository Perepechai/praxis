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
		printf("�i��� ");
		n = -n;
	}
	if (n == 0)
	{
		printf("���� ");
	}
	switch (n / 1000000000) {
	case 1:
		printf("���� �i����� ");
		break;
	case 2:
		printf("��� �i������ ");
		break;
	case 3:
		printf("��� �i������ ");
		break;
	}
//�i������
	switch (n % 1000000000 / 100000000) {
	case 1:
		printf("��� ");
		break;
	case 2:
		printf("��i��i ");
		break;
	case 3:
		printf("������ ");
		break;
	case 4:
		printf("��������� ");
		break;
	case 5:
		printf("�'������ ");
		break;
	case 6:
		printf("�i����� ");
		break;
	case 7:
		printf("�i���� ");
		break;
	case 8:
		printf("�i�i����  ");
		break;
	case 9:
		printf("���'������  ");
		break;
	}
	if ((n % 100000000) / 10000000 == 1)
		switch (n % 100) {
		case 10:
			printf("������ �i�����i� ");
			break;
		case 11:
			printf("���������� �i�����i� ");
			break;
		case 12:
			printf("���������� �i�����i� ");
			break;
		case 13:
			printf("���������� �i�����i� ");
			break;
		case 14:
			printf("������������ �i�����i� ");
			break;
		case 15:
			printf("�'��������� �i�����i� ");
			break;
		case 16:
			printf("�i��������� �i�����i� ");
			break;
		case 17:
			printf("�i�������� �i�����i� ");
			break;
		case 18:
			printf("�i�i�������� �i�����i� ");
			break;
		case 19:
			printf("���'��������� �i�����i� ");
			break;
		}
	else {
		switch ((n % 100000000) / 10000000) {
		case 2:
			printf("�������� ");
			break;
		case 3:
			printf("�������� ");
			break;
		case 4:
			printf("����� ");
			break;
		case 5:
			printf("�'������� ");
			break;
		case 6:
			printf("�i������� ");
			break;
		case 7:
			printf("�i������ ");
			break;
		case 8:
			printf("�i�i������ ");
			break;
		case 9:
			printf("���'������ ");
			break;
		}
		switch (n % 10000000 / 1000000) {
		case 1:
			printf("���� �i����� ");
			break;
		case 2:
			printf("��� �i������ ");
			break;
		case 3:
			printf("��� �i������ ");
			break;
		case 4:
			printf("������ �i������ ");
			break;
		case 5:
			printf("�'��� �i�����i� ");
			break;
		case 6:
			printf("�i��� �i�����i� ");
			break;
		case 7:
			printf("�i� �i�����i� ");
			break;
		case 8:
			printf("�i�i� �i�����i� ");
			break;
		case 9:
			printf("���'��� �i�����i� ");
			break;
		default: if (n % 1000000000 / 1000000 != 0)
		{
			printf("�i�����i� "); break;
		}
		}
	}
	//�����i
	switch (n % 1000000 / 100000) {
	case 1:
		printf("��� ");
		break;
	case 2:
		printf("��i��i ");
		break;
	case 3:
		printf("������ ");
		break;
	case 4:
		printf("��������� ");
		break;
	case 5:
		printf("�'������ ");
		break;
	case 6:
		printf("�i����� ");
		break;
	case 7:
		printf("�i���� ");
		break;
	case 8:
		printf("�i�i����  ");
		break;
	case 9:
		printf("���'������  ");
		break;
	}

	if ((n % 100000) / 10000 == 1)
		switch (n % 100) {
		case 10:
			printf("������ ����� ");
			break;
		case 11:
			printf("���������� ����� ");
			break;
		case 12:
			printf("���������� ����� ");
			break;
		case 13:
			printf("���������� ����� ");
			break;
		case 14:
			printf("������������ ����� ");
			break;
		case 15:
			printf("�'��������� ����� ");
			break;
		case 16:
			printf("�i��������� ����� ");
			break;
		case 17:
			printf("�i�������� ����� ");
			break;
		case 18:
			printf("�i�i�������� ����� ");
			break;
		case 19:
			printf("���'��������� ����� ");
			break;
		}
	else {
		switch ((n % 100000) / 10000) {
		case 2:
			printf("�������� ");
			break;
		case 3:
			printf("�������� ");
			break;
		case 4:
			printf("����� ");
			break;
		case 5:
			printf("�'������� ");
			break;
		case 6:
			printf("�i������� ");
			break;
		case 7:
			printf("�i������ ");
			break;
		case 8:
			printf("�i�i������ ");
			break;
		case 9:
			printf("���'������ ");
			break;
		}

		switch (n % 10000 / 1000) {
		case 1:
			printf("���� ������ ");
			break;
		case 2:
			printf("��i �����i ");
			break;
		case 3:
			printf("��� �����i ");
			break;
		case 4:
			printf("������ �����i ");
			break;
		case 5:
			printf("�'��� ����� ");
			break;
		case 6:
			printf("�i��� ����� ");
			break;
		case 7:
			printf("�i� ����� ");
			break;
		case 8:
			printf("�i�i� ����� ");
			break;
		case 9:
			printf("���'��� ����� ");
			break;
		default: if (n % 1000000 / 1000 != 0)
		{
			printf("����� "); break;
		}
		}
	}
	//����i
	switch (n % 1000 / 100) {
	case 1:
		printf("��� ");
		break;
	case 2:
		printf("��i��i ");
		break;
	case 3:
		printf("������ ");
		break;
	case 4:
		printf("��������� ");
		break;
	case 5:
		printf("�'������ ");
		break;
	case 6:
		printf("�i����� ");
		break;
	case 7:
		printf("�i���� ");
		break;
	case 8:
		printf("�i�i����  ");
		break;
	case 9:
		printf("���'������  ");
		break;
	}

	if ((n % 100) / 10 == 1)
		switch (n % 100) {
		case 10:
			printf("������ ");
			break;
		case 11:
			printf("���������� ");
			break;
		case 12:
			printf("���������� ");
			break;
		case 13:
			printf("���������� ");
			break;
		case 14:
			printf("������������ ");
			break;
		case 15:
			printf("�'��������� ");
			break;
		case 16:
			printf("�i��������� ");
			break;
		case 17:
			printf("�i�������� ");
			break;
		case 18:
			printf("�i�i�������� ");
			break;
		case 19:
			printf("���'��������� ");
			break;
		}
	else {
		switch ((n % 100) / 10) {
		case 2:
			printf("�������� ");
			break;
		case 3:
			printf("�������� ");
			break;
		case 4:
			printf("����� ");
			break;
		case 5:
			printf("�'������� ");
			break;
		case 6:
			printf("�i������� ");
			break;
		case 7:
			printf("�i������ ");
			break;
		case 8:
			printf("�i�i������ ");
			break;
		case 9:
			printf("���'������ ");
			break;
		}

		switch (n % 10) {
		case 1:
			printf("���� ");
			break;
		case 2:
			printf("��� ");
			break;
		case 3:
			printf("��� ");
			break;
		case 4:
			printf("������ ");
			break;
		case 5:
			printf("�'��� ");
			break;
		case 6:
			printf("�i��� ");
			break;
		case 7:
			printf("�i� ");
			break;
		case 8:
			printf("�i�i� ");
			break;
		case 9:
			printf("���'��� ");
			break;
		}
	}
	_getch();
	return 0;
}