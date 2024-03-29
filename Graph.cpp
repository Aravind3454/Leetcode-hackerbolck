#include <iostream>
using namespace std;

const int MAX_VERTICES = 100;

struct Node {
    int data;
    Node* next;
};

class Graph {
private:
    Node* vertices[MAX_VERTICES];

public:
    Graph() {
        for (int i = 0; i < MAX_VERTICES; i++) {
            vertices[i] = nullptr;
        }
    }

    void addEdge(int src, int dest) {
        Node* newNode = new Node{dest, vertices[src]};
        vertices[src] = newNode;
    }

    void printGraph() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        Node* current = vertices[i];
        if (current != nullptr) {
            cout << "Vertex " << i << " -> ";
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
}
};

int main() {
    Graph graph;
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0);

    graph.printGraph();

    return 0;
}
