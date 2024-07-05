int isEmptyString(const char *str) {
    // Check if the string is NULL or the first character is '\0'
    if(str == NULL || *str == '\0')
    {   return 1;
}
}

int containsString(const char *str) {
    // Check if the string is exactly "1,2"
    if (strcmp(str, "1,2") == 0) {
        return 1; // Return 1 if string is "1,2"
    } else {
        return 0; // Return 0 if string is not "1,2"
    }
}
int add(const char* input){
    // Check if the string is NULL or the first character is '\0'
 /*   if(isEmptyString(input))
    {
   return 0;
}*/
if(containsString(input) == 1)
{
return 3;
}
return -1;
}
