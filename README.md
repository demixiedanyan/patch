patch
=====
执行步骤是：
$gcc old.c -o old 
$./old
然后界面出现段错误，继续用catchsegv ./old调试，出现
demi@demi-K42JB:~/Desktop/7$ ./a.out
File could not be opened
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
6demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ gcc seg1.c
demi@demi-K42JB:~/Desktop/7$ ./a.out
段错误 (核心已转储)
demi@demi-K42JB:~/Desktop/7$ catchsegv ./a.out
Segmentation fault (core dumped)
*** Segmentation fault
Register dump:
然后根据patch更改程序，命名为new.c,重复执行步骤：
$gcc new.c -o new
$./new
这样会发现程序不报错！
