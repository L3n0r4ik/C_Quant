cmake_minimum_required(VERSION 3.24)
project(C_Quantitative)

set(CMAKE_CXX_STANDARD 17)

add_executable(C_Quantitative main.cpp)

include(FetchContent)
#Google Test
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

#Настройка Google Test
enable_testing()
add_executable(
        unit_tests
        test.cpp  #Сам файл с тестами
        test.cpp)
target_link_libraries(
        unit_tests
        gtest_main
)

#Команда запуска тестов
add_test(
        NAME UnitTests
        COMMAND unit_tests
)

include(FetchContent)
FetchContent_Declare(
        googlebenchmark
        URL https://github.com/google/benchmark/archive/refs/tags/v1.6.0.zip
)
FetchContent_MakeAvailable(googlebenchmark)

#Настройка Google Benchmark
add_executable(benchmark_tests benchmark.cpp benchmark.cpp)  #Файл с бенчмарком
target_link_libraries(benchmark_tests benchmark::benchmark)