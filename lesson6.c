//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	float weight = 0.0;
//	float height = 0.0;
//	float bmi = 0.0;
//	while (~scanf("%f %f", &weight, &height))
//	{
//		bmi = weight / (height*height / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi >= 23.9 && bmi <= 27.9)
//		{
//			printf("overweight!");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main() {
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	while (~scanf("%f %f %f", &a, &b, &c))
//	{
//		float disc = b*b - 4 * a*c;
//		if (disc == 0)
//		{
//			printf("Not quadratic equation!\n");
//		}
//		else if (disc > 0)
//		{
//			printf("x1 = %.2f, x2 = %.2f\n", (-b-sqrt(disc))/(2*a), (-b+sqrt(disc))/(2*a));
//		}
//		else if (disc < 0)
//		{
//			printf("x1 = %.2f-%.2fi, x2 = %.2f+%.2fi\n", -b / (2 * a), -sqrt(disc) / (2 * a), -b / (2 * a), sqrt(disc) / (2 * a));
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main() {
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	while (~scanf("%f %f %f", &a, &b, &c))
//	{
//		float disc = b*b - 4 * a * c;
//		if (a != 0)
//		{
//			if (disc > 0.0)
//			{
//				printf("x1 = %.2f; x2 = %.2f\n", ((-b) - sqrt(disc)) / (2 * a), ((-b) + sqrt(disc)) / (2 * a));
//			}
//			else if (disc == 0.0)
//			{
//				printf("x1 = x2 = %.2f/n", -b / (2 * a));
//			}
//			else
//			{
//				printf("x1 = %.2f-%.2fi; x2 = %.2f+%.2fi\n", (-b) / (2 * a), sqrt(-disc) / (2 * a), (-b) / (2 * a), sqrt(-disc) / (2 * a));
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n!");
//		}
//	}
//	return 0;
//}
//


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int year = 0;
//	int month = 0;
//	int days[] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };
//	while (~scanf("%d %d", &year, &month))
//	{
//		int  day = days[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			if (month == 2)
//			{
//				day += 1;
//			} 
//			
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	float a = 0.0;
//	float b = 0.0;
//	char op = 0;
//	while (~scanf("%f %c %f", &a, &op, &b))
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4f + %.4f = %.4f\n", a, b, a + b);
//			break;
//
//		case '-':
//			printf("%.4f - %.4f = %.4f\n", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4f * %.4f = %.4f\n", a, b, a * b);
//			break;
//		case '/':
//			if (b == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			printf("%.4f * %.4f = %.4f\n", a, b, a * b);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (~scanf("%d", &i))
//	{
//		for (int n = 0; n < i; n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (~scanf("%d", &i))
//	{
//		for (int x = 0; x < i; x++)
//		{
//			for (int y = 0; y < i; y++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (~scanf("%d", &i))
//	{
//		for (int x = 1; x <= i; x++)
//		{
//			for (int y = 1; y <=x; y++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = n; i >= 1; i--)
//		{
//			for (int j = i; j >= 1; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int x = 0; x < n; x++)
//		{
//			for (int y = 0; y < n - 1 - x; y++)
//			{
//				printf(" ");
//			}
//			for (int y = 0; y <= x; y++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		//行数控制
		for (int i = 0; i < n; i++)
		{
			//空格
			int j = 0;
			for (j = 0; j < n - 1 - i; j++)
			{
				printf(" ");
			}
			//*
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}

	}
	return 0;
}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		//行数
//		for (i = 0; i < n; i++)
//		{
//			//一行
//			for (j = 0; j < n; j++)
//			{
//				//行和列的和
//				//这里可以把行数和列数标出来就能看明白
//				if (i + j < n - 1)
//				{
//					printf(" ");
//
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}