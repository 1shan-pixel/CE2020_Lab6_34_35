#ifndef graph_h
#define graph_h 

#include <vector>
#include <iostream>
using namespace std;


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
public:

    int vertexPosition = 0 ; 
    bool directed;
    vertex *head;

    int numberOfRow = 1;
    vertex v;
    vector<vector<int>> vectGraph;
    Graph(bool directed)
    {
        this->directed = directed;
    }
    vector<vertex *> graph;
    bool isEmpty(); 
    bool isDirected();
    void addVertex(char newVertex);
    int numVertices(); 
    void removeVertex(char oldcharVertex); 
    void addEdge(char fromVertex, char toVertex);
    void removeEdge(char vertex);
    void numOfEdges(char vertex);
    int outDegree(char vertex);
    int inDegree(char vertex);
    char neighbours();
    int degree(char vertex); 
    void displayVertex();
    void displayEdge();
    bool neighbour(char v1, char v2); 
    void neighbours (char vertex); 
    vertex* returnVertex(char vertex);//Returns the pointer to the vertex after giving the character/name of vertex

};


#endif