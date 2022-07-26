#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0, r = 0, t = 0;
	scanf("%d", &q);
	for (w = 0; w < q; w++)
	{
		if (!(t - w))
		{
			e++;
			t += e;
		}
		r += e;
	}
	printf("%d\n", r);
	return 0;
}