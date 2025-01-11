#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/vietanh/catkin_ws/src/onrobot22/onrobot_vg_modbus_tcp"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/vietanh/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/vietanh/catkin_ws/install/lib/python3/dist-packages:/home/vietanh/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/vietanh/catkin_ws/build" \
    "/usr/bin/python3" \
    "/home/vietanh/catkin_ws/src/onrobot22/onrobot_vg_modbus_tcp/setup.py" \
    egg_info --egg-base /home/vietanh/catkin_ws/build/onrobot22/onrobot_vg_modbus_tcp \
    build --build-base "/home/vietanh/catkin_ws/build/onrobot22/onrobot_vg_modbus_tcp" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/vietanh/catkin_ws/install" --install-scripts="/home/vietanh/catkin_ws/install/bin"
