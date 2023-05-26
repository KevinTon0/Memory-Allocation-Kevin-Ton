/*
	Author: Kevin Ton,
	Project: First and Best Fit Memory Allocation
	Filename: memall.h
 */

/*#include <iostream>
#include <cstdlib>
#include <stdio.h>
*/
#ifndef MEMALL_H
#define MEMALL_H

#include "reqgen.h"

using namespace std;

void memoryAllocation();
void firstFit();
void bestFit();
int allocate_mem (int process_id, int num_units);
int deallocate_mem (int process_id);
int fragment_count();

#endif
