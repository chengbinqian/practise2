#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int sec = 0;
//	scanf("%i", &sec);
//	int h = sec / 3600;
//	int min = sec / 60 % 60;
//	int second = sec % 60;
//	printf("%i %i %i", h, min, second);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i = 0;
//	float score = 0.0;
//	float sum = 0.0;
//	float averge = 0.0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//	}
//	printf("%.2f %2.f", sum, sum / 3.0);
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if (m%h>0)
//			printf("%d\n", n - m / h - 1);
//		else
//			printf("%d\n", n - m / h);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i = 0;
//	int sum = 0;
//	int input = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &input);
//		sum += input;
//	}
//	printf("%.1f\n", sum / 5.0);
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	float price = 0;
//	int month = 0;
//	int date = 0;
//	int ticket = 0;
//	while (scanf("%f %d %d %d", &price,&month,&date,&ticket) != EOF);
//	{
//		if ((month = 11) && (date = 11))
//			if (ticket)
//				printf("今天的价格是： %f", price*0.8);
//			else
//				printf("今天的价格是： %f", price*0.8 - 50);
//		else if ((month = 12) && (date = 12))
//			if (ticket)
//				printf("今天的价格是： %f", price*0.8);
//			else
//				printf("今天的价格是： %f", price*0.8 - 50);
//		else
//				printf("今天的价格是： %f", price );		
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	float price = 0;
//	int month = 0;
//	int date = 0;
//	int ticket = 0;
//	scanf("%f", &price);
//	scanf("%2d", &month);
//	scanf("%2d", &date);
//	scanf("%d", &ticket);
//
//	if (((month = 11) && (date = 11)) || ((month = 12) && (date = 12)))
//	{
//		if (ticket)
//			printf("今天的价格是： %f", price*0.8);
//			
//		else
//			printf("今天的价格是： %f", price*0.8 - 50);
//			
//	}
//	
//	else
//	{
//		printf("今天的价格是： %f", price);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	float price = 0;
//	int month = 0;
//	int date = 0;
//	int ticket = 0;
//
//	scanf("%f%d%d%d", &price, &month, &date, &ticket);
//	if ((month == 11) && (date == 11))
//	{
//		price *= 0.7;
//		if (ticket = 1)
//		{
//			price -= 50;
//		}
//	}
//	if ((month == 12) && (date == 12))
//	{
//		price *= 0.8;
//		if (ticket = 1)
//		{
//			price -= 50;
//		}
//	}
//	if (price < 0)
//	{
//		price = 0;
//	}
//	printf("%.2f", price);
//	return 0;
//}


//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main() {
//	int n = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//		qsort(score, n, 4, cmp_int);
//	for(int i = 0; i < 5;i++)
//	{
//		printf("%d ", score[--n]);
//	}
//	return 0;
//}
//
//


//#include<stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//		{
//			count_a++;
//		}
//		else if (arr[i] == 'B')
//		{
//			count_b++;
//		}
//		i++;
//	}
//	if (count_a > count_b)
//	{
//		printf("%c\n", 'A');
//	}
//	else if (count_a < count_b)
//	{
//		printf("%c\n", 'B');
//	}
//	else
//	{
//		printf("%c\n", 'E');
//	}
//
//	return 0;
//}


