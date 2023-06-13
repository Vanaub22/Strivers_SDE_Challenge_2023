#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
    set<int> rows, columns;
    for (int i = 0; i < matrix.size(); i++)
        for (int j = 0; j < matrix[0].size(); j++)
            if (matrix[i][j] == 0)
            {
                rows.insert(i);
                columns.insert(j);
            }
    for (int i = 0; i < matrix.size(); i++)
        for (int j = 0; j < matrix[0].size(); j++)
            if (rows.find(i) != rows.end() || columns.find(j) != columns.end())
                matrix[i][j] = 0;
}
