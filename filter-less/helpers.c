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
            image[i][j].rgbtBlue = round(.131 * image[i][j].rgbtBlue + .534 * image[i][j].rgbtGreen + .272 * image[i][j].rgbtRed);
            if (image[i][j].rgbtBlue > 255)
            {
                image[i].rgbtBlue = 255;
            }

            image[i][j].rgbtGreen = round(.168 * image[i][j].rgbtBlue + .686 * image[i][j].rgbtGreen + .349 * image[i][j].rgbtRed);
            if (image[i][j].rgbtGreen > 255)
            {
                image[i].rgbtGreen = 255;
            }

            image[i][j].rgbtRed = round(.189 * image[i][j].rgbtBlue + .769 * image[i][j].rgbtGreen + .393 * image[i][j].rgbtRed);
            if (image[i][j].rgbtRed > 255)
            {
                image[i].rgbtRed = 255;
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
