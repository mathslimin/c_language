add_executable(Function-main src/main.c)

set(targets)
list(APPEND targets Function-main)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
