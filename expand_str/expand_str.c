#include <unistd.h>

int ft_strim_front(char *s)
{
	int i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
		i++;
	return (i);
}

int ft_strim_back(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
		j++;
	while ((s[j] == ' ' || s[j] == '\t') && j > 0)
		j--;
	return (j);
}

void ft_space()
{
	char c;

	c = ' ';
	write(1, &c, 1);
	write(1, &c, 1);
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *s;

	if (argc == 2)
	{
		s = argv[1];
		i = ft_strim_front(s);
		j = ft_strim_back(s);
		while (s[i] != '\0' && i < j)
		{
			if (s[i] == ' ' || s[i] == '\t')
			{
				while (s[i] == ' ' || s[i] == '\t')
					i++;
			if (i < j)
				ft_space();
			}
			else
			{
				write(1, &s[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
