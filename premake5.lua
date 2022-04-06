--premake5.lua(!!!!WIP!!!) use g++ instead

workspace "CowGaveBirth"
    project "CowGaveBirthBro"

        kind "ConsoleApp"
        language {"C","C++"}
        location "./build/premakefiles"

        defines {"Wall","--std=c++17","-O3"}

        files  {"./src/CORE/cow.cpp","./src/GLAD/glad.c"}
            

        includedirs {"./includes/GLAD","./includes/GLFW","./includes"}

        links {
            "./libs/libglfw3",
            "/usr/lib64/X11",
            "/usr/lib64/GL",
            "/usr/lib64/pthread",
            "/usr/lib64/Xrandr",
            "/usr/lib64/Xi",
            "/usr/lib64/dl"
        }

        targetname "Cow"
        targetdir "./build/debug"