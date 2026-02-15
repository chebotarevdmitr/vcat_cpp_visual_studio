cmake_minimum_required(VERSION 3.10)

# Название проекта
project(vcat_cpp VERSION 1.0 LANGUAGES CXX)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(vcat_cpp mein.cpp)
