cmake_minimum_required (VERSION 2.8)
project (Rpp_test)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
find_package(OpenCV REQUIRED )

include_directories (${OpenCV_INCLUDE_DIRS})
include_directories (/opt/rocm/opencl/include/)
include_directories (/opt/rocm/include)
include_directories (/opt/rocm/rpp/include)
link_directories    (/opt/rocm/lib)
link_directories    (/opt/rocm/rpp/lib/)

add_executable(BatchPD_ocl BatchPD_ocl.cpp)
add_executable(BatchPD_ocl_pkd3 BatchPD_ocl_pkd3.cpp)
add_executable(Single_ocl Single_ocl.cpp)

set(COMPILER_FOR_HIP /opt/rocm/bin/hipcc)

set(CMAKE_CXX_COMPILER ${COMPILER_FOR_OCL})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DOCL_COMPILE=1 -DRPP_BACKEND_OPENCL=1 ")

target_link_libraries(BatchPD_ocl ${OpenCV_LIBS} -I/opt/rocm/rpp/include -L/opt/rocm/rpp/lib/ -lamd_rpp -L/opt/rocm/opencl/lib/x86_64/ -lOpenCL pthread  -lboost_filesystem -lboost_system )
target_link_libraries(BatchPD_ocl_pkd3 ${OpenCV_LIBS} -I/opt/rocm/rpp/include -L/opt/rocm/rpp/lib/ -lamd_rpp -L/opt/rocm/opencl/lib/x86_64/ -lOpenCL pthread  -lboost_filesystem -lboost_system )
target_link_libraries(Single_ocl ${OpenCV_LIBS} -I/opt/rocm/rpp/include -L/opt/rocm/rpp/lib/ -lamd_rpp -L/opt/rocm/opencl/lib/x86_64/ -lOpenCL pthread  -lboost_filesystem -lboost_system )
