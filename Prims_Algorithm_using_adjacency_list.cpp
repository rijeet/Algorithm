#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
vector<int>Node_Vec[10];
vector<int>Node_Cost[10];

vector<int>Cost;
vector<int>Node;

struct MST{

int Front_Node;
int Back_Node;

};

int node_no, edge_no;

MST spanning_tree(MST M)
{
           vector<int>Temp_Cost;




        //printf("%d -> ", M.Front_Node);

        for(int j = 0; j < Node_Vec[M.Front_Node].size(); j++)
        {
             //Node_Vec[M.Front_Node][j]);
        }
        printf("\n");

       // printf("%d -> ", M.Front_Node);
        for(int j = 0; j < Node_Cost[M.Front_Node].size(); j++)
        {
            //Node_Cost[M.Front_Node][j]);
        }
        printf("\n");








}

int main()
{
    int node_no, edge_no;

    int small_weight =999;

    int array[2];


    //printf("Enter number of nodes: ");
    cin >> node_no;
    //printf("Enter number of edges: ");
    cin >> edge_no;



    for (int i = 0; i <edge_no ; i++)
    {
        int nodeA, nodeB,cost;



       // printf("Enter source node, destination node & weight for edges: \n");

        scanf("%d %d %d", &nodeA, &nodeB, &cost);
        Node_Vec[nodeA].push_back(nodeB);
        Node_Vec[nodeB].push_back(nodeA);
        Node_Cost[nodeA].push_back(cost);
        Node_Cost[nodeB].push_back(cost);

        if(cost<small_weight)
        {
            array[0]=nodeA;
            array[1]=nodeB;

            small_weight=cost;
        }


    }

    printf("Print Node Adjacency List by traversing the list \n");
    for(int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for(int j = 0; j < Node_Vec[i].size(); j++)
        {
            printf("%d ", Node_Vec[i][j]);
        }
        printf("\n");
    }

    printf("Print Cost Adjacency List by traversing the list \n");
    for(int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for(int j = 0; j < Node_Cost[i].size(); j++)
        {
            printf("%d ", Node_Cost[i][j]);
        }
        printf("\n");
    }

    printf("Small weight is %d . So Source is %d to %d \n ", small_weight,array[0],array[1]);

     //Node.push_front(array[0]);
     Node.push_back(array[1]);
     Cost.push_back(small_weight);

        Node_Vec[array[0]].push_back(array[1]);
        Node_Vec[array[1]].push_back(array[0]);
        Node_Cost[array[0]].push_back(small_weight);
        Node_Cost[array[1]].push_back(small_weight);

     MST M;

    // M.Front_Node=array[0];
    // M.Right_Node=array[1];

    MST M2 = spanning_tree(M);

}
/*
7
8
1
6
10
6
5
25
5
7
24
5
4
22
4
3
12
7
2
14
3
2
16
2
1
28
*/
