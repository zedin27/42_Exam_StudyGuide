#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define bool int

// void	ft_union(char *str, char *str2)
// {
// 	int temp[4242] = {0};
// 	int i;
//
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (temp[(int)str[i]] == 0)
// 		{
// 			temp[(int)str[i]] = 1;
// 			write(1, &str[i], 1);
// 		}
// 		i++;
// 	}
// 	i = 0;
// 	while (str2[i])
// 	{
// 		if (temp[(int)str2[i]]  == 0)
// 		{
// 			temp[(int)str2[i]] = 1;
// 			write(1, &str2[i], 1);
// 		}
// 		i++;
// 	}
// }

void	ft_union(char *str1, char *str2)
{
  bool bin_hash[4242] = {0};
  int ip_ind;
  int res_ind;
  char temp;

  ip_ind = 0;
  res_ind = 0;
  /* In place removal of duplicate characters*/
  while (*(str1 + ip_ind))
  {
    temp = *(str1 + ip_ind);
    if (bin_hash[(int)temp] == 0)
    {
        bin_hash[(int)temp] = 1;
        *(str1 + res_ind) = *(str1 + ip_ind);
        res_ind++;
    }
    ip_ind++;
  }

  /* After above step string is stringiittg.
     Removing extra iittg after string*/
  *(str1+res_ind) = '\0';

  ip_ind = 0;
  res_ind = 0;
  while (*(str2 + ip_ind))
  {
	temp = *(str2 + ip_ind);
	if (bin_hash[(int)temp] == 0)
	{
		bin_hash[(int)temp] = 1;
		*(str + res_ind) = *(str2 + ip_ind);
		res_ind++;
	}
	ip_ind++;
  }
  *(str2+res_ind) = '\0';

}

int main()
{
	char str[] = "hello";
	char str2[] = "lol";
	void *str3 = ft_union(str, str2);
	printf("%s", str3);
	getchar();
	return 0;
}
