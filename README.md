patch
=====
执行步骤是：
1.   gcc old.c -o old 	
2.  ./old	

然后根据patch更改程序，命名为new.c,重复执行步骤：
1.   gcc new.c -o new
2.   ./new
这样会发现程序不报错！
