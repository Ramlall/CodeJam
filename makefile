all:
	g++ template.cpp -o main
a:
	g++ -std=c++0x a.cpp -o main
b:
	g++ -std=c++0x b.cpp -o main
c:
	g++ -std=c++0x c.cpp -o main
d:
	g++ -std=c++0x d.cpp -o main
clean:
	rm main
