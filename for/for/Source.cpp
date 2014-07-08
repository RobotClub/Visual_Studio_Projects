#include <stdio.h>
int main(void){
	int i, n, Value, MaVvalue, MinValue;

	printf("実行回数を入力してください \n");

	scanf_s("%d", &n);

	printf("値を入力してください \n");

	scanf_s("%d", &MaVvalue);

	MinValue = MaVvalue;

	for (i = 1; i < n; i++){
		printf("値を入力してください \n");

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

	printf("最大値は %d\n", MaVvalue);
	printf("最小値は %d\n", MinValue);


	
}