#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int u, v, weight;
} Edge;


typedef struct {
    int parent, rank;
} Subset;


int compare(const void *a, const void *b) {
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
}


int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}


void union_sets(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (rootX != rootY) {
        if (subsets[rootX].rank < subsets[rootY].rank)
            subsets[rootX].parent = rootY;
        else if (subsets[rootX].rank > subsets[rootY].rank)
            subsets[rootY].parent = rootX;
        else {
            subsets[rootY].parent = rootX;
            subsets[rootX].rank++;
        }
    }
}


void kruskal(Edge edges[], int V, int E) {
    Edge result[V]; 
    int e = 0; 
    int i = 0; 
    Subset *subsets = (Subset*) malloc(V * sizeof(Subset));

   
    qsort(edges, E, sizeof(Edge), compare);
 for (i = 0; i < V; i++) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    i = 0;

       while (e < V - 1 && i < E) {
        Edge next_edge = edges[i++];
        int x = find(subsets, next_edge.u);
        int y = find(subsets, next_edge.v);

     
        if (x != y) {
            result[e++] = next_edge;
            union_sets(subsets, x, y);
        }
    }

   
    printf("Edges in the Minimum Spanning Tree:\n");
    for (i = 0; i < e; i++) {
        printf("%d - %d: %d\n", result[i].u, result[i].v, result[i].weight);
    }

    free(subsets);
}

int main() {
     int V = 4; 
     int E = 5; 

   
    Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

       kruskal(edges, V, E);

    return 0;
}

