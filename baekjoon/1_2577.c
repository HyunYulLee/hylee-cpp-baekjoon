//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//char* Int_to_char(int data) {
//	int num_digits = (int)log10(data) + 1;
//	char* S_char = (char*)malloc(sizeof(char) * num_digits + 1); 
//	int i = 0;
//	while (data != 0) {
//		S_char[i++] = (char)((data % 10) + '0');
//		data = data / 10;
//	}
//
//	return S_char;
//}
//
//
//int main() {
//	
//	int A, B, C;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	scanf("%d", &C);
//
//	char* S_char;
//	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
//			
//	int S = A * B * C;
//	int num_digits = (int)log10(S) + 1;
//	S_char = (char*)malloc(sizeof(char) * num_digits + 1);
//	S_char = Int_to_char(S);
//
//	for (int i = 0; i < strlen(S_char); i++) {
//		if (S_char[i] == '0') zero++;
//		else if (S_char[i] == '1') one++;
//		else if (S_char[i] == '2') two++;
//		else if (S_char[i] == '3') three++;
//		else if (S_char[i] == '4') four++;
//		else if (S_char[i] == '5') five++;
//		else if (S_char[i] == '6') six++;
//		else if (S_char[i] == '7') seven++;
//		else if (S_char[i] == '8') eight++;
//		else if (S_char[i] == '9') nine++;
//	}
//
//	printf("%d\n", zero);
//	printf("%d\n", one);
//	printf("%d\n", two);
//	printf("%d\n", three);
//	printf("%d\n", four);
//	printf("%d\n", five);
//	printf("%d\n", six);
//	printf("%d\n", seven);
//	printf("%d\n", eight);
//	printf("%d\n", nine);
//
//}