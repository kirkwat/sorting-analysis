cmake_minimum_required(VERSION 3.14)
project(21s-pa02)
set (EXE_NAME sort)

##########################################
# Students, edit the items below.  In the quotes,
# put the names of the input files as they should appear
# in the argv param to main.
# Example:
#   set (input01 "train_data.csv")
#   set (input02 "train_target.csv")
# etc....

#set (input01 "input03.txt")
#set (input02 "")

#
##########################################

# Copy data files to build dir
#foreach(file IN LISTS input01 input02 input03 input04)
#    configure_file(${file} ${file} COPYONLY)
#endforeach()

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS_DEBUG "-O3")
add_executable(${EXE_NAME} src/main.cpp src/Sorter.cpp src/Sorter.h src/AlgorithmStrategy.cpp src/AlgorithmStrategy.h src/Selection.cpp src/Selection.h src/Quick.cpp src/Quick.h src/Merge.cpp src/Merge.h src/Insertion.cpp src/Insertion.h src/Heap.cpp src/Heap.h)