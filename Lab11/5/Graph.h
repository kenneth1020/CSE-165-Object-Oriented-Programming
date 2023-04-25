#ifndef LA10_Graph_h
#define LA10_Graph_h

#include "Vertex.h"

using namespace std;

class Graph {
public:
    /*! A collection of vertices */
    vector<Vertex*> items;
    
    /*! A method to add a vertex to the items vector */
    void add(Vertex* d){
        //insert your code here
        d->ref();
        items.push_back(d);
    }
    
    /*! A method to display the graph as pairs of vertices */
    void print (){
        //insert your code here
        for (int i=0; i<items.size(); i+=2) {
            cout << items[i]->getLabel() << " - " << items.at(i + 1)->getLabel() << endl;
        }
    }
    
    /*! A method to free up all the space taken up by the graph */
    void deleteAll(){
        //insert your code here
        for (int i =0; i<items.size(); i++) {
            items[i]->unref();
        }
    }
};

#endif