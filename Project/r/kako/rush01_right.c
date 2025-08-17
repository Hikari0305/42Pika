int right(int (*grid)[4], int *hint)
{
    int i;
    int j;
    int max;
    int ok;
    int hintok;

    j = 0;
    hintok = 0;
    while (j < 4)
    {
        i = 3;
        max = grid[j][i];
        ok = 1;
        while (i >= 0)
        {

            if (grid[j][i] > max)
            {
                ok = ok + 1;
                max = grid[j][i];
            }
            i--;
        }
        if (ok == hint[j + 12])
        {
            hintok += 1;
        }
        j++;
    }
    return (hintok);
}