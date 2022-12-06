#include "Graph.h"

bool Graph :: isEmpty(){
    if(graph.size()==0){
        return true; 
    }
    else {
        return false; 
    }
}
bool Graph::isDirected()
{
    return (directed) ? true : false;
};

void Graph::addVertex(char newVertexChar)
{
    vertex *newVertex = new vertex(newVertexChar, graph.size());
    
    if(graph.size() == 0 ){

    graph.push_back(newVertex);
    vectGraph.resize(graph.size(), vector<int>(graph.size(), 0)); 
    
    
    }
    else{
        graph.push_back(newVertex); 
        
        vectGraph.resize(graph.size(), vector<int>(graph.size(), 0));
    }
    
    
    
    
    
    
};
void Graph:: removeVertex(char oldVertexChar)
{
  
    int index = -1;
    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i]->Character == oldVertexChar)
        {
            index = i;
            break;
        }
    }

    
    if (index == -1) return;

    
    graph.erase(graph.begin() + index);

    
   
}
int Graph :: numVertices(){
    return graph.size(); 
}
void Graph::displayVertex()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << graph[i]->Character << " " << graph[i]->index << endl;
    }
}

void Graph::addEdge(char fromVertex, char toVertex)
{
    vertex *FromVertex;
    vertex *ToVertex;

    FromVertex = returnVertex(fromVertex);
    ToVertex = returnVertex(toVertex);
    vectGraph[FromVertex->index][ToVertex->index] = 1;
    vectGraph[ToVertex->index][FromVertex->index] = 1;
    
}

void Graph::displayEdge()
{
    for(int i = 0 ; i< vectGraph.size(); i++){
        for( int j = 0 ; j<vectGraph.size(); j++){
            cout<<vectGraph[i][j]<< " ";
        }
        cout<<endl;
    }

    
}

void Graph::removeEdge(char character)
{
    vertex *Vertex;
    Vertex = returnVertex(character);

    int rowToDelete = Vertex->index;
    if (vectGraph.size() > rowToDelete)
    {
        vectGraph.erase(vectGraph.begin() + rowToDelete);
    }
    unsigned columnToDelete = Vertex->index;

    for (unsigned i = 0; i < vectGraph.size(); ++i)
    {
        if (vectGraph[i].size() > columnToDelete)
        {
            vectGraph[i].erase(vectGraph[i].begin() + columnToDelete);
        }
    }
    numberOfRow--;
    vertexPosition--;
    for (int i = 0; i < graph.size(); i++)
    {
        if(graph[i]->index>rowToDelete){
            graph[i]->index--;
        }
       
    }

};

int Graph::outDegree(char character)
{
    vertex *Vertex;
    int count = 0;
    Vertex = returnVertex(character);
    for (int j = 0; j < vectGraph[Vertex->index].size(); j++)
    {
        if (vectGraph[Vertex->index][j] == 1)
        {
            count++;
        }
    }
    return count;
};
int Graph::inDegree(char character)
{
    vertex *Vertex;
    Vertex = returnVertex(character);
    int count = 0;
    for (int j = 0; j < vectGraph[Vertex->index].size(); j++)
    {
        if (vectGraph[j][Vertex->index] == 1)
        {
            count++;
        }
    }
    return count;
};
int Graph :: degree(char vertex){
    return this->inDegree(vertex);  
}
void Graph::numOfEdges(char vertex)
{
    cout << "Number of Edges of " << vertex << " is " << inDegree(vertex) << endl;
}

vertex *Graph ::returnVertex(char character)
{
    vertex *ToVertex;
    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i]->Character == character)
        {
            ToVertex = graph[i];
            return ToVertex;
        }
    }
    return nullptr;
}
bool Graph :: neighbour(char v1, char v2){
    int pv1; 
    int pv2; 
    for(int i = 0 ; i<graph.size(); i++){
        if(graph[i]->Character == v1){
            pv1 = i; 
        }
        if(graph[i]->Character ==v2){
            pv2 = i; 
        }

    }
    if(vectGraph[pv1][pv2] == 1){
        return true; 
    }
    else{
        return false; 
    }
}
void Graph :: neighbours(char vertex){
    int vertexPos = -1; 
    vector <char> neighbour_array ; 
    for(int i = 0 ; i< graph.size(); i++){
        if(graph[i]->Character == vertex){
            vertexPos = i ; 
        }

    }
    for(int i = 0 ; i<graph.size(); i++){
        if(vectGraph[i][vertexPos] == 1){
            neighbour_array.push_back(graph[i]->Character); 

        }
    }
    for( int i = 0 ; i<neighbour_array.size(); i++){
        cout<<neighbour_array[i] << " " ; 
    }

}

