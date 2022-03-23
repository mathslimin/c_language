# 遍历项目根目录下所有的 .c 文件
# all c files
file(GLOB_RECURSE SRC_LIST ${CMAKE_CURRENT_LIST_DIR}/src/*.c)
# generate target for every cpp file
foreach (v ${SRC_LIST})
    # file relative path from src/
    string(REGEX MATCH "src/.*" relative_path ${v})
    # delete string "src/"
    string(REGEX REPLACE "src/" "" target_name ${relative_path})
    # delte string .c
    string(REGEX REPLACE ".c" "" target_name ${target_name})
    # rename '/' and '.' to '_'
    string(REGEX REPLACE "/|\\." "_" target_name ${target_name})
    message(\ \ \ \ --\ ${v} \ will\ be\ compiled\ to\ bin/${target_name})
    add_executable(${target_name} ${v})
    # 安装动态库和可执行程序
    install(TARGETS ${target_name}
            LIBRARY DESTINATION lib
            RUNTIME DESTINATION bin
            )
endforeach ()
