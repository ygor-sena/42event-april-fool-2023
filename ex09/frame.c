#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	frame_proportion(int argc, char **argv);
size_t	word_length(size_t ref, size_t size);
void	frame_insertion(size_t wd_size);
void	frame_filling(int argc, char **argv, size_t wd_size);

int	main(int argc, char **argv)
{
	size_t	wd_size;

	wd_size = frame_proportion(argc, argv);
	frame_insertion(wd_size);
	frame_filling(argc, argv, wd_size);
	frame_insertion(wd_size);
	return (0);
}

size_t	word_length(size_t ref, size_t size)
{
	if (ref < size)
		ref = size;
	return (ref);
}

void	frame_insertion(size_t wd_size)
{
	for (int i = 0; i < wd_size + 4; i++)
		printf("*");
	printf("\n");
}

size_t	frame_proportion(int argc, char **argv)
{
	char	*copy;
	char	*get_len;
	size_t	count;
	size_t	wd_size;

	count = 1;
	wd_size = 0;
	while (count < argc)
	{
		copy = strdup(argv[count]);
		get_len = strtok(copy, " ");
		while (get_len != NULL)
		{
			wd_size = word_length(wd_size, strlen(get_len));
			get_len = strtok(NULL, " ");
		}
		free(copy);
		count++;
	}
	return (wd_size);
}

void	frame_filling(int argc, char **argv, size_t wd_size)
{
	char	*copy;
	char	*frame;
	size_t	count;

	count = 1;
	while (count < argc)
	{
		copy = strdup(argv[count]);
		frame = strtok(copy, " ");
		while (frame != NULL)
		{
			printf("* ");
			printf("%s", frame);
			for (int i = 0; i < wd_size - strlen(frame); i++)
				printf(" ");
			printf(" *\n");
			frame = strtok(NULL, " ");
		}
		free(copy);
		count++;
	}
}
