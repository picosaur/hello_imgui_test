#include <hello_imgui/hello_imgui.h>

int main(int, char *[])
{
    HelloImGui::Run([] { ImGui::Text("Hello, world!"); }, "Hello!", true);
    return 0;
}
