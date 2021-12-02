#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    std::cout << "Current path is " << fs::current_path() << std::endl;
    fs::current_path(fs::temp_directory_path());
    std::cout << "Current path is " << fs::current_path() << std::endl;

    return 0;
}

// ...
// ...
