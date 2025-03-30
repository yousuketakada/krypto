add_executable(krypto)
add_executable(krypto_test)

target_link_libraries(krypto)
target_link_libraries(krypto_test GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(krypto_test)

target_sources(
    krypto
    PRIVATE
        krypto.cpp
)

target_sources(
    krypto_test
    PRIVATE
        krypto_test.cpp
)
