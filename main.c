#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//API

void rand_array(int n, int x[], int min, int max);
void rand_array_float(float n, float x[], float min, float max);
void print_array(int a, int x[], char label[]);
float get_ave(int a, int x[]);
int get_sum(int n, int x[]);
int get_count(int n, int x[], int min, int max);
int get_max(int n, int x[]);
int get_values_in_range(int n, int in[], int out[], int min, int max);

//function definition
void rand_array(int n, int x[], int min, int max)
{
    for(int i = 0;i<n;i++)
    {
        x[i]=min+rand()% (max-min+1);
    }
}

void rand_array_float(float n, float x[], float min, float max)
{
    for(int i = 0;i<n;i++)
    {
        x[i]=min + rand() % (max - min + 1);
    }
}

void print_array(int n, int x[], char label[])
{
    printf("\n %s", label[]);

    for(int i=0;i<n;i++)
    {
        printf("%d ", x[i]);
    }
}

int get_sum(int n, int x[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + x[i];
    }
    return(sum);
}

float get_ave(int n, int x[])
{
    int sum;
    int ave;

    sum=get_sum(n, x);
    ave = (float) sum / n;

    return(ave);
}





int main()
{
    srand(time(NULL));
    //famous loops to memorize
    // 1. sequence generation
    // create an array of random integers between a min and max

    int n=20;
    int grades[20];
    int min=70;
    int max=100;

    for(int i = 0;i<n;i++)
    {
        grades[i]=min+rand()% (max-min+1);
    }

    //2. printing array

    printf("\ngrades: ");

    for(int i=0;i<n;i++)
    {
        printf("%d ", grades[i]);
    }

    //3. sum
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+grades[i];
    }

    float avg =(float) sum / n;

    printf("ave:%f ", avg);

    //4. counting
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if (grades[i]>=90)
            count++;
    }
    printf("\ncount:%d :", count);

    //5. maximum
    int maximum = grades[0];
    for(int i=0;i<n;i++)
    {
        if (grades[i]>=maximum)
            maximum = grades[i];
    }
    printf("\nmaximum:%d :", maximum);

    //6. subarray
    int evencount = 0;
    int oddcount = 0;

    int even[15];
    int odd[15];
    for(int i=0;i<n;i++)
    {
        if (grades[i] % 2 == 0)
        {
            even[evencount]=grades[i];  //issue was idk there was 2 counts
            evencount++;
        }
        else
        {
            odd[oddcount]=grades[i];
            oddcount++;
        }
    }


    printf("\nEven: ");
    for(int i=0;i<evencount;i++)
    {
        printf("%d ", even[i]);
    }

    return 0;
}
