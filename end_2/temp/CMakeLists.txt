# /led_logic/CMakeLists.txt

# 정적 라이브러리 func을 만든다.
add_library(temp STATIC tempfunc.cc)
# 해당 라이브러리 컴파일 시 사용할 헤더파일 경로
target_include_directories(temp PUBLIC ../includes)

# 해당 라이브러리를 컴파일 할 옵션
target_link_libraries(temp PRIVATE pthread)