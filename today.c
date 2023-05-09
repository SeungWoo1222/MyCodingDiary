#include <time.h>
#include <stdio.h>

int main(void)
{	
//---------------------------여기서부터 2023.05.09 시작---------------------------
	// &&그리고 ||혹은
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a 와 b, 혹은 c 와 d 의 값이 같습니다\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	// random #include <time.h> 추가
	
	//srand(time(NULL)); // 난수 초기화
	//난수 초기화를 안하면 계속해서 같은 수가 반복해서 나옴
	//ex)0 2 1 3 또 돌려도 0 2 1 3 이런식으로
	//int num = rand() % 3; // 0 ~ 2
	//int num = rand() % 3 + 1; // 1 ~ 3



	//가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	/*if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라유\n");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//switch (i)
	//{
	//case 0:printf("가위\n"); break; // break를 안하면 아래 케이스와 디폴트 모두 출력.
	//case 1:printf("가위\n"); break;
	//case 2:printf("가위\n"); break;
	//default:printf("몰라유\n"); break;
	//}

	/*int age = 8;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default : printf("학생이 아닌가봐요\n"); break;
	}*/


	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~ 100 사이의 숫자
	printf("숫자: %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 : %d\n", chance--);
		printf("숫자를 입력하세요 : \n");
		scanf_s("%d", &answer);
		if (answer == num)
		{
			printf("정답입니다! \n");
		}
		else if (answer > num)
		{
			printf("Down! \n");
		}
		else if (answer < num)
		{
			printf("Up! \n");
		}
		else
		{
			printf("오류\n");
		}
	}
	if (chance == 0)
	{
		printf("기회 끝!\n");
	}


	return 0;
}