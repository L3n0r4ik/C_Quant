#include <benchmark/benchmark.h>

static void BM_Sum(benchmark::State& state) {
    for (auto _ : state) {
        int sum = 0;
        for (int i = 0; i < 1000; ++i) {
            sum += i;
        }
        benchmark::DoNotOptimize(sum);
    }
}

BENCHMARK(BM_Sum);

BENCHMARK_MAIN();
