#pragma once

#include "OperationBase.h"

class CBLASNative : public OperationBase
{
public:
	CBLASNative(int order, int transposeMatrixA, int transposeMatrixB) : OperationBase(order, transposeMatrixA, transposeMatrixB)
	{
			
	}
	void dgemm(int M, int N, int P, double alpha, double* A, int lda, double* B, int ldb, double beta, double* C, int ldc);
};

