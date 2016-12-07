#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	/*	// ft_memset
		int s;
		int s1;
		int *as;
		int *as1;

		s = 258;
		s1 = 258;
		as = &s;
		as1 = &s1;

		int d1 = 5;

		ft_memset(as, 1, 5);
		printf("--------------------------------------\nft_memset - >>>>>>> \n%d\n", s);
		memset(as1, 1, d1);
		printf("memset - >>>>>>>>> \n%d\n---------------------------------\n", s1);
		*/
	//bzero
	/*	char str_bzero[] = "Hello Kitty";

		ft_bzero(str_bzero, 30);
		printf("ft_bzero - >>>>>>>>\n%s\n", str_bzero);	

		char str_bzero1[] = "Hello Kitty";

		bzero(str_bzero1, 30);
		printf("bzero - >>>>>>>>\n%s\n---------------------------\n", str_bzero1);


	//ft_memcpy
	char src_memcpy1[] = "Hello Mazafaka";
	char dst_memcpy1[] = "1111";
	char dst_memcpy2[] = "1111";

	ft_memcpy(dst_memcpy1, src_memcpy1, 5);
	memcpy(dst_memcpy2, src_memcpy1, 5);
	printf("ft_memcpy - >>>>>>>\n%s\n", dst_memcpy1);
	printf("memcpy - >>>>>>>\n%s\n-------------------------\n", dst_memcpy2);


	char src_memccpy1[] = "Taj Mahal is a historic monument in India.";
	char dst_memccpy1[61] = "Taj Mahal is a historic monument in Indi.";

	char src_memccpy2[]= "Taj Mahal is a historic monument in India.";
	char dst_memccpy2[61]= "Taj Mahal is a historic monument in Indi.";

	//	memccpy(dst_memccpy1, src_memccpy1, 97, 10);
	//	//	printf("memccpy - >>>>>>>>\n%s\n", dst_memccpy1);
	//	//	ft_memccpy(dst_memccpy2, src_memccpy2, 97, 10);
	//	//	printf("ft_memccpy - >>>>>>>>\n%s\n------------------------\n", dst_memccpy2);
	printf("memccpy - >>>>>>>>\n%s\n", (char *)memccpy(dst_memccpy1, src_memccpy1, 97, 42));
	printf("ft_memccpy - >>>>>>>>\n%s\n------------------------\n", (char *)ft_memccpy(dst_memccpy2, src_memccpy2, 97, 42));

	//ft_memmove
	char src_memmove1[]= "Hello Wold!!";
	char *dst22 = &(src_memmove1[5]);

	char src_memmove2[]= "Hello Wold!!";
	char *dst33 = &(src_memmove2[5]);

	memmove(dst22, src_memmove1, 12);
	printf("memmove - >>>>>>>>\n%s\n", dst22);
	ft_memmove(dst33, src_memmove2, 12);
	printf("ft_memmove - >>>>>>>>\n%s\n------------------------\n", dst33);

	char src_strcpy1[] = "Hello WWWWasd";
	char dst_strcpy1[] = "hhh1111111111111";
	char dst_strcpy2[] = "hhh1111111111111";

	ft_strcpy(dst_strcpy1, src_strcpy1);
	printf("ft_strcpy - >>>>>>>>>>>>>>>\n%s\n", dst_strcpy1);
	strcpy(dst_strcpy2, src_strcpy1);
	printf("strcpy - >>>>>>>>>>>>>>>\n%s\n------------------\n", dst_strcpy2);
	

	//strncpy

	char src_strncpy1[] = "Hello W";
	char src_strncpy2[] = "Hello W";

	char dst_strncpy1[] = "Piydasdas";
	char dst_strncpy2[] = "Piydasdas";

	ft_strncpy(dst_strncpy1, src_strncpy1, 10);
	printf("ft_strncpy - >>>>>>>>>>>>>>>\n%s\n", dst_strncpy1);
	strncpy(dst_strncpy2, src_strncpy2, 10);
	printf("strncpy - >>>>>>>>>>>>>>>\n%s\n------------------\n", dst_strncpy2);
	
	
	//ft_strcat
	char src_strcat[] = "Piy Piy PIY!!!";
	char dst1_strcat[30] = "111";
	char dst2_strcat[30] = "111";
	
	ft_strcat(dst1_strcat, src_strcat);
	printf("ft_strcat - >>>>>>>>>>>>>>>>>\n%s\n", dst1_strcat);
	strcat(dst2_strcat, src_strcat);
	printf("strcat - >>>>>>>>>>>>>>>>>\n%s\n----------------\n", dst2_strcat);
	
	
	
	//ft_strncat
	char src_strncat[] = "Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!Piy Piy PIY!!!";
	char dst1_strncat[30] = "111";
	//char dst2_strncat[30] = "111";
	
	ft_strncat(dst1_strncat, src_strncat, 50);
	printf("ft_strncat - >>>>>>>>>>>>>>>>>\n%s\n", dst1_strncat);
	//strncat(dst2_strncat, src_strncat, 50);
	//printf("strncat - >>>>>>>>>>>>>>>>>\n%s\n----------------V1\n", dst2_strncat);

	
	// ft_memchr
	
	char str[] = "Heallo Kitty Miatty";
	int i = 97;
	
	printf("ft_memchr - >>>>>>>>>>\n%s\n", (char *)ft_memchr(str, i, 19));
	printf("memchr - >>>>>>>>>>>>\n%s\n------------------------\n", (char *)memchr(str, i, 19));

	// ft_memcmp
	char s1_memcmp[] = "Hello world morld";
	char s2_memcmp[] = "He2llo world morld";
	printf("ft_memcmp - >>>>>>>>>>>>\n%d\n", ft_memcmp(s1_memcmp, s2_memcmp, 15));
	printf("memcmp- >>>>>>>>>>>>>>\n%d\n----------------------\n", memcmp(s1_memcmp, s2_memcmp, 15));

	
	//ft_strchr
	
	char s_strchr[] = "Hello Pokemon asde";
	
	printf("strchr - >>>>>>>>>>>>>>\n%s\n", strchr(s_strchr, 97));
	printf("ft_strchr - >>>>>>>>>>>>>>\n%s\n-------------------\n", ft_strchr(s_strchr, 97));
	return (0);
	
	//ft_strncmp
	
	printf("ft_strncmp - >>>>>>>>>>>>\n%d\n", ft_strncmp("Hello", "Helddadsa", 3));
	printf("strncmp - >>>>>>>>>>>>>\n%d\n----------------V2\n", strncmp("Hello", "Helddadsa", 3));
	printf("ft_strncmp - >>>>>>>>>>>>\n%d\n", ft_strncmp("Hello", "Helddadsa", 5));
	printf("strncmp - >>>>>>>>>>>>>\n%d\n----------------V3\n", strncmp("Hello", "Helddadsa", 5));
	printf("ft_strncmp - >>>>>>>>>>>>\n%d\n", ft_strncmp("Hello", "", 3));
	printf("strncmp - >>>>>>>>>>>>>\n%d\n----------------V4\n", strncmp("Hello", "", 3));
	printf("ft_strncmp - >>>>>>>>>>>>\n%d\n", ft_strncmp("Hello", "Hello", 25));
	printf("strncmp - >>>>>>>>>>>>>\n%d\n----------------V5\n", strncmp("Hello", "Hello", 25));
	printf("ft_strncmp - >>>>>>>>>>>>\n%d\n", ft_strncmp("", "", 3));
	printf("strncmp - >>>>>>>>>>>>>\n%d\n----------------V1\n", strncmp("", "", 3));

	 */
	
	//ft_strrchr
	
	
	char s_strrchr[] = "Hellao PokaemonH asde";
	
	printf("strrchr - >>>>>>>>>>>>>>\n%s\n", strrchr(s_strrchr, 0));
	printf("ft_strrchr - >>>>>>>>>>>>>>\n%s\n-------------------\n\n", ft_strrchr(s_strrchr,0));
	printf("strrchr - >>>>>>>>>>>>>>\n%s\n", strrchr(s_strrchr, 97));
	printf("ft_strrchr - >>>>>>>>>>>>>>\n%s\n-------------------\n\n", ft_strrchr(s_strrchr,97));
	printf("strrchr - >>>>>>>>>>>>>>\n%s\n", strrchr(s_strrchr, 72));
	printf("ft_strrchr - >>>>>>>>>>>>>>\n%s\n-------------------V1\n\n", ft_strrchr(s_strrchr,72));
	return (0);
	 }


