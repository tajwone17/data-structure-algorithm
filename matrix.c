#include <stdio.h>
int main()
{
    int V, E;
    printf("Enter the number of Vertices:");
    scanf("%d", &V);
    printf("Enter the number of Edges:");
    scanf("%d", &E);

    int adjMatrix[V][V];

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }
    printf("Enter the Edge:");
    for (int i = 0; i < E; i++)
    {
        int node1, node2;
        scanf("%d %d", &node1, &node2);
        adjMatrix[node1][node2]=1;
        adjMatrix[node2][node1]=1;
        }

        printf("Adjacency Matrix:\n");
           for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++){
            printf("%d ",adjMatrix[i][j]);
        }
        printf("\n");
        }
}