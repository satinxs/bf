@echo off

rm -rf results.log

echo Running with TCC
tcc main.c -o bf.exe
bf tests\mandelbrot.bf >> results.log

echo Running with TCC and CGOTO
tcc main.c -o bf.exe -DUSE_CGOTO
bf tests\mandelbrot.bf >> results.log

echo Running with GCC
gcc -O3 main.c -o bf.exe
bf tests\mandelbrot.bf >> results.log

echo Running with GCC and CGOTO
gcc -O3 main.c -o bf.exe -DUSE_CGOTO
bf tests\mandelbrot.bf >> results.log

rm -rf bf.exe
