# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\zmagannia_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\zmagannia_autogen.dir\\ParseCache.txt"
  "zmagannia_autogen"
  )
endif()
