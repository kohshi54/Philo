#include "philo_bonus.h"

void	wait_for_philosophers(t_condition condition)
{
	int		status;

	while (waitpid(-1, &status, 0) > 0)
	{

	}
	(void)condition;
}