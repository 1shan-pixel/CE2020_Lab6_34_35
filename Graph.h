#include <vector>
#include <iostream>
using namespace std;

#ifndef GRAPH
#define GRAPH

class vertex
{

public:
    char Character;
    int index;
    vertex(char c, int i)
    {
        Character = c;
        index = i;
    }
    vertex() = default;
};

class Graph
{

private:
    int vertexPosition = 0;
    bool directed;
    vertex *head;

public:
    vertex v;
    vector<vector<int>> vectGraph;
    Graph(bool directed)
    {
        this->directed = directed;
    }
    vector<vertex *> graph;
    bool isDirected();
    void addVertex(char newVertex);
    void addEdge(char fromVertex, char toVertex);
    void removeEdge();
    int numEdges();
    int outdegree();
    char neighbours();
    void displayVertex();
    void displayEdge();

};

#endif