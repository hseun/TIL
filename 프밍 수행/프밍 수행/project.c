#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int end() {
	char choice;
	printf("메뉴로 돌아가시겠습니까? (Y / N) ");
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
		printf("잘못된 입력입니다.\n\n");
		end();
	}
}

void prime() {
	while (1) {
		int n, count = 0;
		printf("소수인지 판별할 수를 입력하세요 : ");
		scanf("%d", &n);
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				count++;
			}
		}

		if (count == 0)
			printf("%d는 소수입니다.\n\n", n);
		else
			printf("%d는 소수가 아닙니다.\n\n", n);
		
		if (end() == 0)
			return;
	}
}

void fac() {
	while (1) {
		int n;
		printf("약수를 구할 수를 입력하세요 : ");
		scanf("%d", &n);
		printf("%d의 약수 : ", n);
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

		printf("최대공약수와 최소공배수를 구할 두 수를 입력하세요 : ");
		scanf("%d %d", &n1, &n2);
		for (i = 1; i <= n1 && i <= n2; ++i) {
			if (n1 % i == 0 && n2 % i == 0) {
				com = i;
			}
		}

		printf("%d와 %d의 최대공약수는 %d입니다\n", n1, n2, com);
		printf("%d와 %d의 최소공배수는 %d입니다\n\n", n1, n2, (n1 * n2) / com);
		
		if (end() == 0)
			return;
	}
}

void cal() {
	while (1) {
		int n1, n2;
		char oper;
		unsigned long long int result = 1;

		printf("+(덧셈)\t\t-(뺄셈)\t\t*(곱셈)\t\t/(나눗셈)\t^(제곱)\n");
		printf("위 연산기호를 사용하여 입력하세요(ex : 5 + 2) : ");
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
			printf("잘못된 입력입니다\n\n");

		if (end() == 0)
			return;
	}
}

void factorial() {
	while (1) {
		int n;
		unsigned long long int result = 1;

		printf("팩토리얼을 구할 수를 입력하세요 : ");
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
		printf("진수로 변환할 수를 입력하세요 : ");
		scanf("%d", &n);
		unsigned int bit = 128 << 24; // 10000000 00000000 00000000 00000000
		int zero = 0;

		printf("2진수 : ");
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
		printf("8진수 : %o\n", n);
		printf("16진수 : %X\n\n", n);

		if (end() == 0)
			return;
	}
}

void pytha() {
	while (1) {
		int n1, n2;
		printf("직각삼각형의 밑변의 길이와 높이를 입력해주세요(ex 3 4) : ");
		scanf("%d %d", &n1, &n2);
		printf("빗변의 길이 : %.2lf\n\n", sqrt(pow(n1, 2) + pow(n2, 2)));

		if (end() == 0)
			return;
	}
}

void asc() {
	while (1) {
		int n, i, j;
		int arr[1000] = { 0 };
		int temp;

		printf("입력하실 숫자의 총 개수를 입력하세요 : ");
		scanf("%d", &n);
		printf("정렬할 숫자들을 입력하세요(ex 3, 1, 2) : ");
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

		printf("오름차순 정렬 : ");
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

		printf("입력하실 숫자의 총 개수를 입력하세요 : ");
		scanf("%d", &n);

		printf("정렬할 숫자들을 입력하세요(ex 3, 1, 2) : ");
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

		printf("내림차순 정렬 : ");
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

		printf("입력하실 총 수를 입력하시오(최대 100) : ");
		scanf("%d", &n);
		printf("이름과 점수를 입력해주세요 (ex jaemin 90)\n");
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
				printf("\t%d등 %10s%10c점수 : %d\n", i + 1, name[i], ' ', score[i]);
				printf("\t%d등 %10s%10c점수 : %d\n", i + 1, name[i + 1], ' ', score[i + 1]);
				i++;
			}
			else
				printf("\t%d등 %10s%10c점수 : %d\n", i + 1, name[i], ' ', score[i]);
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
		printf("1.소수 판별\n2.약수\n3.최대 공약수와 최소 공배수\n4.계산기\n5.팩토리얼\n6.진수 변환\n7.피타고라스의 정리\n8.오름차순 정렬\n9.내림차순 정렬\n10.순위 정렬\n11.프로그램 종료하기\n\n");
		printf("원하시는 선택지의 번호를 입력해주세요 : ");
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
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
			printf("잘못된 입력입니다\n\n");
	}

	return 0;
}