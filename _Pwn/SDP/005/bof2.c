#include <stdio.h>
#include <unistd.h>
#include <string.h>
// gcc -o bof2 bof2.c -fno-stack-protector
int len = 0;
int main(void)
{
	char buf[8];//sfp 8
	memset(buf, "\x00", sizeof(buf));

	while (1)
	{
		printf("bof? : %s\n", buf);
		scanf("%80s", buf);
		len = strlen(buf);
		if (buf[0] == 'y')
		{
			buf[len] = '\x11';
			continue;
		}
		else if (buf[0] == 'n')
			break;
		else
			return 1;
	}

	return 0;
}