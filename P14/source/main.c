#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C:/Users/ray/Desktop/110360206_�B�l��/P14/welcome.txt","r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}