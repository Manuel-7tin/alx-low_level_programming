#include <stdio.h>

int isPalindrome(int num) {
	int originalNum = num;
	int reversedNum = 0;

	while (num != 0) {
		int remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}

	return (originalNum == reversedNum);
}

int main() {
	int largestPalindrome = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			int product = i * j;
			if (isPalindrome(product) && product > largestPalindrome) {
				largestPalindrome = product;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file != NULL) {
		fprintf(file, "%d", largestPalindrome);
		fclose(file);
		printf("Result saved in '102-result' file.\n");
	} else {
		printf("Failed to open the file.\n");
	}

	return (0);
}
