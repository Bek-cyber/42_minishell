#include "prsng_vldtn.h"

int	check_line(char *line)
{
	int	i;

	i = -1;
	while (line[++i])
	{
		if (ft_isascii(line[i]) && !ft_isspace(line[i]))
			return (EXECUTE);
	}
	return (NOT_EXECUTE);
}
