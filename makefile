runoob: 
	# make runoob
	gcc runoob.c -o build/runoob && build/runoob
case:
	# make case N=1
	gcc case$(N).c -o build/case$(N) && build/case$(N)