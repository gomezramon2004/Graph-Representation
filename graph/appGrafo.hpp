#pragma once
#include <vector>
#include <list>

class Graph {
    public:
        void loadGraph(int n, int m, std::vector<std::vector<bool>>& adj_matrix, std::list<int>* &adj_list);
        void addEdge(int u, int v, std::vector<std::vector<bool>>& adj_matrix, std::list<int>* &adj_list);
        void DFS(int start, bool** adj_matrix);
        void BFS(int start, std::list<int>* adj_list);
};

