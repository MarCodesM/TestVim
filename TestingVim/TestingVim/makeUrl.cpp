#include <iostream>
#include <string>

std::string urlfyIt(std::string url)
{
    int start;
    std::string urlEdit;
    int stringSize = url.size();
    
    for(int i = 0; i < stringSize; i++)
    {
        if(url[i] == '.' && url[i + 1] != 'c')
        {
            start = i;
        }
    }
    
    
    urlEdit = url.substr(start + 1, stringSize);
    return urlEdit; 
}
int main()
{
    std::cout << "Enter URL: ";
    std::string userString;
    std::cin >> userString;  
    //testcommet

    std::cout << "\n" << urlfyIt(userString) << std::endl; 

    
}
