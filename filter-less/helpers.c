#include "helpers.h"
#include <math.h>

// Convert image to grayscale
// rgbtBlue;
// rgbtGreen;
// rgbtRed;
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float media;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            media = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);

            image[i][j].rgbtBlue = media;
            image[i][j].rgbtGreen = media;
            image[i][j].rgbtRed = media;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int blue = image[i][j].rgbtBlue;
            int green = image[i][j].rgbtGreen;
            int red = image[i][j].rgbtRed;

            image[i][j].rgbtBlue = round(.131 * blue + .534 * green + .272 * red);
            if (image[i][j].rgbtBlue > 255)
            {
                image[i][j].rgbtBlue = 255;
            }

            image[i][j].rgbtGreen = round(.168 * blue + .686 * green + .349 * red);
            if (image[i][j].rgbtGreen > 255)
            {
                image[i][j].rgbtGreen = 255;
            }

            image[i][j].rgbtRed = round(.189 * blue + .769 * green + .393 * red);
            if (image[i][j].rgbtRed > 255)
            {
                image[i][j].rgbtRed = 255;
            }

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
