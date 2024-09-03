/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolmyko <dkolmyko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:24:53 by dkolmyko          #+#    #+#             */
/*   Updated: 2024/09/03 12:47:09 by dkolmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] - s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// void run_test(char *str1, char *str2, unsigned int n)
// {
// 	printf("Comparing \"%s\" and \"%s\" with n = %u:\n", str1, str2, n);
// 	printf("strncmp(str1, str2, n) = %d\n", strncmp(str1, str2, n));
// 	printf("ft_strncmp(str1, str2, n) = %d\n", ft_strncmp(str1, str2, n));
// 	printf("\n");
// }

// int main()
// {
// 	// Test cases
// 	run_test("hello", "hello", 3);		 // 
// 	run_test("hello", "heLlo", 2);		 // 
// 	run_test("abcde", "abcXY", 3);		 // 
// 	run_test("abc", "abcd", 4);			 // 
// 	run_test("abc", "abcd", 2);			 // 
// 	run_test("", "abc", 2);				 
// 	run_test("", "", 1);				 
// 	run_test("abc@", "abc$", 4);		 // 
// 	run_test("12345", "12340", 5);		 
// 	run_test("abcdefgh", "abcdefgh", 4); 
// 	run_test("abc", "abcd", 10);		 // 
// 	run_test("abc", "abc\0def", 10);	 // 
// 	run_test("abcd", "abc", 10);		 // 
// 	run_test("abc\0xyz", "abc\0abc", 6); // 
// 	run_test("abcdefgh", "abcdEfgh", 5); // 

// 	return 0;
// }
