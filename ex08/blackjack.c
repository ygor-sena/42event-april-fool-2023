#include <stdio.h>

static void	is_blackjack(int score);

int	main(int argc, char **argv)
{
	size_t	i;
	int		score;

	if (argc != 2)
		return (1);
	i = 0;
	score = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '2' && argv[1][i] <= '9')
			score += argv[1][i] - '0';
		else if (argv[1][i] == 'T' || argv[1][i] == 'D' || argv[1][i] == 'Q' \
				|| argv[1][i] == 'J' || argv[1][i] == 'K')
			score += 10;
		else if (argv[1][i] == 'A')
		{
			if (score + 11 > 21)
				score += 1;
			else
				score += 11;
		}
		i++;
	}
	is_blackjack(score);
	return (0);
}

static void	is_blackjack(int score)
{
	if (score == 21)
		printf("Blackjack!\n");
	else
		printf("%d\n", score);
}
