#include <stdio.h>
int main(void){
	int i, n, Value, MaVvalue, MinValue;

	printf("���s�񐔂���͂��Ă������� \n");

	scanf_s("%d", &n);

	printf("�l����͂��Ă������� \n");

	scanf_s("%d", &MaVvalue);

	MinValue = MaVvalue;

	for (i = 1; i < n; i++){
		printf("�l����͂��Ă������� \n");

		scanf_s("%d", &Value);

		if (MaVvalue < Value)
		{
			MaVvalue = Value;
		}

		if (MinValue > Value)
		{
			MinValue = Value;
		}

	}

	printf("�ő�l�� %d\n", MaVvalue);
	printf("�ŏ��l�� %d\n", MinValue);


	
}