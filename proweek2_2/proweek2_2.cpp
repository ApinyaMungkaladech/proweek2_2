#include<stdio.h>
int main() {
	int n1, n2, n3, s1, s2, s3;
	printf("Enter number : ");
	scanf_s("%d", &n1);
	printf("Enter number : ");
	scanf_s("%d", &n2);
	printf("Enter number : ");
	scanf_s("%d", &n3);
	
	s1 = n1 + n2;
	s2 = n1 + n3;
	s3 = n2 + n3;

	if (s1 >= s2) {
		if (s1 > s3) {
			printf("%d + %d = %d", n1, n2, s1);
		}
	}
	if (s2 > s1) {
		if (s2 >= s3) {
			printf("%d + %d = %d",n1, n3, s2);
		}
	}
	if (s3 >= s1) {
		if (s3 > s2) {
			printf("%d + %d = %d", n2, n3, s3);
		}
	}
	if (s1 == s2 && s1 == s3)
		printf("%d + %d = %d", n1, n2, s1);
}