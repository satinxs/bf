@echo off

rm -rf results.log

echo Running with TCC
make tcc
bf tests\mandelbrot.bf >> results.log

echo Running with GCC
make
bf tests\mandelbrot.bf >> results.log

rm -rf bf.exe
