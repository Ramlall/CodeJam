all:
	g++ template.cpp -o main
a:
	g++ a.cpp -o main
b:
	g++ b.cpp -o main
c:
	g++ c.cpp -o main
d:
	g++ d.cpp -o main
clean a:
	rm A.out
	rm main	
clean b:
	rm B.out
	rm main	
clean c:
	rm C.out
	rm main	
clean d:
	rm D.out
	rm main
clean:
	rm main
