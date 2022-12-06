#include <iostream>
#include "Graph.h"
#include "Graph.cpp"
using namespace std;

int main()
{
    
    static int vertices = 5; 
    Graph *newGraph = new Graph(false);
    cout << "It is a undirected graph" << endl;
    cout<<"Checking for Empty condition"<<endl;
    if(newGraph->isEmpty()){
        cout<<"It is emtpy graph, need to add vertices"<<endl;
    }
    else{
        cout<<"It is not empty graph"<<endl;
    }
    cout<<"Adding vertices"<<endl;
    newGraph->addVertex('a');
    newGraph->addVertex( 'b');
    newGraph->addVertex('c'); 
    newGraph->addVertex('d'); 
    cout<<"Counting the number of vertices"<<endl;
    cout<<"Vertices : " <<newGraph->numVertices()<<endl;
    newGraph->displayVertex();
    cout<<"Adding Edges"<<endl;
    newGraph->addEdge('a','b'); 
    newGraph->addEdge('a','d'); 
    newGraph->addEdge('a','c'); 
    newGraph->addEdge('c', 'd'); 
    newGraph->addEdge('b' , 'c'); 
    cout<<"Displaying Edges"<<endl;
    newGraph->displayEdge(); 
    cout<<"Seeing the neighbours of vertex A"<<endl;
    newGraph->neighbours('a');
    cout<<endl;
    cout<<"Removing vertex a"<<endl;
    newGraph->removeVertex('a'); 
    cout<<"Counting the number of vertices"<<endl;
    cout<<"Vertices: " << newGraph->numVertices()<<endl;

    cout<<"Displaying after removing vertex a "<<endl;
    newGraph->displayVertex(); 
    cout<<"Now counting number of edges  of  B"<<endl;
    newGraph->numOfEdges('b'); 
    
    cout<<"Now seeing the degree of vertex C "<<endl;
    cout<<newGraph->degree('c')<<endl;

    cout<<"Checking if b and c are neighbours"<<endl;
    if(newGraph->neighbour('b', 'c')){
        cout<<"They are neighbours"<<endl;
    }
    else{
        cout<<"They are not neighbours"<<endl;
    }
    
//
 }