add_executable(Operators_oper_1 src/oper_1.c)

set(targets)
list(APPEND targets Operators_oper_1)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
