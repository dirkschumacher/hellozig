#include <R.h>
#include <Rinternals.h>
#include <R_ext/Visibility.h>
#include "zig/api.h"

SEXP C_add(SEXP a, SEXP b) {
  SEXP result = PROTECT(allocVector(INTSXP, 1));
  INTEGER(result)[0] = zig_add(asInteger(a), asReal(b));
  UNPROTECT(1);
  return result;
}

SEXP C_fib(SEXP n) {
  SEXP result = PROTECT(allocVector(INTSXP, 1));
  INTEGER(result)[0] = zig_fibonacci(asInteger(n));
  UNPROTECT(1);
  return result;
}

static const R_CallMethodDef CallEntries[] = {
  {"C_add", (DL_FUNC) &C_add, 2},
  {"C_fib", (DL_FUNC) &C_fib, 1},
  {NULL, NULL, 0}
};

attribute_visible void R_init_hellozig(DllInfo *dll)
{
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
