macro(create_test_for PROBLEM_NAME)
  make_simple_test("Problems" ${PROBLEM_NAME} test_${PROBLEM_NAME} OFF
      ../../Problems/${PROBLEM_NAME}/src/${PROBLEM_NAME}.cpp)

  target_include_directories(${TESTTARGET} PUBLIC ../../Problems/${PROBLEM_NAME}/include)

  configure_file(../GroundTruth/${PROBLEM_NAME}.in ${PROBLEM_NAME}.in COPYONLY)
  configure_file(../GroundTruth/${PROBLEM_NAME}.out ${PROBLEM_NAME}.out COPYONLY)
endmacro()

create_test_for(Sample)
create_test_for(Subtraction)
create_test_for(Gears)
create_test_for(Traffic)
