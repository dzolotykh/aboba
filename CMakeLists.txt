cmake_minimum_required(VERSION 3.26)
project(SBC)

set(CMAKE_CXX_STANDARD 17)

add_executable(SBC src/main.cpp
        src/chunking/AbstractChunker.h
        src/chunking/Chunk.h
        src/hashing/Hasher.h)
