#include <stdio.h>
#include <unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
int	main()
{
	int i,j,rows=5;
	for(j=1;j<=rows;j++)
	{
		for(i=j+1;i<=rows;i++)
		{
			ft_putchar(' ');
		}
		for(i=1;i<=j*2-1;i++)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
	}
	for(j=rows;j>1;j--)
	{
		for(i=j;i<=rows;i++)
		{
			ft_putchar(' ');
		}
		for(i=1;i<j*2-2;i++)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
	}
	return 0;
}
