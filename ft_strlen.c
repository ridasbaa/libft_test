/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsbaa <rsbaa@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:15:16 by rsbaa             #+#    #+#             */
/*   Updated: 2025/10/25 21:48:57 by rsbaa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	if (!s)
		return (0);
	length = 0;
	while (s[length])
		length++;
	return (length);
}

/*
int main(void)
{

    char *nullptr = NULL;
    printf("NULL pointer: %zu\n", ft_strlen(nullptr));  // Expected: 0
							//
    char *empty = "";
    printf("Empty string: %zu\n", ft_strlen(empty));  // Expected: 0

    char *normal = "1234567890";
    printf("Normal string: %zu\n", ft_strlen(normal));  // Expected: 10

    // Test 4: String with spaces
    char *with_spaces = "Hello World";
    printf("With spaces: %zu\n", ft_strlen(with_spaces));  // Expected: 11

    // Test 5: Properly null-terminated array
    char proper_array[] = {'1', 'f', '9', '\0'};
    printf("Proper array: %zu\n", ft_strlen(proper_array));  // Expected: 3

    // Test 6: Dynamically allocated string
    char *dynamic = malloc(10);
    if (dynamic) {
        dynamic[0] = 'a';
        dynamic[1] = 'b';
        dynamic[2] = 'c';
        dynamic[3] = '\0';
        printf("Dynamic string: %zu\n", ft_strlen(dynamic));  // Expected: 3
        free(dynamic);
    }

    // Test 7: Really long string
    char *long_str = "This is a very long string that
    should still work correctly with ft_strlen";
    printf("Long string: %zu\n", ft_strlen(long_str));

	//char *uniptr;
	char *nullptr = NULL;
	char *str = "1234567890";
	char str1[] = {'1', 'f', '9'};

	//printf("%ld\n", ft_strlen(uniptr));
	printf("%ld\n", ft_strlen(nullptr));
	printf("%ld\n", ft_strlen(str));
	printf("%ld\n", ft_strlen(str1));
	return 0;
}*/
