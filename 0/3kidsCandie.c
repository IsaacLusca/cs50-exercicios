
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // tera um array de candies que cada criança possui
    // tera um extraCandie que sera somado para cada criança

}



bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // Alocar memória para o array de resultados
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));

    // Encontrar o número máximo de balas entre as crianças
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }

    // Verificar para cada criança se ela terá a maior quantidade de balas
    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maxCandies);
    }

    // Definir o tamanho do array de retorno
    *returnSize = candiesSize;
    return result;
}
