add_executable(constant_1 src/constant_1.c)
add_executable(constant_2 src/constant_2.c)

set(targets)
list(APPEND targets constant_1)
list(APPEND targets constant_2)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
