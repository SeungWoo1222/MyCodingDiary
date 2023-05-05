#include <stdio.h>

int main_loop(void)
{
	/*printf("Hello");
	printf("Hello");
	printf("Hello");
	printf("Hello");
	printf("Hello");
	printf("Hello");
	printf("Hello");
	*/
	
	// ++ 뿔뿔
	/*int a = 10;
	printf("a 는 %d\n", a);
	++a; a에다가 +1을 하고 a출력 
	printf("a 는 %d\n", a);
	a++; a를 출력하고 그 뒤에 1을 더함
	printf("a 는 %d\n", a);
	printf("a 는 %d\n", a);그래서 여기서 a가 12가 됨*/

	//반복문
	/*for(선언; 조건; 증감)*/
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	// while (조건) {}
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		//i++;
	}*/

	// do { } while (조건);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("     두 번째 반복문 : %d\n", j);
		}
	}*/

	//구구단
	/*for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}*/


	//*
	//**
	//***
	//****
	//*****
	
	// 내가한거
	/*char star = '*';
	for (int i = 1; i <= 5; i++)
	{
		printf("%c * %d\n", star, i);
	}*/

	//답
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	

	//    *
	//   **
	//  ***
	// ****
	//*****

	
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf("S");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}	*/

	//프로젝트
	
	//int floor;
	//printf("몇층으로 할 것이냐?");
	//scanf_s("%d", &floor);

	//for (int i = 0; i < floor; i++) //층수
	//{
	//	for (int j = i; j < floor - 1; j++) //공백의 수
	//	{
	//		printf(" ");
	//	}
	//	for (int k = 0; k < 2 * i + 1; k++) //별의 수
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}	
	//return 0;
}

	/*int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	for (int i = 1; i <= floor; i++)
	{
		for (int j = 2 * i - 1; i <= floor; j++)
		{
			printf("*");
		}
		printf("\n");
	}



	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 1; i <= floor; i++)
	{
		for (int j = 2 * i - 1; j <= floor; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

//	int floor;
//	printf("몇 층으로 쌓겠느냐?"); //5
//	scanf_s("%d", &floor);
//	for (int i = 1; i <= floor; i++) //1
//	{
//		for (int j = 2 * i - 1; j <= floor; j++) //1 <= 5(2번을 더 찍어야됨)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//} 

//나는 for (int j = 2 * i - 1; j <= floor; j++) 구문에서 j가 증가하는게 이해가 안됐었음
//내가 생각했을 때 j에 ++을 먹인 후 다시 for문을 돌때 또 j=2*i-1 을 하는 줄 알았는데 그게 아니였음
//2*i-1은 j를 정의하기 위한 식이였지 다시 도는게 아님 그냥 j=1(i가 1이라는 가정)이 되는거고 거기서 ++을 먹이는 거다.