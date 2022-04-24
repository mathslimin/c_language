add_executable(Enumerate-week src/week.c)

set(targets)
list(APPEND targets Enumerate-week)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
