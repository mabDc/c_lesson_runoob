runoob: 
	# make runoob
	gcc runoob.c -o build/runoob && build/runoob
case:
	# make case N={N} [arg={arg}]
	gcc case${N}.c common/common.c -o build/case${N} && build/case${N} ${arg}
