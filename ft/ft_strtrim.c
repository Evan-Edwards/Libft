char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     len;
    char    *res;

    i = 0;
    len = ft_strlen(set);
    while (s1[i] && i < len)
    {
        if (ft_strncmp(s1, set, len) == 0)
        i = 
    }
}