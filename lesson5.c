//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphbet.\n", ch);
//		}
//		getchar();
//	}
//
//		return 0;
//}

//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while (~(ch = getchar()))
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else{
//			printf("%c\n", tolower(ch));
//		}
//		getchar();
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main() {
//	int t = 0;
//	while (~scanf("%d", &t))
//	{
//		if (t == 0)
//		{
//			printf("%.1f\n", 0.5f);
//		}
//		else if (t > 0)
//		{
//			printf("%d\n", 1);
//		}
//		else
//		{
//			printf("%d\n", 0);
//		}
//	}
//	
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		if (a + b > c && b + c > a && c + a > b)
//		{
//			if (a == b && b == c && c == a)
//			{
//				printf("equilateral triangle!\n");
//			}
//			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
//			{
//				printf("Isoscels triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}