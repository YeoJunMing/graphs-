#include <iostream>
#include <list>
#include <iterator>

//to print the list
void outputList(std::list<int> adj_list[], int v) {
  for (int i = 0; i < v; i++) {
    std::cout << i << "--->";
    std::list<int> :: iterator it;
    for (it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << "\n";
  }
}

//adding edge by adding to both columns/lists
void addedge(std::list<int> adj_list[], int u, int v) {
  adj_list[u].push_back(v);
  adj_list[v].push_back(u);
}

int main(int argc, char* argv[]) {
  int v = 6;
  std::list<int> adj_list[v];
  //add the edges show in graph
  addedge(adj_list, 0, 4);
  addedge(adj_list, 0, 3);
  addedge(adj_list, 1, 2);
  addedge(adj_list, 1, 4);
  addedge(adj_list, 1, 5);
  addedge(adj_list, 2, 3);
  addedge(adj_list, 2, 5);
  addedge(adj_list, 5, 3);
  addedge(adj_list, 5, 4);
  outputList(adj_list, v);
}
