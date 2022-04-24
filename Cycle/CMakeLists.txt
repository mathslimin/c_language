add_executable(Cycle_main src/main.c)

set(targets)
list(APPEND targets Cycle_main)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
