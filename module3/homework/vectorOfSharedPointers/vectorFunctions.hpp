#pragma once

#include <memory>
#include <vector>

typedef std::vector< std::shared_ptr<int> > VectorSPtr;

VectorSPtr generate(int count);
void print(const VectorSPtr& vec);
void add10(const VectorSPtr& vec);
void sub10(int* const pItem);
void sub10(const VectorSPtr& vec);
