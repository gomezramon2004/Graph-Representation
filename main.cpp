#include "./graph/appGrafo.hpp"

int main() {
    Graph g;
    std::vector<std::vector<bool>> adj_matrix;
    std::list<int>* adj_list;
    int n, m, start;

    std::cout << "Introduce the number of nodes: ";
    std::cin >> n;
    std::cout << "Introduce the number of edges: ";
    std::cin >> m;

    g.loadGraph(n, m, adj_matrix, adj_list);

    std::cout << "Introduce the start node: ";
    std::cin >> start;

    std::cout << "DFS: ";
    g.DFS(start, adj_matrix);

    return 0;
}