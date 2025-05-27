cc_library(
    name = 'calc_lib',
    testonly = True,
    deps = [
        '//package:add_lib',
        '//package:mul_lib',
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = 'test_calc',
    srcs = [
        'test_add.cpp',
        'test_mul.cpp',
    ],
    includes = ["../src/"],
    deps = [
        ':calc_lib',
        '@googletest//:gtest_main'
    ]
)
