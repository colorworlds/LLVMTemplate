cmake_minimum_required(VERSION 3.18)

project(CPP)

# 查找llvm库
find_package(LLVM REQUIRED CONFIG)
 
# 添加llvm的头文件目录
include_directories(${LLVM_INCLUDE_DIRS})

# 将所需的LLVM库映射到llvm_libs变量。
llvm_map_components_to_libnames(llvm_libs support core irreader)

add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_17)

# 这里是在需要编译的可执行文件或库上添加，以链接LLVM库
target_link_libraries(main ${llvm_libs})