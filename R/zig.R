#' Add to integers
#' @param a a scalar integer
#' @param b another scalar integer
#' @export
zig_add <- function(a, b) {
  .Call("C_add", a, b)
}

#' Fibonacci number
#' @param n a scalar integer
#' @export
zig_fibonacci <- function(n) {
  .Call("C_fib", n)
}
