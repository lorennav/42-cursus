#include <stdio.h>
#include <ctype.h>

int 	main(void)
{
	int		i;

	for(i = 'A'; i <= 'Z'; ++i)
	{
		printf("----MY TO LOWER-----\n");
		printf("%c\n", ft_tolower(i));
		printf("----TO LOWER-----\n");
		printf("%c\n", tolower(i));
	}
  int		b;

	for(b = 'a'; i <= 'z'; ++b)
	{
		printf("----MY TO UPPER-----\n");
		printf("%c\n", ft_toupper(b));
		printf("----TO UPPER-----\n");
		printf("%c\n", toupper(b));
	}

  int		c;

	for(c = 0; c <= 149; ++i)
	{
		printf("----MY Is Ascii-----\n");
		printf("%d\n", ft_isascii(c));
		printf("----Is Ascii----\n");
		printf("%d\n", isascii(c));
	}

  char *str = "I am 123num ? ";
	int d;

	d = 0;
	while (str[d] != '\0')
	{
		printf("-----MY ISALNUM-------\n");
		printf("%d\n", ft_isalnum(str[d]));
		printf("----IS ALNUM--------\n");
		printf("%d\n", isalnum(str[d]));
		d++;
	}
		return (0);

		printf("%d\n", ft_atoi("a+123"));
		printf("%d\n", atoi("a+123"));


 char *str1 = "ABCDEF";
  char *str2 = "ABCDEF";
  int n = 3;
  
  printf("%d\n", ft_strncmp(str1, str2, n) );
  return (0);

char *s1 = "sssssllafafjoigheowngowengvopn<pvnveºwongvoabevoabvo n<oinwv";
  char *s2 = " Wwwwwwlawoowlalwlwwlwllwlwlwlwlwlwllwlwlwlwllwlwlwlwlwlwlwl";

  printf("%s", ft_strjoin(s1,s2));
 
   
  printf("%s\n", strnstr("Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts. Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean. A small river named Duden flows by their place and supplies it with the necessary regelialia. It is a paradisematic country", "supplies it", 1000));
  printf("%s\n", ft_strnstr("Far far away, behind the word mountains, far from the countries Vokalia and Consonantia, there live the blind texts. Separated they live in Bookmarksgrove right at the coast of the Semantics, a large language ocean. A small river named Duden flows by their place and supplies it with the necessary regelialia. It is a paradisematic country", "supplies it", 1000));


char s[] = "Hellooo";
  char p[] = "Hellooo";

  ft_bzero(s, 4);
  bzero(p, 4);

  printf("%s\n", s);
  printf("%s\n", p);

	char src[] = "Hellooo";
  char dst[] = "Wooooooorlld";
  char src2[] = "Hellooo";
  char dst2[] = "Wooooooorlld";

  memcpy(dst, src, 5);
  ft_memcpy(dst2, src2, 5);
  
  printf("%s\n", dst);
  printf("%s\n", dst2);

	char s[] = "Aticleworld";
    char s2[] = "Aticleworld";
    char *ptr = memchr(s,'c',sizeof(s));
    char  *ptr2 = ft_memchr(s2,'c',sizeof(s));
    if (ptr != NULL)
    {
        printf ("search character found:  %s\n", ptr);
        printf ("search character found:  %s\n", ptr2);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
