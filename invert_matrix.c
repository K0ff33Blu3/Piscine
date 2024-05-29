#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_grid(int **array)
{
	int	i;
	int	j;
	char	num;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num = array[i][j] + '0';
			write(1, &num, 1);
			write(1, " ", 1);
			j++;
		}
    write(1, "\n", 1);
	i++;
   	}
}

int **invert_matrix(int **mtx)
{
    unsigned int    i;
    unsigned int    j;

    int **inv_mtx = (int**)malloc(4 * sizeof(int *));

    i = 0;
    while (i < 4)
    {
        inv_mtx[i] = (int*)malloc(4 * sizeof(int *));
        i++;
    }
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
            {
                inv_mtx[i][j] = mtx[j][i];
                j++;
            }
        i++;
    }
    return inv_mtx;
}
/*
int main()
{
    int **mtx = (int **)malloc(4 * sizeof(int *));
    int i = 0;
    while (i < 4)
    {
        mtx[i] = (int *)malloc(4 * sizeof(int));
        i++;
    }
    mtx[0][0] = 1; mtx[0][1] = 2; mtx[0][2] = 3; mtx[0][3] = 4;
    mtx[1][0] = 3; mtx[1][1] = 4; mtx[1][2] = 2; mtx[1][3] = 1;
    mtx[2][0] = 2; mtx[2][1] = 1; mtx[2][2] = 4; mtx[2][3] = 3;
    mtx[3][0] = 4; mtx[3][1] = 2; mtx[3][2] = 1; mtx[3][3] = 3;
    
    print_grid(mtx);
    int **inv_mtx = invert_matrix(mtx);
    printf("\n");
    print_grid(inv_mtx);
    i = 0;
    while (i < 4)
    {
        free(inv_mtx[i]);
        i++;
    }
    free(inv_mtx);
    return 0;
}*/