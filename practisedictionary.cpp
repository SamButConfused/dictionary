#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include <cstdlib>

int main() {
    std::map<std::string, std::string> dictionary;
    dictionary["tenet"] = "ilke";
    dictionary["disparate"] = "farklı";
    dictionary["absolute"] = "mutlak"
    dictionary["prey"] = "kurban";
    // Daha fazla kelime eklemek için dictionary map'ini genişletebilirsiniz.

    srand(time(0)); // Rastgelelik için zamanı kullan

    while (true) {
        // Rastgele bir kelime seçme
        int randomIndex = rand() % dictionary.size();
        auto it = dictionary.begin();
        std::advance(it, randomIndex);

        std::string randomWord = it->first;
        std::string translation = it->second;

        std::string userTranslation;
        
        // Kullanıcıdan kelimenin Türkçe çevirisini isteme
        std::cout << "İngilizce kelime: " << randomWord << std::endl;
        std::cout << "Türkçe çevirisi: ";
        std::cin >> userTranslation;

        // Cevabı kontrol et
        if (userTranslation == translation) {
            std::cout << "Sen bi harikasın !" << std::endl;
        } else {
            std::cout << "Üzgünüm, yanlış cevap. Doğru cevap: " << translation << std::endl;
        }

        std::cout << "Devam etmek istiyor musun dostum? (E/H): ";
        char choice;
        std::cin >> choice;

        if (choice != 'E' && choice != 'e') {
            break;
        }
    }

    return 0;
}cd
