cmake_minimum_required(VERSION 3.27)

project(LABA_1)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS}) #Список каталогов поиска файлов в препроцессоре.

set(CMAKE_CXX_STANDARD 17)

add_executable(LABA_1 src/main.cpp src/func.cpp) #Добавить исполняемый файл в проект,используя указанные исходные файлы.

enable_testing() #Включает тестирование для этого каталога и ниже.

add_executable(tests01 src/tests01.cpp src/func.cpp)
target_link_libraries(tests01 ${GTEST_LIBRARIES})

add_test(NAME BASIC COMMAND tests01)