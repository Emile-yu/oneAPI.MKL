#pragma once
#include <mkl.h>

enum Order_t
{
	RowMajor = 101,
	ColMajor = 102
};

enum Transpose_t
{
	NoTrans = 111,
	Trans = 112,
	ConjTrans = 113
};

class OperationBase
{
public:
	OperationBase(int order, int transposeMatrixA, int transposeMatrixB);
	
protected:
	int _order;
	int _transA;
	int _transB;
};

