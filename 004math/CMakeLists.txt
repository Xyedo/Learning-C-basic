cmake_minimum_required(VERSION 3.15...3.23)

project(myMath
        VERSION 1.0
        LANGUAGES C)


add_library(MathLib mymath.c mymath.h)
add_executable(004math main.c)
target_link_libraries(004math MathLib)