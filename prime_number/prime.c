#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

//2부터 1씩 증가하면서 입력 받은 수까지 증가 후 종료하는 루프
//증가된 수를 1을 제외한 자신의 수까지 증가하면서 나누어보고 나머지가 0이면 소수가 아님.
//최종까지 나머지가 0으로 떨어지지 않은 수는 소수로 판정하여 화면에 표시 
//5개를 넘어가면 줄바꿈을 수행한다.
int main(void)
{
	int column = 0;
	int inputValue;//입력받은 수//정수에 대한 변수선언
	int stepValue;//단계별 검증할 수
	int incValue; //프라임넘버를 확인하기 위한 나눔수
	printf("2 이상의 정수를 입력 :"); //2 이상의 정수를 입력받는다.
	scanf("%d", &inputValue);
	//2부터 1씩 증가하면서 입력 받은 수까지 증가 후 종료하는 루프
	for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		//증가된 수를 1을 제외한 자신의 수까지 증가하면서 나누어보고 나머지가 0이면 소수가 아님.
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break;
			}
		}//최종까지 나머지가 0으로 떨어지지 않은 수는 소수로 판정하여 화면에 표시 
		if (incValue == stepValue) {
			printf("%5d", stepValue);
			column++;
			//5개를 넘어가면 줄바꿈을 수행한다.
			if (column == 5) {
				column = 0;
				printf("\n");
			}
			
		}
	}



	

	return 0;
}