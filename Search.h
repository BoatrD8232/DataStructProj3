#include <vector>
#include <iostream>
using namespace std;
#pragma once

/*
	linear_search- Searches through a vector sequentially starting at the end.
	param items- The vector of data.
	param target- The data item being searched for.
	param pos_last- The starting point of the search. If searching the whole vector this will be the last index of the vector.
	returns- The index of the last occurrence of the target, or -1 if not found.
*/
int linear_search(vector<int>& items, int target, int pos_last);
