#include <stdio.h>
#include <stdlib.h>

/*
Read the image file to an array, don't change
array: the 1D array stores the flattened image matrix read from the file
*/
void read_image(int image[])
{
    FILE *in = fopen("surprise.dat", "rb");
    int count = 0;
    unsigned char b = fgetc(in);
    while (!feof(in))
    {
        image[count] = b;
        b = fgetc(in);
        count++;
    }
    fclose(in);
}

/*
Print the flattened image matrix
image: an array stores the flattened image in ROW MAJOR FASHION.
height: height of the image
width: width of the image

Conversion Rule:
print ' ' if the pixel value of at coordinate i,j is smaller than 85;
print 'I' if the pixel value of at coordinate i,j is bigger than 85 but smaller than 170;
print 'M' Otherwise;
*/
void image2char(int image[], int Height, int Width)
{
    // TODO: Write your code here.
    for (int i = 0; i < Height; i++) {
        for (int j = 0; j < Width; j++) {
            int pixel_value = image[i * Width + j];
            if (pixel_value < 85) {
                printf(" ");
            } else if (pixel_value < 170) {
                printf("I");
            } else {
                printf("M");
            }
        }
        printf("\n");
    }

}

void main()
{
    int HEIGHT = 45; 
    int WIDTH = 44;
    // TODO: declare an int array called `image` with length HEIGHT * WIDTH in the HEAP MEMORY. 
    // DON'T declare the array using STACK MEMORY
    int *image = (int *)malloc(HEIGHT * WIDTH * sizeof(int));

    printf("Reading 2D image matrix...");
    // TODO: uncomment the following line
    read_image(image);

    printf("done!. \n\nPlotting the image...\n");
    // TODO: uncomment the following line
    image2char(image, HEIGHT, WIDTH);

    // TODO: release the heap memory you just allocated.
    free(image);

    printf("done! \n");
}