#include <iostream>
using namespace std;
void computeDailyExtremes(int temps[][4], int dailyMax[], int dailyMin[])
{
    for (int i = 0; i < 7; i++)
    {
        int maxVal = temps[i][0];
        int minVal = temps[i][0];

        for (int j = 1; j < 4; j++)
        { if (temps[i][j] > maxVal)
                maxVal = temps[i][j];

            if (temps[i][j] < minVal)
                minVal = temps[i][j];
        }
 dailyMax[i] = maxVal;
        dailyMin[i] = minVal;
    }
}

int hottestDay(int dailyMax[])
{
    int k = 0;
    for (int i = 1; i < 7; i++)
    {
        if (dailyMax[i] > dailyMax[k])
            k = i;
    }
    return k;
}
int coldestDay(int dailyMin[])
{
    int l = 0;
    for (int i = 1; i < 7; i++)
    {
        if (dailyMin[i] < dailyMin[l])
            l = i;
    }
    return l;
}

void printWeeklySummary(int dailyMax[], int dailyMin[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Day " << i + 1 << "  Max: " << dailyMax[i]
            << ", Min: " << dailyMin[i] << endl;
    }
}
int main()
{
    int temps[7][4] = {
        {18,25,20,15},
        {19,27,22,16},
        {17,24,19,14},
        {20,28,23,17},
        {21,29,24,18},
        {16,22,18,13},
        {18,26,21,15}
    };
 int dailyMax[7];
    int dailyMin[7];
 computeDailyExtremes(temps, dailyMax, dailyMin);

    int h = hottestDay(dailyMax);
    int c = coldestDay(dailyMin);
 printWeeklySummary(dailyMax, dailyMin);
 cout << "\nHottest Day: Day " << h + 1 << " (" << dailyMax[h] << "°C)" << endl;
    cout << "Coldest Day: Day " << c + 1 << " (" << dailyMin[c] << "°C)" << endl;

    return 0;
}
