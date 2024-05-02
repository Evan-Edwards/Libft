/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:39:55 by eedwards          #+#    #+#             */
/*   Updated: 2024/05/02 11:50:07 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	/*ft_atoi*/
	printf("ft_atoi outputs:\n");
	printf("%d\n", ft_atoi("   123"));
	printf("%d\n", ft_atoi("-2147483548"));
	printf("%d\n", ft_atoi("   +123456789012"));
	printf("atoi outputs:\n");
	printf("%d\n", atoi("   123"));
	printf("%d\n", atoi("-2147483548"));
	printf("%d\n", atoi("   +123456789012"));
	/*ft_bzero*/
	char str[50] = "Hello, World!";
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After ft_bzero: %s\n", str);
	char str1[50] = "Hello, World!";
	printf("Before bzero: %s\n", str1);

	ft_bzero(str1, 5);
	printf("After bzero: %s\n", str);
	/*ft_calloc*/
	int *arr = ft_calloc(5, sizeof(int));
	int *arrc = calloc(5, sizeof(int));
	if (arr == NULL)
		printf("ft_calloc memory allocation failed\n");
	if (arrc == NULL)
		printf("calloc memory allocation failed\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrc[i]);
	}
	printf("\n");

	free(arr);
	free(arrc);
	/*ft_isalnum*/
	printf("ft_isalnum outputs:\n");
	printf("%d %d %d\n", ft_isalnum('c'), ft_isalnum('8'), ft_isalnum('\n'));
	printf("isalnum outputs:\n");
	printf("%d %d %d\n", isalnum('c'), isalnum('8'), isalnum('\n'));
	/*ft_isalpha*/
	printf("ft_isalpha outputs:\n");
	printf("%d %d %d\n", ft_isalpha('c'), ft_isalpha('8'), ft_isalpha('T'));
	printf("isalpha outputs:\n");
	printf("%d %d %d\n", isalpha('c'), isalpha('8'), isalpha('T'));
	/*ft_isascii*/
	printf("ft_isascii outputs:\n");
	printf("%d %d %d\n", ft_isascii('c'), ft_isascii('8'), ft_isascii(129));
	printf("isascii outputs:\n");
	printf("%d %d %d\n", isascii('c'), isascii('8'), isascii(129));
	/*ft_isdigit*/
	printf("ft_isdigit outputs:\n");
	printf("%d %d %d\n", ft_isdigit('c'), ft_isdigit('8'), ft_isdigit('T'));
	printf("isdigit outputs:\n");
	printf("%d %d %d\n", isdigit('c'), isdigit('8'), isdigit('T'));
	/*ft_isprint*/
	printf("ft_isprint outputs:\n");
	printf("%d %d %d\n", ft_isprint('c'), ft_isprint(1), ft_isprint(0));
	printf("isprint outputs:\n");
	printf("%d %d %d\n", isprint('c'), isprint(1), isprint(0));
	/*ft_itoa*/
	printf("ft_itoa outputs:\n");
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-2147483548));
	printf("%s\n", ft_itoa(0));
	/*ft_lstadd_back, ft_lstnew*/
	/*t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Node 1");
    t_list *new_node2 = ft_lstnew("Node 2");
    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);
    t_list *tmp = head;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    ft_lstclear(&head, &free);
    return (0);*/
	/*ft_lstadd_front*/


	/*ft_memchr*/
	char str2[] = "Hello, World!";
    char ch = 'o';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str2));
    if (ret != NULL)
        printf("Character found: %c\n", *ret);
    else
        printf("Character not found\n");

    ch = 'z';
    ret = ft_memchr(str, ch, strlen(str2));
    if (ret != NULL)
        printf("Character found: %c\n", *ret);
    else
        printf("Character not found\n");
	/*ft_memcmp*/
	printf("ft_memcmp results:\n");
	printf("Difference is: %d\n", ft_memcmp("Hello", "Hell9", 5));
	printf("Difference is: %d\n", ft_memcmp("He", "Hell9", 5));
	printf("Difference is: %d\n", ft_memcmp("Hello", "Hell9", 4));
	printf("Difference is: %d\n", ft_memcmp("", "Hell9", 5));
	printf("memcmp results:\n");
	printf("Difference is: %d\n", memcmp("Hello", "Hell9", 5));
	printf("Difference is: %d\n", memcmp("He", "Hell9", 5));
	printf("Difference is: %d\n", memcmp("Hello", "Hell9", 4));
	printf("Difference is: %d\n", memcmp("", "Hell9", 5));
	/*ft_memcpy*/
	const char src[50] = "Hello";
	char dst[50];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("Result of ft_memcpy is %s\n", dst);
	memcpy(dst, src, strlen(src) + 1);
	printf("Result of memcpy is %s\n", dst);
	/*ft_memmove*/
	char dst1[50] = "Hello, World!";
    char src1[50] = "Copilot is here!";
    ft_memmove(dst1, src1, 15);
    printf("Test 1 ft_memmove result: %s\n", dst1);
	memmove(dst1, src1, 15);
	printf("Test 1 memmove result: %s\n", dst1);

    char dst2[50] = "Hello, World!";
    char src2[50] = "Copilot";
    ft_memmove(dst2, src2, 7);
    printf("Test 2 ft_memmove result: %s\n", dst2);
	memmove(dst2, src2, 7);
	printf("Test 2 ft_memmove result: %s\n", dst2);

	/*ft_memset*/	
    char str3[50] = "Hello, World!";
    ft_memset(str3, 'C', 13);
    printf("Test 3 result: %s\n", str3);

	char str4[50] = "Hello, World!";
    ft_memset(str4, 'A', 5);
    printf("Test 1 ft_memset result: %s\n", str4);
	
	char str5[50] = "Hello, World!";
    ft_memset(str5, 'B', 0);
    printf("Test 2 result: %s\n", str5);

	/*ft_put functions*/
	ft_putchar_fd('z', 2);
	ft_putchar_fd('\n', 2);
	ft_putendl_fd("Hello", 2);
	ft_putnbr_fd(123456, 2);
	ft_putchar_fd('\n', 2);
	/*ft_split*/
	char **res1 = ft_split("   Hello, World!  This is   Copilot.", ' ');
	while (*res1)
	{
		printf("%s\n", *res1);
		res1++;
	}
	char **res2 = ft_split(",,,,one,two,,three,four,five,,,", ',');
	while (*res2)
	{
		printf("%s\n", *res2);
		res2++;
	}
	/*ft_strchr*/
	printf("%s\n", ft_strchr("Hello", 'l'));
	printf("%s\n", ft_strchr("Hello", 'z'));
	printf("%s\n", ft_strchr("Hello, ilta", 't'));
	/*ft_strdup*/
	printf("%s\n", ft_strdup("This is a copy"));
	/*ft_strjoin*/
	printf("%s\n", ft_strjoin("Just ", "dance!"));
	/*ft_strlcat*/
	char dst3[50] = "Hello";
    char src3[50] = ", World!";
    size_t res3 = ft_strlcat(dst3, src3, 7);
    printf("Resulting dst string: %s, Return value: %zu\n", dst3, res3);
	/*ft_strlcpy*/
	char			*sorc;
	char			dest[50];
	unsigned int	size;

	size = 7;
	sorc = "Hellocanyouhearme";
	size = ft_strlcpy(dest, sorc, size);
	printf("size is %d\n", size);
	printf("%s\n", dest);
	/*ft_strlen*/
	printf("The length is %zu\n", ft_strlen("Hello 231"));

}
