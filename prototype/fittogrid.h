#ifndef FITTOGRID_H_
#define FITTOGRID_H_

#include "matrix.h"
#include "matrix3d.h"
#include "matrix4d.h"
#include "interpolator.h"

int fittogrid(Matrix4D *datain, const double *cgrid, Interpolator *interp, Matrix3D *dataout);

#endif // FITTOGRID_H_
