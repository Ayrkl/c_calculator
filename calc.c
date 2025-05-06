#include <stdio.h>

int main(){
	char operator;
	double num1, num2, result;

	printf("birinci sayıyı girin: ");
	scanf("%lf", &num1);
	printf("ikinci sayıyı girin: ");
	scanf("%lf", &num2);
	printf("işlem (+, -, *, /) seçin: ");
	scanf(" %c", &operator);

	switch(operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if(num2 != 0){
			result = num1 / num2;
		}else{
			printf("sıfıra bölme hatası!\n");
			return 1;
		}
		break;
	default:
		printf("geçersiz işlem!\n");
		return 1;
	}

	printf("sonuç: %.2lf\n", result);
	return 0;
}
