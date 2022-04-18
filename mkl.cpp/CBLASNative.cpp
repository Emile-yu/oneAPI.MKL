#include "CBLASNative.h"

void CBLASNative::dgemm(int M, int N, int P, double alpha, double* A, int lda, double* B, int ldb, double beta, double* C, int ldc)
{
	cblas_dgemm(CBLAS_LAYOUT::CblasRowMajor, CBLAS_TRANSPOSE::CblasNoTrans, CBLAS_TRANSPOSE::CblasNoTrans,
		M, N, P, alpha, A, lda, B, ldb, beta, C, ldc);
}
