#include <stdio.h>
#include <stdlib.h>

/*
Read the image file to an array, don't change
image: output, the 1D array stores the flattened image matrix.
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
Print a flattened image array. 
image: an array stores the flattened image.
Height: the height of the image.
Width: the width of the image.
*/
void image2char(int image[], int Height, int Width)
{
    // TODO: Write your code here.
    for(int i = 0; i < Height; i++){
        for(int j = 0; j < Width; j++){
            if( image[i*Width + j] < 85){
                printf(" ");
            }
            else if(image[i*Width + j] <170){
                printf("I");
            }else{
                printf("M");
            }
        }
        printf("\n");
    }
}

void main()
{
    // declare an int array called `image` with length HEIGHT * WIDTH. 
    printf("Reading 2D image matrix...");
    int image[45 * 44];
    read_image(image);

    printf("done!. \n\nPlotting the image...\n");
    image2char(image, 45, 44);

    printf("done! \n");
}