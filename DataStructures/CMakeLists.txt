cmake_minimum_required(VERSION 3.8)
project(DataStructures)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#set(SOURCE_FILES exercises/exercise4.cpp)

#exercises
#set(SOURCE_FILES exercises/exercise1.cpp)
#set(SOURCE_FILES exercises/exercise2.cpp)
#set(SOURCE_FILES exercises/exercise3.cpp)
#set(SOURCE_FILES exercises/exercise4.cpp)

#search
#set(SOURCE_FILES search/binaria.cpp)
#set(SOURCE_FILES search/secuencial.cpp)

#sample
#set(SOURCE_FILES samples/sample1.cpp)
#set(SOURCE_FILES samples/sample2.cpp)
#set(SOURCE_FILES samples/sample3.cpp)
#set(SOURCE_FILES samples/sample4.cpp)
#set(SOURCE_FILES samples/sample5.cpp)
#set(SOURCE_FILES samples/sample6.cpp)

#ordenamiento
#set(SOURCE_FILES ordering/insertion.cpp)
#set(SOURCE_FILES ordering/selection.cpp)

#pilas
#set(SOURCE_FILES pilas/sample1.cpp)
#set(SOURCE_FILES pilas/sample2.cpp)

#colas
#set(SOURCE_FILES colas/sample1.cpp)
set(SOURCE_FILES colas/sample2.cpp)

add_executable(DataStructures ${SOURCE_FILES})