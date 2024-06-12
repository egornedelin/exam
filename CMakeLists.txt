cmake_minimum_required(VERSION 3.10)

# Название вашего проекта
project(EvenOrOdd)

# Установить стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавить исполняемый файл
add_executable(even_or_odd program.cpp)
