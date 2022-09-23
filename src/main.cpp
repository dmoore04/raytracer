#include <iostream>

int main()
{
    int image_height = 256;
    int image_width = 256;

    std::cout << "P3\n"
              << image_height << ' ' << image_width << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j)
    {
        for (int i = 0; i < image_width; ++i)
        {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.25;

            const auto MAX_COLOR = 255.999;

            int ir = static_cast<int>(MAX_COLOR * r);
            int ig = static_cast<int>(MAX_COLOR * g);
            int ib = static_cast<int>(MAX_COLOR * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}