
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // tera um array de candies que cada criança possui
    // tera um extraCandie que sera somado para cada criança
    for (int i = 0; i < candies[i]; i++)
    {
        if ((candies[i] + extraCandies) > candiesSize)
        {
            returnSize[i] = true;
        }
        else
        {
            returnSize[i] = false;
        }
    }
    return returnSize;
}
