#include <iostream> // דßÊָֹ ַבֵֿ־ַב זַבֵ־ַּׁ

using namespace std;

int main() {
    // ו׀ַ ֱּׂ בדÊÛםַׁÊ char םַ ױֿםÞם¡ ה״ָÚ Ýםו ַבֽֿ ַבֳֿהל זַבֽֿ ַבֳÞױל בהזÚ char
    cout << "הזÚ char:" << endl;
    cout << "דה " << static_cast<int>(-(1 << (sizeof(char) * 8 - 1))) << " ֵבל "
        << static_cast<int>((1 << (sizeof(char) * 8 - 1)) - 1) << endl;
    cout << "---------------------------------" << endl;

    // ַבֲה ההÊÞב בבהזÚ short זהֽ׃ָ Þםדו ַבֿהםַ זַבÚבםַ
    cout << "הזÚ short:" << endl;
    cout << "דה " << -(1 << (sizeof(short) * 8 - 1)) << " ֵבל "
        << (1 << (sizeof(short) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // והַ Úהֿהַ ַבהזÚ int¡ ַבבם וז ַבהזÚ ַבֳ׃ַ׃ם בבֳÚַֿֿ ַבױֽםֹֽ
    cout << "הזÚ int:" << endl;
    cout << "דה " << -(1 << (sizeof(int) * 8 - 1)) << " ֵבל "
        << (1 << (sizeof(int) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // ָÚֿםה ָהװזÝ הזÚ long¡ ÞםדÊו Êßזה ֳßָׁ װזם דה int
    cout << "הזÚ long:" << endl;
    cout << "דה " << -(1L << (sizeof(long) * 8 - 1)) << " ֵבל "
        << (1L << (sizeof(long) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // הזÚ long long¡ ַבבם םÚ״םß דֿל ֳז׃Ú בבֳÚַֿֿ
    cout << "הזÚ long long:" << endl;
    cout << "דה " << -(1LL << (sizeof(long long) * 8 - 1)) << " ֵבל "
        << (1LL << (sizeof(long long) * 8 - 1)) - 1 << endl;
    cout << "---------------------------------" << endl;

    // והַ הזÚ unsigned int¡ ָֿזה ֳÚַֿֿ ׃ַבָֹ ÝÞ״ דה ױÝׁ בבֳÚבל
    cout << "הזÚ unsigned int:" << endl;
    cout << "דה 0 ֵבל " << ((1UL << (sizeof(unsigned int) * 8)) - 1) << endl;
    cout << "---------------------------------" << endl;

    // זַֿÚַנ םַ ױֿםÞם ַבÚׂםׂ
    cout << "\nGoodbye!" << endl;

    // ASCII ÊזÞםÚם ָהוַםֹ ַבßזֿ¡ װזÝ ßםÝ ֽ״םÊו ָÝה   
    cout << R"(
 _   _       _       
| \ | | __ | | ___ 
|  \| |/ _` | __/ _ \
| |\  | (_| | ||  __/
|| \|\,|\\|
    )" << endl;

    return 0; // הוַםֹ ַבָׁהַדּ¡ ׃בַד!
}