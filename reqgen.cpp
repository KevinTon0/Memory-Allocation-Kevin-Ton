/*
	Author: Kevin Ton,
	Project: First and Best Fit Memory Allocation
	Filename: reqgen.cpp
 */


#include "reqgen.h"

using namespace std;

//Request generation will be generating allocation and deallocation requests
//where allocation specifies process ID for deallocation to happen.
//Request generation will be based on a hard coded sequence
void reqGeneration() {
	int blockSize[] = {100, 500, 200, 300, 600};
	int processSize[] = {212, 417, 112, 426};
	int m = sizeof(blockSize) / sizeof(blockSize[0]);
	int n = sizeof(processSize) / sizeof(processSize[0]);
}
int allocate_mem(int process_id, int num_units){

}
int deallocate_mem(int process_id){

}
int fragment_count(){
}

