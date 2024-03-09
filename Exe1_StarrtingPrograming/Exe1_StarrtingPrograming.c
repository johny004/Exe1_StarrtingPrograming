#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

void Q2(int num1, int num2);
void Q3(int N);
void Q4(int n, int m);
void Q7(int sec);
void Q10(int a1, int q , int n);

void main() {
	printf("Ex1 Starting:\n=======\n");
//	int num1, num2;
//	scanf("%d%d", &num1, &num2);
//	Q2(num1, num2);
//	int N;
//	printf("enter amount of students");
//	scanf("%d", &N);
//	Q3(N);
//	int n, m;
//	printf("enter the n and the m");
//	scanf("%d%d", &n, &m);
//	Q4(n, m);
//	printf("enter amount of second");
//	int sec;
//	scanf("%d", &sec);
//	Q7(sec);
	int a1, q, n;
	printf("enter 3 numbers");
	scanf("%d%d%d", &a1, &q, &n);
	Q10(a1, q, n);

}

void Q2(int num1, int num2) {
	for (int i = num1--; i <= num2; i++)
	{
		num1 += i;
	}
	printf("%d", num1);

}

void Q3(int N)
{
	int range;
	int cAge;
	int hAge = 0;
	int lAge = 0;
	int res;
	for (int i = 0; i < N; i++)
	{
		printf("enter next age:");
		scanf("%d", &cAge);
		if (i == 0)
		{
			lAge += cAge;
		}
		if (cAge<lAge)
		{
			lAge = cAge;
		}
		if (cAge>hAge)
		{
			hAge = cAge;
		}

	}
	range = hAge - lAge;
	if (range > 3)
	{
		printf("hetro\n");
	}
	else
	{
		printf("homogen\n");
	}


}

void Q4(int n, int m)
{
	int max = 0;
	int cNum = 0;
	int pNum = 0;
	int holder = 0;

	for (int i = 0; i < n; i++)
	{
		printf("enter your number");
		holder = cNum;
		scanf("%d", &cNum);
		if (cNum > max)
		{
			max = cNum;
		}
		pNum = holder;


		if ((pNum+max) > m )
		{
			printf("%d",pNum + "and %d", max + "are bigger then %d",m);
			break;
		}
		


	}
}

void Q7 (int sec)
{
	int hours = sec / 3600;
	int mins = sec%3600 / 60 % 60;
	int lastSec = sec % 60;
	printf("%d:%d:%d", hours , mins, lastSec);
}

void Q10(int a1, int q, int n)
{
	for (int i = 1; i < n; i * q)
	{
		printf("%d", a1 * i);
	}
	printf("the end");
}