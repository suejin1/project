# /led_logic/CMakeLists.txt

# 정적 라이브러리 logic을 만든다.
add_library(interval STATIC interval.cc)
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(interval PUBLIC ${CMAKE_SOURCE_DIR})

# 해당 라이브러리를 컴파일 할 옵션
target_link_libraries(interval PRIVATE pthread)