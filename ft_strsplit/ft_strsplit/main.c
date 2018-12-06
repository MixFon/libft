//
//  main.c
//  ft_strsplit
//
//  Created by Михаил Фокин on 05/12/2018.
//  Copyright © 2018 Михаил Фокин. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char *ft_clean(char const *s, char c);

char    *ft_strdup(const char *s1)
{
    int     i;
    char    *str_cop;
    
    i = 0;
    while (s1[i])
        i++;
    if (!(str_cop = (char*)malloc(sizeof(char) * (i + 1))))
        return (0);
    i = 0;
    while (s1[i])
    {
        str_cop[i] = s1[i];
        i++;
    }
    str_cop[i] = '\0';
    return (str_cop);
}

static int    ft_numwrld(char const *s, char c)
{
    int num;
    
    num = 0;
    if (*s != c)
        num++;
    while (*s)
    {
        if (*s == c)
            num++;
        s++;
    }
    if (*(s - 1) != c)
        num++;
    return (num - 1);
}

static char *ft_clean(char const *s, char c)
{
    int   i;
    int   n;
    char  *str;
    char  *rtnstr;
    
    i = 0;
    n = 0;
    str = (char *)malloc(sizeof(char) * strlen(s) + 1);
    if (*s != c)
    {
        str[i] = c;
        i++;
    }
    while (*s)
    {
        if (*s == c && *(s + 1) == c)
        {
            s++;
            continue;
        }
        str[i] = *s;
        i++;
        s++;
    }
    str[i] = '\0';
    rtnstr = ft_strdup(str);
    free(str);
    return (rtnstr);
}

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    unsigned int    m;
    char            *str;
    
    m = 0;
    i = start;
    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (s[i] != '\0')
    {
        if (i >= start && m < len)
        {
            str[m] = s[i];
            m++;
        }
        i++;
    }
    str[m] = '\0';
    return (str);
}

static size_t ft_strclen(char *s, char c)
{
    size_t  i;
    
    i = 0;
    while (s[i] != c && s[i] != '\0')
        i++;
    return (i);
}

char    **ft_strsplit(char const *s, char c)
{
    int     wrld;
    int     i;
    int     num = 0;
    int     len;
    char    **arr;
    
    i = 0;
    len = 0;
    s = ft_clean(s, c);
    wrld = ft_numwrld(s, c);
    if (!(arr = (char **)malloc(sizeof(char *) * wrld + 1)))
        return (NULL);
    while (i < wrld)
    {
        if (*s == c)
            num++;
        arr[i] = ft_strsub(s, num, ft_strclen((char *)(s + num), c));
        printf("\nft_strlen **%zu**\n", ft_strclen((char *)s + num, c));
        while (*(s + num) != c)
        {
            num++;
            //printf("\nnum %d\n", num);
            //printf("\nc %c\n", *(s + num));
        }
        //if (*(s + num))
        //    num++;
        i++;
    }
    arr[i] = (void *)0;
    return (arr);
}

int main()
{
    char *str = "split  ||this|for|me|||||!|";
    int i = 0;
    char a = '|';
    while(i < 5)
    {
        printf("\n<%s>\n", *(ft_strsplit(str, a) + i));
        i++;
    }
    str = ft_clean(str, a);
    printf("\n ft_clean %s\n", str);
    printf("\nft_num %d\n", ft_numwrld(str, a));
    //printf("\nft_strlen %zu\n", ft_strclen(str, a));
    
    return 0;
}
