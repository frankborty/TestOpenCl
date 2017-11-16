set(MODULE src)

include_directories(${TRACKING-ITSU_SOURCE_DIR}/include)

if(TRACKINGITSU_TARGET_DEVICE STREQUAL OPEN_CL)
  LIST(APPEND SRCS
    CA/opencl/Context.cpp
    CA/opencl/Utils.cpp
  )
configure_file(CA/opencl/kernel/fillIndexTables.cl ${CMAKE_CURRENT_BINARY_DIR}/kernel/fillIndexTables.cl COPYONLY)
  include_directories( ${OPENCL_INCLUDE_DIRS} ${TRACKING-ITSU_SOURCE_DIR}/src/opencl/kernel)

endif(TRACKINGITSU_TARGET_DEVICE STREQUAL OPEN_CL)

	add_library(${MODULE} ${SRCS})
endif(TRACKINGITSU_TARGET_DEVICE STREQUAL GPU_CUDA)
