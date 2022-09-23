#include "color.h"
#include "vec3.h"

#include <iostream>

int main()
{
    int image_height = 256;
    int image_width = 256;

    std::cout << "P3\n"
              << image_height << ' ' << image_width << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j)
    {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i)
        {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.25;

            write_color(std::cout, color{r, g, b});
        }
    }

    std::cerr << "\nDone.\n";
}