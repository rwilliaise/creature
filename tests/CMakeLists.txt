
create_test_sourcelist(creature_test_sources
    creature_tests.c
    hello_world.c)

add_executable(creature_tests ${creature_test_sources})
target_link_libraries(creature_tests PRIVATE creature)

set(test_list ${creature_test_sources})
remove(test_list creature_tests.c)

foreach(test ${test_list})
    get_filename_component(name ${test} NAME_WE)
    add_test(NAME ${name} COMMAND creature_tests ${name})
endforeach()
