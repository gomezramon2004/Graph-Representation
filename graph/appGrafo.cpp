#include "appGrafo.hpp"

void Graph::recursiveDFS(int currentNode, std::vector<bool>& visited, std::vector<std::vector<bool>>& adj_matrix) {
    visited[currentNode] = true;
    std::cout << currentNode << " ";

    for (size_t i = 0; i < adj_matrix.size(); ++i) {
        if (adj_matrix[currentNode][i] && !visited[i]) {
            recursiveDFS(i, visited, adj_matrix);
        }
    }
}

// Constructor of graph
void Graph::loadGraph(int n, int m, std::vector<std::vector<bool>>& adj_matrix, std::list<int>* &adj_list) {
    int u, v;
    adj_matrix.assign(n, std::vector<bool>(n, false));
    adj_list =  new std::list<int>[n];

    for (size_t i = 0; i < m; ++i) {
        std::cout << "Introduce the edge " << i + 1 << ": ";
        std::cin >> u >> v;
        addEdge(u, v, adj_matrix, adj_list);
    }
}

// Add an edge to the graph
void Graph::addEdge(int u, int v, std::vector<std::vector<bool>>& adj_matrix, std::list<int>* &adj_list) {
    adj_matrix[u][v] = true;
    adj_matrix[v][u] = true;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

// Remove an edge to the graph
void Graph::removeEdge(int u, int v, std::vector<std::vector<bool>>& adj_matrix, std::list<int>* &adj_list) {
    adj_matrix[u][v] = false;
    adj_matrix[v][u] = false;
    adj_list[u].remove(v);
    adj_list[v].remove(u);
}

void Graph::DFS(int start, std::vector<std::vector<bool>>& adj_matrix) {
    std::vector<bool> visited(adj_matrix.size(), false);
    recursiveDFS(start, visited, adj_matrix);
    std::cout << std::endl;
}