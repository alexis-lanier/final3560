count=./a.out 

finalcode.o: finalcode.cc
	g++ -g -Wall finalcode.cc

doc: finalcode.cc
	doxygen -g doc.conf
	doxgyen doc.conf

clean: 
	-rm -rf *.o a.out
	-rm -rf html latex

count:
	$(count) 

