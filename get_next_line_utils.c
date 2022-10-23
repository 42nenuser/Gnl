#include "get_next_line.h"


char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_substr(char *s, unsigned int start, char c)
{
	size_t	i;
	int	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
	{
		if (i >= start && j < ft_strlen(s) )
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = s[i];
    str[j+1] = '\0';
	return (str);
}
char	*ft_strdup( char *src)
{
	char	*new;
	int		i;
	int		size;
	
	size = ft_strlen(src);
	new = malloc(size * sizeof(char ) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
char    *ft_strjoin(char  *s1, char  *s2)
{
    size_t  size_s1;
    size_t  size_s2;
    char    *strjoin;

    size_s1 = ft_strlen(s1);
    size_s2 = ft_strlen(s2);
    if (!(strjoin = malloc(size_s1 + size_s2 + 1)))
        return (NULL);
    ft_strcpy(strjoin, s1);
    ft_strcat(strjoin, s2);
    if(!(ft_strcmp(s1, "") == 0))
	 free(s1);
    return (strjoin);
}

char	*ft_strchr( char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
    str++;
    
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
