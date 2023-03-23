
# TODO: cuda & other backends on flag?
# TODO: auto-compilation of OpenCL kernels on clang?

include(../../cmake/Resources.cmake)

find_package(OpenCL REQUIRED)
target_link_libraries(creature PRIVATE OpenCL::OpenCL)

compile_resources(opencl_kernels
	cl/vector.cl
	cl/matrix.cl)
target_sources(creature PRIVATE 
    ${opencl_kernels}
    cl/cl.c)

