execute_process(COMMAND "/home/vietanh/catkin_ws/build/onrobot/onrobot_vg_modbus_tcp/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/vietanh/catkin_ws/build/onrobot/onrobot_vg_modbus_tcp/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
