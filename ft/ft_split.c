#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     i;
    int     j;
    int     k;

    res = malloc((ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    k = 0;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] != c)
        {
            res[k] = new_str(s, j, i - j)
            j = i + 1;
            k++;
        }
        i++;
    }
    res[k] = new_str(s, j, i - j);
    return (res);
}

static int  count_words(char const *s, char c)
{
    int i;
    int words;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == c && s[i + i] != c)
            words++;
        i++;
    }
    return (words + 1);
}

static  ft_free()
{
    
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*res;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	i = 0;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}