#include <iostream>

int two_d_array[20][20];
int count = 0;

// to output a matrix
void outputMatrix(int v) {
  int i, j;
  for (i = 0; i <  v; i++) {
    for (j = 0; j < v; j++) {
      std::cout << two_d_array[i][j] << " ";
    } 
    std::cout << "\n";
  }
}

//to add edge to matrix
void addedge (int u, int v) {
  two_d_array[u][v] = 1;
  two_d_array[v][u] = 1;
}

 int main(int argc, char* argv[]) {
   int v = 6;    //add vertices shown in graph
   addedge(0, 4);
   addedge(0, 3);
   addedge(1, 2);
   addedge(1, 4);
   addedge(1, 5);
   addedge(2, 3);
   addedge(2, 5);
   addedge(5, 3);
   addedge(5, 4);
   outputMatrix(v);
}
