# include <stdio.h>

void ana_veri(const char* data)
{
    printf("Ana dugumden %s verisini gonder.\n",data);
}
void kullanici_dugum(const char* data)
{
    printf("Kullanici %s verisini aldi.",data);
}
int main()
{
    const char* data = "Hello world";
    ana_veri(data);
    kullanici_dugum(data);
    return 0;
}