add_executable(Judge-main src/main.c)

set(targets)
list(APPEND targets Judge-main)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
