#include <iostream>

#include "lib/ECS/include/entity.hpp"
#include "lib/Application/include/Application.hpp"

int main() {
    Application app;
    ApplicationData data={.Name="App",.WindowHeight=480,.WindowWidth=640};
    app.Init(data);
    app.Run();
    return 0;
}