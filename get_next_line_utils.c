#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	if (s == NULL)
		return (NULL);
	i = 0;
	ptr = s;
	while (ptr[i])
	{
		if (ptr[i] == (char) c)
			return ((char *)&ptr[i]);
		i++;
	}
	if ((char) c == ptr[i])
		return ((char *)&ptr[i]);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!s1)
	{
		s1 = (char *) malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	str = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}
