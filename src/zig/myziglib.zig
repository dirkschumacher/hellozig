export fn zig_add(a: i32, b: i32) i32 {
    return a + b;
}

export fn zig_fibonacci(n: i64) i64 {
  if (n < 2) {
    return n;
  }
  return zig_fibonacci(n - 2) + zig_fibonacci(n - 1);
}
