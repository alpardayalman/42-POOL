/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:39:26 by ayalman           #+#    #+#             */
/*   Updated: 2021/12/15 21:47:47 by ayalman          ###   ########.Tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAIN

bool	c_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (true);
		i++;
	}
	return (false);
}
// Check seperator.
// *charseti aliyor ve current char aliniyor.
// Eger o char, charset'te var ise, true gonderiliyor.
// bool char c, *charset.


int	c_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && c_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !c_sep(str[i], charset))
			i++;
	}
	return (count);
}
// Count ortada olunca her check seperator true verdiginde en alttaki while bitiyor
// ve ilk while check seperator oldugu surece true veriyor.
// ! oldugunda ilk while bitiyor ve count bir kere artiyor.
// bu da kac kere bolucegimize soyluyor.
// int char *str, *charset.


int	len_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !c_sep(str[i], charset))
		i++;
	return (i);
}
// len_sep sirayla charseti almayacak olan dizilerin buyuklugunu belirtiyor.
// int char *str, *charset.


char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = len_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
// *ft_word charseti almayacak olan dizileri yaratiyor.
// len_sep ile ilk stringin buyuklugunu aliyor.
// Sonra yaptigi yedek *word'u malloc'la boyutlandiriyor.
// Word'e str'yi charset'te olan index'e kadar atiyor.
// Son olarak Word'u NULL ile bitiriyor.
// char* char *str, *charset.


char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (c_str(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && c_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !c_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
// Char ** yaratiliyor strings adinda.
// strings malloc ile size of char *, TIMES count_str(str, charset) + 1 kadar buyutuluyor.
// c_str mantiginda, *str NOU olmadigi surece ve c_sep false oldugu oldugu surece asagida
// donuyor. true oldugunda yukardaki while a cikiyor 
// true oldugu surece orada donmeye devam ediyor.
// !true oldugunda asagi iniyor ve str NOU degilse strings[i]'i ft_word'e gonderiyor.
// ft_word'e string ayristiriliyor.
// i++ ve birsonraki diziye geciyor.
// **ft_split char *str, *charset.

#ifdef MAIN
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
#endif
