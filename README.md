
<!-- README.md is generated from README.Rmd. Please edit that file -->

# hellozig

<!-- badges: start -->

[![Lifecycle:
experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://www.tidyverse.org/lifecycle/#experimental)
<!-- badges: end -->

The goal of `hellozig` is to play with R and
[zig](https://ziglang.org/).

> Zig is a general-purpose programming language designed for robustness,
> optimality, and maintainability.

## Installation

You need to
[install](https://github.com/ziglang/zig/wiki/Install-Zig-from-a-Package-Manager)
the zig compiler `zig` to use this package.

## Example

This is a basic example which shows you how to solve a common problem:

``` r
library(hellozig)

zig_add(10, 20)
#> [1] 30
```

``` r
zig_fibonacci(12)
#> [1] 144
```

The actual zig code looks like this:

``` rust
export fn zig_add(a: i32, b: i32) i32 {
    return a + b;
}

export fn zig_fibonacci(n: i64) i64 {
  if (n < 2) {
    return n;
  }
  return zig_fibonacci(n - 2) + zig_fibonacci(n - 1);
}
```

## References

  - [hellorust](https://github.com/r-rust/hellorust) - uses the same
    approach.
  - [ziglang](https://ziglang.org/)
