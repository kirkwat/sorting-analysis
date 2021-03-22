cmake_minimum_required(VERSION 3.14)
project(21s-pa02)
set (EXE_NAME sort)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS_DEBUG "-O3")
add_executable(${EXE_NAME} src/main.cpp src/Sorter.cpp src/Sorter.h src/AlgorithmStrategy.cpp src/AlgorithmStrategy.h src/Selection.cpp src/Selection.h src/Quick.cpp src/Quick.h src/Merge.cpp src/Merge.h src/Insertion.cpp src/Insertion.h src/Heap.cpp src/Heap.h src/RandomNumberBetween.h src/Tim.cpp src/Tim.h)