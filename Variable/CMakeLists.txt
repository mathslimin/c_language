add_executable(Variable-call src/call_1.c src/call_2.c)
add_executable(Variable-main src/main.c)

set(targets)
list(APPEND targets Variable-call)
list(APPEND targets Variable-main)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
