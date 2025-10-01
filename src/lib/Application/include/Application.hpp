#include <raylib.h>
#include <string>

struct ApplicationData
{
    std::string Name;
    uint32_t WindowWidth;
    uint32_t WindowHeight;
};

class Application
{
public:
    Application();
    ~Application();

    Application(const Application&) = delete;
    Application& operator=(const Application&)=delete;

    void Run();
    bool Init(const ApplicationData& data);
private:
 ApplicationData m_AppData;
};