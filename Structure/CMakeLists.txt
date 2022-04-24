add_executable(Structure_main src/main.c)

set(targets)
list(APPEND targets Structure_main)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
