#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("C:/Users/ray/Desktop/110360206_�B�l��/P15/welcome.txt","r");
	fptr2 = fopen("C:/Users/ray/Desktop/110360206_�B�l��/P15/output.txt","w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}