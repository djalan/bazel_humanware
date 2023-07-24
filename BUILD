cc_library(
  name = "math-hw",
  srcs = ["src/math_hw.cc"],
  hdrs = ["src/math_hw.h"],
)

cc_binary(
  name = "hello-world",
  srcs = ["src/hello.cc"],
  deps = [
    ":math-hw",
  ],
)

cc_test(
  name = "math_hw_test",
  size = "small",
  srcs = ["test/math_hw_test.cc"],
  deps = ["@com_google_googletest//:gtest_main"],
)
