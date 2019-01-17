//
//  main.m
//  algorithm
//
//  Created by shiwei on 17/8/16.
//
//

#include <stdio.h>
#include <math.h>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <unordered_map>
#include <iostream>
#include "heap.hpp"
#include <mach/mach_time.h>
#include <unordered_set>
#include <fstream>
#include<stdlib.h>
#include "TypicalProblems.hpp"
#include "DeapFirstSearch.hpp"
//#include "page1.hpp"

#include "TFSort.h"
#include "MinStack.hpp"
#include "LRUCache.hpp"

//#include "TopK.hpp"
#include "Graph.hpp"
#include "MultiwayTree.hpp"
#include "BinaryTree.hpp"
#include "LFUCache.hpp"
#include "SegmentTree.hpp"
#include "CommonStructs.hpp"
#include "B_tree.hpp"
#include "AVL_tree.hpp"


int main(int argc, const char * argv[]) {
    
    uint64_t start = mach_absolute_time();
    
    vector<int> nums = {16,3,7,11,9,26,18,14,15};
    AVL_Tree<int> avlTree(nums);
    
    uint64_t duration = mach_absolute_time() - start;
    mach_timebase_info_data_t timebase;
    mach_timebase_info(&timebase);
    double time = 1e-6 * (double)timebase.numer/timebase.denom * duration;
    printf("exe time: %.1f ms\n",time);
//    printf("%d \n",result);
//    printVectorOneLine(result);
    
//    canGameOver(nums, 500549646);
}
