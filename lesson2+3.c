//#include <stdio.h>
//
//int main()
//{
//	printf("     ##\n");
//	printf("     ##\n");
//	printf("############\n");
//	printf("############\n");
//	printf("    #  #\n");
//	printf("    #  #\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	printf("%15d\n", 0xabcdef);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("\n%d\n", printf("Hello World!"));
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	float score_c = 0.0;
//	float score_math = 0.0;
//	float score_eng = 0.0;
//	scanf("%d %f %f %f", &number, &score_c, &score_math, &score_eng);
//	printf("The each subject of  No. %d is %.2f, %.2f, %.2f.\n", number, score_c, score_math, score_eng);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//}

//#include <stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//µπ»˝Ω«Œ Ã‚
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	char ch = 0;
//	int i = 0;
//
//
//	scanf("%c", &ch);
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0; 
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d", year);
//	printf("year=%02d", month);
//	printf("year=%02d", date);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int mian() 
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	scanf("%d %d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int c = 0;
//	scanf("%c", &c);
//	printf("%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int a = 40;
//	int c = 212;
//	int ret = (-8 + 22)*a - 10 + c/2;
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	m = a / b;
//	n = a % b;
//	printf("%d %d", m, n);
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	double weight = 0;
//	double height = 0;
//	double bmi = 0;
//	scanf("%lf %lf", &weight, &height);
//	printf("The bmi is %.2lf\n:", weight / (height*height / 10000));
//	return 0;
//}




//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d", &a, &b, &c);
//	float p = (a + b + c) / 2.0; 
//	float len = a + b + c;
//	float area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("The length is %.2f, the area is %.2f\n", len, area);
//	return 0;
//}
//
//


//#include <stdio.h>
//
//int main(){
//	double r = 0;
//	double pai = 3.1415926;
//	scanf("%lf", &r);
//	double v = (4.0/ 3)*pai*(r*r*r);
//	printf("%.3lf", v);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int score[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score[i]);
//		printf("%d\n", score[i]);
//	}
//
//	
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		int temp = i;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (temp%j)*(temp / j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a + b) % 100;
//	printf("%d", c);
//	return 0;
//}