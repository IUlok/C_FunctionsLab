double Integral(double *f, float shag, int num) {
  double res = 0; // Счетчик площади
  for (int i=0; i<=num; i++) {
    res+=f[i]; // Сложение всех участков
  }
  res *= shag; // Аналог S*h
  return res;
}
