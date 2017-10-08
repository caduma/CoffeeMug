
#include <stdio.h>

void	print(void)
{
	int	i;
	i = 0;

	while (i++ < 100)
		!(i % 15) ? printf("CoffeeMug\n") : !(i % 5) ? printf("Mug\n") : !(i % 3) ? printf("Coffee\n") : printf("%d\n", i);
}

int	main(void)
{
	print();
	return (0);
}
