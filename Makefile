all:
	mkdir build
	g++ -std=c++17 *.cpp -o ./build/nlang.out

clean:
	rm -rf build
