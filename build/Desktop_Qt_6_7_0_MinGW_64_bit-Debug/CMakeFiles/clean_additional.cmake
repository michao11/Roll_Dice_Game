# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\roll-game_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\roll-game_autogen.dir\\ParseCache.txt"
  "roll-game_autogen"
  )
endif()
