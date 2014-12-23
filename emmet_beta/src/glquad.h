#ifndef GLQuad_H_
#define GLQuad_H_

#include "integrator.h"

class GLQuad : public Integrator {
 public:
  GLQuad(int Nodes);
  ~GLQuad();
  double integrate(double *integrand, double *Z, int ZPoints);

 private:
  int Nodes_;
  double *x_;
  double *w_;
};

#endif // GLQuad_H_