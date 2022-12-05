#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> vectGraph;
	int vertexPosition=1;

   if (vertexPosition==0){
        vector<int>one(1,0);
        vectGraph.push_back(one);
    }
    else{
        for (int i= 0 ;i<vertexPosition;i++){
            vectGraph[i].push_back(0);
        }
        vector<int>add(vertexPosition,0);
        vectGraph.push_back(add);
    }
    for (int i = 0; i < vectGraph.size(); i++)
    {
        for (int j = 0; j < vectGraph[i].size(); j++)
        {
            cout << vectGraph[i][j] << " ";
        }
        cout << endl;
    }

	
	return 0;
}	