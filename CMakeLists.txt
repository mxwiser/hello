cmake_minimum_required(VERSION 3.22)
project(HELLO)

set(CMAKE_CXX_STANDARD 23)
add_compile_options()
include_directories(.)
include_directories(/www/server/mysql/include)

#添加lib地址，再导入库 即—L -l
link_directories(/www/server/mysql/lib)
link_libraries(mysqlclient m)



file(GLOB_RECURSE SOURCES "Src/*.*")

add_executable(HELLO main.c ${SOURCES})
