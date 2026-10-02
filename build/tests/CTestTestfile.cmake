# CMake generated Testfile for 
# Source directory: /home/macewindu/ai-dev/KateAI/tests
# Build directory: /home/macewindu/ai-dev/KateAI/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_sandbox]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_sandbox")
set_tests_properties([=[test_sandbox]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;4;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;7;kateai_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_permissions]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_permissions")
set_tests_properties([=[test_permissions]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;4;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;8;kateai_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_llmparse]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_llmparse")
set_tests_properties([=[test_llmparse]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;4;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;9;kateai_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_session]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_session")
set_tests_properties([=[test_session]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;4;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;10;kateai_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_retry]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_retry")
set_tests_properties([=[test_retry]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;4;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;11;kateai_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_tools]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_tools" "-platform" "offscreen")
set_tests_properties([=[test_tools]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;15;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
add_test([=[test_promptedit]=] "/home/macewindu/ai-dev/KateAI/build/bin/test_promptedit" "-platform" "offscreen")
set_tests_properties([=[test_promptedit]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;19;add_test;/home/macewindu/ai-dev/KateAI/tests/CMakeLists.txt;0;")
