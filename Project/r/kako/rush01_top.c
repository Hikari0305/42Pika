int top(int (*grid)[4], int *hint)
{
    int i;
    int j;
    int max;
    int ok;
    int hintok;

    i = 0;
    hintok = 0;
    while (i < 4)
    {
        j = 0;
        max = grid[j][i];
        ok = 1;
        while (j < 4)
        {

            if (grid[j][i] > max)
            {
                ok = ok + 1;
                max = grid[j][i];
            }
            j++;
        }
        if (ok == hint[i])
        {
            hintok = hintok + 1;
        }
        i++;
    }
    return (hintok);
}