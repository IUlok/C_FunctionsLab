double Integral(double *f, float shag, int num) {
  double res = 0;
  for (int i=0; i<=num; i++) {
    res+=f[i];
  }
  res *= shag;
  return res;
}
