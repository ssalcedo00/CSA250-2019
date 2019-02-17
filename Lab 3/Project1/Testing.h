#ifndef TESTING_H
#define TESTING_H

#include "AnyList.h"

#include <iostream>
#include <vector>
using namespace std;

void test_insertBack();
void test_getNumOfItems();
void test_search();
void test_commonEnds();

void call_insertBack(AnyList& aList, int item);
void call_getNumOfItems(const AnyList& aList, int& items);
void call_search(const AnyList& aList, int item, bool& found);
void call_commonEnds(const AnyList& aList, 
	const AnyList& anotherList, bool& result);

#endif

