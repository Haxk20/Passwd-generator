#include <stdio.h>
#include <time.h>
char pass[];
int seed = 0;
int random, len = 0;
char alphabet[70] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', 
'7', '8', '9', '0', '!', '@', '#', '$', '%', '^', '&', '*'};
int main () {
	printf("Please enter few numbers and write those down as they will be used to regenerate your password if you lose it. SERIOUSLY WRITE IT DOWN !!!!");
	scanf("%d", &seed);
	srand(seed);
	printf("Enter lenghth of your desired password: ");
	scanf("%d", &len);
	for (int i = 0; i <= len - 1; i++) {
		random = rand() % 71;
		printf("%c", alphabet[random]);
	}
printf("\n");
}
