To compile with g++ (if you're using Xorg (it may work in Wayland with these dependencies)) use the following command and make sure the necessary dependencies are installed.

g++ cow.cpp ../GLAD/glad.c -Wall -O3  --std=c++17 -o ../../build/debug/CowGaveBirthBro -I../../includes/GLAD -I../../includes/GLFW -I../../includes -L../../libs -l:libglfw3.a -lGL -lX11 -lpthread -lXrandr -lXi -ldl