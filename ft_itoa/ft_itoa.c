#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int i;
	int j;
	int k;
	int n;
	char *tmp;

	if (nbr == -2147483648)
		return ("-2147483648");
	i = 1;
	j = 0;
	k = 0;
	n = nbr;
	if (n < 0)
	{
		j++;
		n = -n;
	}
	while ((n / i) >= 10)
	{
		i = i * 10;
		j++;
	}
	if (!(tmp = (char*)malloc(sizeof(char) * j + 2)))
		return (NULL);
	if (nbr < 0)
	{
		tmp[0] = '-';
		k++;
	}
	while (i >= 1)
	{
		tmp[k] = (n / i) + '0';
		n = n % i;
		k++;
		i = i / 10;
	}
	tmp[k] = '\0';
	return (tmp);
}
