#include "philo.h"

int	print_msg_takefork(t_philo *philo, t_state *state)
{
	pthread_mutex_lock(&state->lock);
	if (state->alive == false)
	{
		pthread_mutex_unlock(&state->lock);
		return (-1);
	}
	pthread_mutex_unlock(&state->lock);
	printf("%ld %zu has taken a fork\n", get_cur_time() / 1000, philo->philo_id);
	return (0);
}

int	print_msg_eat(t_philo *philo, t_state *state, time_t now)
{
	pthread_mutex_lock(&state->lock);
	if (state->alive == false)
	{
		pthread_mutex_unlock(&state->lock);
		return (-1);
	}
	pthread_mutex_unlock(&state->lock);
	printf("%ld %zu is eating\n", now / 1000, philo->philo_id);
	return (0);
}

int	print_msg_sleep(t_philo *philo, t_state *state)
{
	pthread_mutex_lock(&state->lock);
	if (state->alive == false)
	{
		pthread_mutex_unlock(&state->lock);
		return (-1);
	}
	pthread_mutex_unlock(&state->lock);
	printf("%ld %zu is sleeping\n", get_cur_time() / 1000, philo->philo_id);
	return (0);
}

int	print_msg_think(t_philo *philo, t_state *state)
{
	pthread_mutex_lock(&state->lock);
	if (state->alive == false)
	{
		pthread_mutex_unlock(&state->lock);
		return (-1);
	}
	pthread_mutex_unlock(&state->lock);
	printf("%ld %zu is thinking\n", get_cur_time() / 1000, philo->philo_id);
	return (0);
}
