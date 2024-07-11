int isEmptyString(const char *str) {
    // Check if the string is NULL or the first character is '\0'
    if(str == NULL || *str == '\0')
    {   return 1;
}
    else
    {
        return -1;
     }
}

int containsString(const char *str) {
     int sum = 0;
    char* token;
    char* rest = (char*)str;
    // Split the input string by ","
    while ((token = strtok_r(rest, "\n ,", &rest))) {
        sum += atoi(token); // Convert token to integer and add to sum
    }
     return sum;
    // Check if the string is exactly "1,2"
  /*  if (strcmp(str, "1,2") == 0) {
        return 1; // Return 1 if string is "1,2"
    } else {
        return 0; // Return 0 if string is not "1,2"
    }*/
}
int add(const char* input){
    // Check if the string is NULL or the first character is '\0'
/*   if(isEmptyString(input))
    {
   return 0;
}*/
   // else{
int result = containsString(input);
return result;
  //  }
return -1;
}
