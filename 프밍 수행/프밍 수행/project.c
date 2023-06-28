#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int end() {
	char choice;
	printf("�޴��� ���ư��ðڽ��ϱ�? (Y / N) ");
	scanf(" %c", &choice);

	if (choice == 'Y' || choice == 'y') {
		printf("\n");
		return 0;
	}
	else if (choice == 'N' || choice == 'n') {
		printf("\n");
		return 1;
	}
	else {
		printf("�߸��� �Է��Դϴ�.\n\n");
		end();
	}
}

void prime() {
	while (1) {
		int n, count = 0;
		printf("�Ҽ����� �Ǻ��� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				count++;
			}
		}

		if (count == 0)
			printf("%d�� �Ҽ��Դϴ�.\n\n", n);
		else
			printf("%d�� �Ҽ��� �ƴմϴ�.\n\n", n);
		
		if (end() == 0)
			return;
	}
}

void fac() {
	while (1) {
		int n;
		printf("����� ���� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
		printf("%d�� ��� : ", n);
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				printf("%d ", i);
			}
		}
		printf("\n\n");

		if (end() == 0)
			return;
	}
}

void com() {
	while (1) {
		int n1, n2, i, com = 0;

		printf("�ִ������� �ּҰ������ ���� �� ���� �Է��ϼ��� : ");
		scanf("%d %d", &n1, &n2);
		for (i = 1; i <= n1 && i <= n2; ++i) {
			if (n1 % i == 0 && n2 % i == 0) {
				com = i;
			}
		}

		printf("%d�� %d�� �ִ������� %d�Դϴ�\n", n1, n2, com);
		printf("%d�� %d�� �ּҰ������ %d�Դϴ�\n\n", n1, n2, (n1 * n2) / com);
		
		if (end() == 0)
			return;
	}
}

void cal() {
	while (1) {
		int n1, n2;
		char oper;
		unsigned long long int result = 1;

		printf("+(����)\t\t-(����)\t\t*(����)\t\t/(������)\t^(����)\n");
		printf("�� �����ȣ�� ����Ͽ� �Է��ϼ���(ex : 5 + 2) : ");
		scanf("%d %c %d", &n1, &oper, &n2);
		
		if (oper == '+')
			printf("%d %c %d = %d\n\n", n1, oper, n2, n1 + n2);
		else if (oper == '-')
			printf("%d %c %d = %d\n\n", n1, oper, n2, n1 - n2);
		else if (oper == '*')
			printf("%d %c %d = %d\n\n", n1, oper, n2, n1 * n2);
		else if (oper == '/')
			printf("%d %c %d = %d...%d (%.2lf)\n\n", n1, oper, n2, n1 / n2, n1 % n2, (double)n1 / n2);
		else if (oper == '^') {
			for (int i = 0; i < n2; i++) {
				result = result * n1;
			}
			printf("%d %c %d = %lld\n\n", n1, oper, n2, result);
		}
		else
			printf("�߸��� �Է��Դϴ�\n\n");

		if (end() == 0)
			return;
	}
}

void factorial() {
	while (1) {
		int n;
		unsigned long long int result = 1;

		printf("���丮���� ���� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		printf("%d! = %lld\n\n", n, result);

		if (end() == 0)
			return;
	}
}

void binary() {
	while (1) {
		int n;
		printf("������ ��ȯ�� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
		unsigned int bit = 128 << 24; // 10000000 00000000 00000000 00000000
		int zero = 0;

		printf("2���� : ");
		while (bit > 0)
		{
			if (n & bit)
			{
				printf("%d", 1);
				zero = 1;
			}
			else if (zero == 1)
				printf("%d", 0);
			bit >>= 1;
		}
		printf("\n");
		printf("8���� : %o\n", n);
		printf("16���� : %X\n\n", n);

		if (end() == 0)
			return;
	}
}

void pytha() {
	while (1) {
		int n1, n2;
		printf("�����ﰢ���� �غ��� ���̿� ���̸� �Է����ּ���(ex 3 4) : ");
		scanf("%d %d", &n1, &n2);
		printf("������ ���� : %.2lf\n\n", sqrt(pow(n1, 2) + pow(n2, 2)));

		if (end() == 0)
			return;
	}
}

void asc() {
	while (1) {
		int n, i, j;
		int arr[1000] = { 0 };
		int temp;

		printf("�Է��Ͻ� ������ �� ������ �Է��ϼ��� : ");
		scanf("%d", &n);
		printf("������ ���ڵ��� �Է��ϼ���(ex 3, 1, 2) : ");
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}

		printf("�������� ���� : ");
		for (i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n\n");

		if (end() == 0)
			return;
	}
}

void desc() {
	while (1) {
		int arr[1000] = { 0 }, n, i, j, temp;

		printf("�Է��Ͻ� ������ �� ������ �Է��ϼ��� : ");
		scanf("%d", &n);

		printf("������ ���ڵ��� �Է��ϼ���(ex 3, 1, 2) : ");
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		printf("�������� ���� : ");
		for (i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n\n");

		if (end() == 0)
			return;
	}
}

void grade() {
	while (1) {
		int score[100] = { 0 }, n, temp;
		char name[100][30], wrap;

		printf("�Է��Ͻ� �� ���� �Է��Ͻÿ�(�ִ� 100) : ");
		scanf("%d", &n);
		printf("�̸��� ������ �Է����ּ��� (ex jaemin 90)\n");
		for (int i = 0; i < n; i++) {
			scanf("%s %d", name[i], &score[i]);
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (score[i] < score[j]) {
					temp = score[i];
					score[i] = score[j];
					score[j] = temp;
					for (int a = 0; a < 30; a++) {
						wrap = name[i][a];
						name[i][a] = name[j][a];
						name[j][a] = wrap;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if (score[i] == score[i + 1]) {
				printf("\t%d�� %10s%10c���� : %d\n", i + 1, name[i], ' ', score[i]);
				printf("\t%d�� %10s%10c���� : %d\n", i + 1, name[i + 1], ' ', score[i + 1]);
				i++;
			}
			else
				printf("\t%d�� %10s%10c���� : %d\n", i + 1, name[i], ' ', score[i]);
		}
		printf("\n");

		if (end() == 0)
			return;
	}
}


int main(void) {
	int set;
	while (1) {
		printf("=============MENU=============\n");
		printf("1.�Ҽ� �Ǻ�\n2.���\n3.�ִ� ������� �ּ� �����\n4.����\n5.���丮��\n6.���� ��ȯ\n7.��Ÿ����� ����\n8.�������� ����\n9.�������� ����\n10.���� ����\n11.���α׷� �����ϱ�\n\n");
		printf("���Ͻô� �������� ��ȣ�� �Է����ּ��� : ");
		scanf("%d", &set);
		printf("\n");

		if (set == 1)
			prime();
		else if (set == 2)
			fac();
		else if (set == 3)
			com();
		else if (set == 4)
			cal();
		else if (set == 5)
			factorial();
		else if (set == 6)
			binary();
		else if (set == 7)
			pytha();
		else if (set == 8)
			asc();
		else if (set == 9)
			desc();
		else if (set == 10)
			grade();
		else if (set == 11) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
			printf("�߸��� �Է��Դϴ�\n\n");
	}

	return 0;
}