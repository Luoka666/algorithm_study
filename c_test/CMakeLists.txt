cmake_minimum_required(VERSION 3.20)
project(c_test C)

# 1. 设定标准
set(CMAKE_C_STANDARD 99)

# 2. 设定输出路径 (只需设这一个即可，控制可执行文件的去向)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 3. 扫描当前目录下所有的 .c 文件 (不再深入扫描 build 目录，防止冲突)
file(GLOB ALL_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.c")

# 4. 遍历并生成
foreach (file ${ALL_SOURCES})
    # 获取文件名（不带后缀），比如 main.c 变成 main
    get_filename_component(exe_name ${file} NAME_WE)

    # 真正把文件加入项目
    add_executable(${exe_name} ${file}
            3_Multiple.c
            Longestsubstring_Violence.c)

    message(STATUS "已关联项目文件: ${exe_name} (${file})")
endforeach ()