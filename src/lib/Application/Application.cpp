#include "include/Application.hpp"

Application::Application()
{

}

Application::~Application()
{
    CloseWindow();
}

bool Application::Init(const ApplicationData& data)
{
    m_AppData.Name=data.Name;
    m_AppData.WindowHeight=data.WindowHeight;
    m_AppData.WindowWidth=data.WindowWidth;

    InitWindow(m_AppData.WindowWidth,  m_AppData.WindowHeight,m_AppData.Name.c_str());
    SetTargetFPS(60);

    return true;
}

void Application::Run()
{
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello from raylib!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
}