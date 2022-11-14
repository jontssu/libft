#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>
int	main(void)
{
//	char *b;
//	char a[10] = {'a','b','c','d','e'};
//	b = &a[0];
//	char c[10] = {'c','c','c','d','e'};
//	char *d;
//	d = &c[0];
//	printf("%d\n", ft_isalnum('K') == 1);
//	printf("%d\n", ft_isalnum('4') == 1);
//	printf("%s\n", ft_memset(b, 'i', 3));
//	char e[]="1234567";
//	char f[]="eeeeeee";
//	char g[]="uuuuuuu";
//	printf("%s\n", ft_memmove(e, f, 5));
//	char h[]="1234567";
//	char i[]="eeeeeee";
//	char j[]="uuuuuuu";
//	printf("%s\n", memmove(h, i, 5));
//	char    str1[40] = "I am going from Delhi to Gorakhpur";
//    char    str2[40] = "I am going from Delhi to Gorakhpur";
//    char    str3[40] = "I am going from Delhi to Gorakhpur";
//    char    str4[40] = "I am going from Delhi to Gorakhpur";
//    printf( "Source:\t\t%s\n", str1 + 5 );
//    printf( "Destination:\t%s\n", str1 + 11 );
//    memmove( str1 + 11, str1 + 5, 29 );
//    ft_memmove( str4 + 11, str4 + 5, 29 );
//    printf( "Result:\t\t%s\n", str1 );
//  printf( "ft:\t\t%s\n", str4 );
//	char l[]="12345678";
//	char m[]="eeeee";
//	char n[]="12345678";
//	char o[]="eeeee";
//	printf("%zu\n", strlcpy(l, m, 0));
//	printf("%zu\n", ft_strlcpy(n, o, 0));
//	printf("%s\n", l);
//	printf("%s\n", n);
//	printf("-----\n");
	char p[15]="rrrrrr";
	char q[80]="lorem ipsum dolor sit amet";
	char r[15]="rrrrrr";
	char s[80]="lorem ipsum dolor sit amet";
	printf("%zu\n", strlcat(p, q, 5));
	printf("%zu\n", ft_strlcat(r, s, 5));
	printf("%s\n", p);
	printf("%s\n", r);
//	printf("%d\n", ft_toupper('g'));
//	char x[] = "Hello world";
//	int z = 0;
//	while (x[z] != 0)
//	{
//		x[z] = ft_tolower(x[z]);
//			z++;
//	}
//	printf("%s\n", x);
//	char x[] = "Hello world";
//	char *z;
//	z = ft_strchr(x, 'u');
//	printf("%s\n", z);
//	char x[] = "Hello world";
//	char *z;
//	z = strrchr(x, 'u');
//	printf("%s\n", z);	
//	int asd = 0;
//	printf("%d\n", !asd);
//	char a[] = "Helloo";
//	char b[] = "Hello";
//	printf("%d\n", strncmp(a, b, 3));
//	char c[] = "Helloo";
//	char d[] = "Hello";
//	printf("%d\n", ft_strncmp(c, d, 3));
//	char a[] = "Hello";
//	char b[] = "Hello";
//	printf("%s\n", memchr(a, 'u', 0));  
//	printf("%s\n", ft_memchr(b, 'u', 0)); 
//	char *a = "111122";
//	char *b = "456789";
//	char *c = "111122";
//	char *d = "456789";
//	printf("%d\n", memcmp(a, b, 5));  
//	printf("%d\n", ft_memcmp(a, b, 5)); 
//	char a[] = "lorem ipsum dolor sit amet";
//	char b[] = "dolor";
//	char c[] = "lorem ipsum dolor sit amet";
//	char d[] = "dolor";
//	printf("%s\n", strnstr(a, b, 0));
//	printf("%s\n", ft_strnstr(c, d, 0));
//	printf("%d\n", atoi("9223372036854775815"));	
//	printf("%d\n", ft_atoi("9223372036854775815"));	
//	printf("%d\n", atoi("-9223372036854775815"));	
//	printf("%d\n", ft_atoi("-9223372036854775815"));	
//	printf("%d\n", atoi("-2147483648"));	
//	printf("%d\n", ft_atoi("-2147483648"));	
//	printf("%d\n", atoi("2147483647"));	
//	printf("%d\n", ft_atoi("2147483647"));	
//	printf("%d\n", atoi("   123"));	
//	printf("%d\n", ft_atoi("   123"));	
//	printf("%d\n", atoi(" -22"));	
//	printf("%d\n", ft_atoi(" -22"));	
//	printf("%s\n", calloc(9223372036854775807, 3));
//	printf("%s\n", ft_calloc(9223372036854775807, 3));
//	char s[50] = "12345";
//	printf("%s\n", ft_strdup(s));
//	char a[] = "tripouille";
//	char *p;
//	p = ft_substr(a, 0, 42000);
//	printf("%s\n", p);
//	char	a[] = "";
//	char	b[] = "lol";
//	printf("%s\n", ft_strjoin(0, 0));
//	char	a[] = "abcabc";
//	char	b[] = "abc";
//	printf("%s\n", ft_strtrim(a, b));
//	int i;
//
//	 i = 0;
//	char **array;
//	char p[] = " moi hei kissa a a ";
//	array = ft_split(p, ' ');
//	while (array[i])
//	{
//		printf("%s\n", array[i]);
//		i++;
//	}
//	printf("%s\n", ft_itoa(-2147483648));
//	printf("%s\n", ft_itoa(156));
//	printf("%s\n", ft_itoa(-623));
//	printf("%s\n", ft_itoa(-0));
//	ft_putnbr_fd(-2147483608, 1);
	return (0);
}
