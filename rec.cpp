#include "base.h"

void rec(int w, int h, char b_c1)
{
    int x, y, w1, h1;
    char b_c2;
    cin >> x >> y >> w1 >> h1 >> b_c2;
    char arr[w][h];
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i >= y && i < y + h1 && j < w1 + x && j >= x || j >= x && j < x + w1 && i < h1 + y && i >= y)
                cout << b_c2 << " ";
            else
                cout << b_c1 << " ";
        }
        cout << endl;
    }
}