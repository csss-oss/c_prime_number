#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

//2���� 1�� �����ϸ鼭 �Է� ���� ������ ���� �� �����ϴ� ����
//������ ���� 1�� ������ �ڽ��� ������ �����ϸ鼭 ������� �������� 0�̸� �Ҽ��� �ƴ�.
//�������� �������� 0���� �������� ���� ���� �Ҽ��� �����Ͽ� ȭ�鿡 ǥ�� 
//5���� �Ѿ�� �ٹٲ��� �����Ѵ�.
int main(void)
{
	int column = 0;
	int inputValue;//�Է¹��� ��//������ ���� ��������
	int stepValue;//�ܰ躰 ������ ��
	int incValue; //�����ӳѹ��� Ȯ���ϱ� ���� ������
	printf("2 �̻��� ������ �Է� :"); //2 �̻��� ������ �Է¹޴´�.
	scanf("%d", &inputValue);
	//2���� 1�� �����ϸ鼭 �Է� ���� ������ ���� �� �����ϴ� ����
	for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		//������ ���� 1�� ������ �ڽ��� ������ �����ϸ鼭 ������� �������� 0�̸� �Ҽ��� �ƴ�.
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break;
			}
		}//�������� �������� 0���� �������� ���� ���� �Ҽ��� �����Ͽ� ȭ�鿡 ǥ�� 
		if (incValue == stepValue) {
			printf("%5d", stepValue);
			column++;
			//5���� �Ѿ�� �ٹٲ��� �����Ѵ�.
			if (column == 5) {
				column = 0;
				printf("\n");
			}
			
		}
	}



	

	return 0;
}