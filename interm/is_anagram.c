# define ASCII 126

int     is_anagram(char *a, char *b)
{
	int tab[ASCII] = {0};

	while (*a)
		tab[(int)*a++]++;
	while (*b)
		tab[(int)*b++]--;
	for (int i = 0; i < ASCII; i++)
		if (tab[i] != '\0')
			return (0);
	return (1);
}
