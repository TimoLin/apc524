#ifndef CONVOLUTE_H_
#define CONVOLUTE_H_

#include "integrator.h"
#include "matrix.h"
#include "matrix3d.h"

class Convolute {

 public:
  Convolute(const int nPoints);
  ~Convolute();

  /// Calculates values of a CONVOLUTE
  //virtual int pdfVal(const double Zmean, const double Zvar, double *pdfRet) = 0;
  int convVal(const Matrix3D *pdfValues, const double *rxnRate, const double *progVar, Matrix **postConvVal, Integrator *intgr);

 private:
  const int nPoints_;
};

#endif // CONVOLUTE_H_
