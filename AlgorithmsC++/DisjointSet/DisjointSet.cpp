#include "DisjointSet.h"
/**
 * Constructor the disjoint sets object
 * numElements is the initial number of disjoint sets
*/
DisjointSet::DisjointSet(int numElements) {
    s.resize(numElements,-1);
}
/**
 * Union two disjoint sets
 * 
*/