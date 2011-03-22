
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	unsigned long long num;
	int i;

	if (argc != 2) {
		fprintf(stderr, "usage: %s <0xhex-number>\n", argv[0]);
		return 1;
	}

	num = strtoull(argv[1], NULL, 16);

	printf("%llx\n", num);


	for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
		putchar(num & (1ULL << i) ? '1' : '0');
		if (!(i % 8))
			putchar(' ');
	}
	putchar('\n');


	return 0;
}
