#include <iostream>
#include "Graph.h"
using namespace std;

int main(){
    Graph * newGraph = new Graph(false);
    if(newGraph->isDirected()){
        cout<<"It is a dorected graph"<<endl;
    }
    else{
        cout<<"It is not a directed graph"<<endl;
    }

    newGraph->addVertex('a');
    newGraph->addVertex('b');
    newGraph->addVertex('c');
    newGraph->addVertex('d');


    newGraph->displayVertex();
    newGraph->addEdge('a','b');
    newGraph->displayEdge();
    newGraph->addEdge('c','d');
    newGraph->displayVertex();

    newGraph->displayEdge();





}
