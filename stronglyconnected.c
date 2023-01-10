#include <stdio.h>

int s[100], vSCC[100], j, res[100], stronglyConnectedComponent[100], aT[100][100];

void AdjacencyMatrix(int a[][100], int n)
{

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a[i][j] = 0;
            aT[i][j] = 0;
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("Enter value for (%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void SCC(int u, int n)
{

    int v;
    vSCC[u] = 1;
    for (v = 1; v <= n - 1; v++)
    {
        if (aT[u][v] == 1 && vSCC[v] == 0)
        {
            SCC(v, n);
        }
    }
    printf("%d - ", u);
}
void dfs(int u, int n, int a[][100])
{

    int v;
    s[u] = 1;
    for (v = 1; v <= n - 1; v++)
    {
        if (a[u][v] == 1 && s[v] == 0)
        {
            dfs(v, n, a);
        }
    }
    j += 1;
    res[j] = u;
}

void topological_order(int n, int a[][100])
{

    int i, u;
    for (i = 1; i <= n; i++)
    {
        s[i] = 0;
        vSCC[i] = 0;
    }
    j = 0;
    for (u = 1; u <= n; u++)
    {
        if (s[u] == 0)
        {
            dfs(u, n, a);
        }
    }
    return;
}
int main()
{
    int a[100][100], n, i, j, count = 0;

    printf("Enter number of vertices\n");
    scanf("%d", &n);

    AdjacencyMatrix(a, n);

    printf("\t\tAdjacency Matrix of the graph\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\t\tTranspose the graph\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            aT[i][j] = a[j][i];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("\t%d", aT[i][j]);
        }
        printf("\n");
    }
    printf("\nTopological order:\n");

    topological_order(n, aT);

    for (i = 1; i <= n; i++)
    {
        printf("-->%d", res[i]);
    }
    printf("\nStrongly connected components are: \n");
    for (i = 1; i <= n; i++)
    {
        if (vSCC[i] == 0)
        {
            printf("(%d): ", ++count);
            SCC(res[i], n);
            printf("\n");
        }
    }
    return 0;
}
