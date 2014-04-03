thnktest.obj : thnktest.c
	gcc -v -c thnktest.c

thnktest.exe : thnktest.obj thunker.lib thnktest.def
	link386 thnktest,,,thunker,thnktest

