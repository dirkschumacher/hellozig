test_that("add works", {
  expect_equal(4L, zig_add(2L, 2L))
})

test_that("fibonacci works", {
  expect_equal(6765L, zig_fibonacci(20L))
})
