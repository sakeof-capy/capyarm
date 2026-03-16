include(FetchContent)

FetchContent_Declare(
  capydi
  GIT_REPOSITORY  https://github.com/sakeof-capy/capydi.git
  GIT_TAG         main
  GIT_SHALLOW     TRUE
  GIT_PROGRESS    TRUE
)

FetchContent_Declare(
  cpp_httplib
  GIT_REPOSITORY  https://github.com/yhirose/cpp-httplib.git
  GIT_TAG         v0.38.0
  GIT_SHALLOW     TRUE
  GIT_PROGRESS    TRUE
)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
  GIT_TAG         v3.13.0
  GIT_SHALLOW     TRUE
  GIT_PROGRESS    TRUE
)

FetchContent_MakeAvailable(capydi cpp_httplib Catch2)
