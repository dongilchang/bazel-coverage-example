A missing Bazel Code Coverage 
========================

Sample Project to reproduce the missing Bazel code coverage

The `docker` folder contains a Dockerfile that prepares the build environment (ubuntu 18.04 + Bazel 8.2.1).
To start the container call"
```
   docker/run.sh
```

It will build and start the container. The code is mounted in the folder `/code`.

To build:
```
cd /code
bazel build //...
```

To run the unit test:
```
bazel test //...
```

To create the coverage report:
```
bazel coverage --cxxopt=-std=c++17 --instrumentation_filter=^//package[/:],-^//package/test[/:] --strategy=CoverageReport=local --nocache_test_results --experimental_split_coverage_postprocessing --experimental_fetch_all_coverage_outputs --copt="-O0" --combined_report=lcov //...
genhtml bazel-out/_coverage/_coverage_report.dat -o report
```

The code coverage report doesn't contain  the coverage result of `package/src/add.hpp`
even though the test case fully verify the template function in `package/src/add.hpp`.
