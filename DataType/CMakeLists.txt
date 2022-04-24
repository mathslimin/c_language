add_executable(DataType_FloatingPoint src/FloatingPoint.c)
add_executable(DataType_StoreSize src/StoreSize.c)

set(targets)
list(APPEND targets DataType_FloatingPoint)
list(APPEND targets DataType_StoreSize)
foreach(target_name ${targets})
install(TARGETS ${target_name}
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
        )
endforeach()
