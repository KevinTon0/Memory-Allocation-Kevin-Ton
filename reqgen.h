/*
	Author: Kevin Ton,
	Project: First and Best Fit Memory Allocation
	Filename: reqgen.h
 */

#ifndef REQGEN_H
#define REQGEN_H

#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

void reqGeneration();
int allocate_mem(int process_id, int num_units);
int deallocate_mem (int process_id);
int fragment_count();
#endif
