#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX];
	int byte;
	fptr = fopen("C:/Users/ray/Desktop/110360206_¼B¤lºÍ/P17/output.txt", "r");
	while (!feof(fptr))
	{
		byte = fread(str, sizeof(char), MAX - 1, fptr);
		str[byte] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}