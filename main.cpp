#include <iostream>
#include <string>
using namespace std;

// Function to encrypt a message using Caesar Cipher
string encryptMessage(string message, int shift) {
    string encrypted = "";
    for (char c : message) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            c = (c - offset + shift) % 26 + offset;
        }
        encrypted += c;
    }
    return encrypted;
}

// Function to decrypt the message
string decryptMessage(string message, int shift) {
    string decrypted = "";
    for (char c : message) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            c = (c - offset - shift + 26) % 26 + offset;
        }
        decrypted += c;
    }
    return decrypted;
}

class Gayatri {
public:
    bool followsDiet;
    bool isOverthinker;
    bool hasTightSchedule;
    string beauty;
    string kindness;
    string hardWork;
    string favoriteTech;
    
    Gayatri() {
        followsDiet = false;
        isOverthinker = true;
        hasTightSchedule = true;
        beauty = "immense";
        kindness = "infinite";
        hardWork = "legendary";
        favoriteTech = "gRPC";
    }

    void displayAttributes() {
        cout << "To Gayatri 🤧" << endl;
        cout << "Beauty: " << beauty << endl;
        cout << "Kindness: " << kindness << endl;
        cout << "Hard Work: " << hardWork << endl;
        cout << "Tech Buzzword: " << favoriteTech << " (Seriously, is there anything else? 😂)" << endl;
        cout << "Diet Discipline: " << (followsDiet ? "On point" : "Non-existent 😂") << endl;
        cout << "Overthinking Level: " << (isOverthinker ? "Over 9000! 🤯" : "Under control") << endl;
        cout << "Schedule: " << (hasTightSchedule ? "Tighter than a while(true) loop! ⏰" : "Flexible") << endl;
        cout << "Me Time (Meditation/Gym): " << (hasTightSchedule ? "Almost as rare as a bug-free code! 🧘‍♀️🏋️" : "Balanced") << endl;
    }

    void receiveWishes() {
        // Encrypted messages using Caesar Cipher with shift of 3
        string encryptedWishes[] = {
            "Kdssb Ydohqwlqh'v Gdb, Jdbdwul! ❤️",
            "Mxvw olnh dq lqilqlwh orrs, pb ihholqjv iru brx zloo qhyhu hqg.",
            "Brx vdb L sxw lq wrr pxfk hiiruw, exw L wklqn mxvw kdylqj brx eb pb vlgh lv pb juhdwhvw uhzdug.",
            "Hyhq li jUS nhhsb brx exvc, dqg brx eduhob ilqg wlph iru brxuvhoi,",
            "uhphpehu wkdw brx dbozdvb kdyh wlph uhvhuyhg lq pb khduw. 💖",
            "Dqg grq'w zruub derxw vnlsblqj phdov, ehfdxvh brx'uh wkh pdlq frxuvh ri pb olih! 😂",
            "Nhhs frglqj, nhhs vplolqj, dqg nhhs ryhuwklqnlqj (exw qrw wrr pxfk)! 😜"
        };

        cout << "\n--- Decrypted Wishes ---" << endl;
        for (string msg : encryptedWishes) {
            cout << decryptMessage(msg, 3) << endl;
        }
    }
};

int main() {
    Gayatri g;
    g.displayAttributes();
    g.receiveWishes();
    return 0;
}
