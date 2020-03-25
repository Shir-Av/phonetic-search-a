#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <iostream>
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "i am wRiTing iN CAPITAL lETTERS aNd I LiKE It";
    CHECK(find(text, "am") == string("am"));
    CHECK(find(text, "writing") == string("wRiTing"));
    CHECK(find(text, "in") == string("iN"));
    CHECK(find(text, "capital") == string("CAPITAL"));
    CHECK(find(text, "letters") == string("lETTERS"));
    CHECK(find(text, "and") == string("aNd"));
    CHECK(find(text, "like") == string("LiKE"));
    CHECK(find(text, "CAPITAL") == string("CAPITAL"));
    CHECK(find(text, "it") == string("It"));
    CHECK(find(text, "i") == string("i"));
    try {
                CHECK(find(text, "letter") == string("lETTERS"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    
}

   


TEST_CASE("Test replacement of v and w") {
    string text = "She had wicious vishes that the worst vould happen to the wersed men";
    CHECK(find(text, "vicious") == string("wicious"));
    CHECK(find(text, "wishes") == string("vishes"));
    CHECK(find(text, "worst") == string("worst"));
    CHECK(find(text, "would") == string("vould"));
    CHECK(find(text, "versed") == string("wersed"));
    CHECK(find(text, "she") == string("She"));
    CHECK(find(text, "the") == string("the"));
    CHECK(find(text, "that") == string("that"));
    CHECK(find(text, "men") == string("men"));
    CHECK(find(text, "happen") == string("happen"));
    try {
                CHECK(find(text, "man") == string("men"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}


TEST_CASE("Test replacement of p,b,f") {
    string text = "Fen's perry's make beanut futter petter than Biona's fried pickles ";
    CHECK(find(text, "Ben's") == string("Fen's"));
    CHECK(find(text, "berry's") == string("perry's"));
    CHECK(find(text, "peanut") == string("beanut"));
    CHECK(find(text, "butter") == string("futter"));
    CHECK(find(text, "better") == string("petter"));
    CHECK(find(text, "Fiona's") == string("Biona's"));
    CHECK(find(text, "fried") == string("fried"));
    CHECK(find(text, "pickles") == string("pickles"));
    CHECK(find(text, "make") == string("make"));
    CHECK(find(text, "than") == string("than"));
    try {
                CHECK(find(text, "frie") == string("fried"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}

TEST_CASE("Test replacement of g and j") {
    string text = "Gean, Joan, Jeorge and Jerald gudjed jenerally a great jame.";
    CHECK(find(text, "Jean") == string("Gean"));
    CHECK(find(text, "Joan") == string("Joan"));
    CHECK(find(text, "George") == string("Jeorge"));
    CHECK(find(text, "Gerald") == string("Jerald"));
    CHECK(find(text, "judged") == string("guajed"));
    CHECK(find(text, "generally") == string("jenerally"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(text, "a") == string("a"));
    CHECK(find(text, "great") == string("great"));
    CHECK(find(text, "game") == string("jame"));
    try {
                CHECK(find(text, "games") == string("jame"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
}

TEST_CASE("Test replacement of c,k,q") {
    string text = "Qobi's cookqies kuality is quite oc but my qake is exkellent";
    CHECK(find(text, "Kobi's") == string("Qobi's"));
    CHECK(find(text, "coockies") == string("cookqies"));
    CHECK(find(text, "quality") == string("kuality"));
    CHECK(find(text, "quite") == string("quite"));
    CHECK(find(text, "ok") == string("oc"));
    CHECK(find(text, "cake") == string("qake"));
    CHECK(find(text, "excellent") == string("exkellent"));
    CHECK(find(text, "but") == string("but"));
    CHECK(find(text, "my") == string("my"));
    CHECK(find(text, "is") == string("is"));
    try {
                CHECK(find(text, "coockie") == string("cookqies"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    
}

TEST_CASE("Test replacement of s and z") {
    string text = "Zusi zaw a sebra at the soo and Ziv saw a mouze";
    CHECK(find(text, "Suzi") == string("Zusi"));
    CHECK(find(text, "saw") == string("zaw"));
    CHECK(find(text, "zebra") == string("sebra"));
    CHECK(find(text, "at") == string("at"));
    CHECK(find(text, "zoo") == string("soo"));
    CHECK(find(text, "Ziv") == string("Ziv"));
    CHECK(find(text, "saw") == string("saw"));
    CHECK(find(text, "mouse") == string("mouze"));
    CHECK(find(text, "the") == string("the"));
    CHECK(find(text, "and") == string("and"));
    try {
                CHECK(find(text, "see") == string("saw"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    
}

TEST_CASE("Test replacement of t and d") {
    string text = "Tani dolt me dhat dhe toor is closet bud it wasn't";
    CHECK(find(text, "Dani") == string("Tani"));
    CHECK(find(text, "told") == string("dolt"));
    CHECK(find(text, "me") == string("me"));
    CHECK(find(text, "that") == string("dhat"));
    CHECK(find(text, "the") == string("dhe"));
    CHECK(find(text, "door") == string("toor"));
    CHECK(find(text, "closed") == string("closet"));
    CHECK(find(text, "but") == string("bud"));
    CHECK(find(text, "it") == string("it"));
    CHECK(find(text, "wasn't") == string("wasn't"));
    try {
                CHECK(find(text, "close") == string("closet"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }
    
}

TEST_CASE("Test replacement of o and u") {
    string text = "the son will cume oot tumurrow but fur now the muun is up";
    CHECK(find(text, "sun") == string("son"));
    CHECK(find(text, "come") == string("cume"));
    CHECK(find(text, "out") == string("oot"));
    CHECK(find(text, "tumorrow") == string("tumurrow"));
    CHECK(find(text, "but") == string("but"));
    CHECK(find(text, "for") == string("fur"));
    CHECK(find(text, "now") == string("now"));
    CHECK(find(text, "moon") == string("muun"));
    CHECK(find(text, "up") == string("up"));
    CHECK(find(text, "the") == string("the"));
   try {
                CHECK(find(text, "came") == string("cume"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }


}

TEST_CASE("Test replacement of i and y") {
    string text = "mylk and wine are absoluteli mi favoryte drinks since y can drynk";
    CHECK(find(text, "milk") == string("mylk"));
    CHECK(find(text, "wine") == string("wine"));
    CHECK(find(text, "absolutly") == string("absoluteli"));
    CHECK(find(text, "my") == string("mi"));
    CHECK(find(text, "favorite") == string("favoryte "));
    CHECK(find(text, "drinks") == string("drinks"));
    CHECK(find(text, "since") == string("since"));
    CHECK(find(text, "i") == string("y"));
    CHECK(find(text, "drink") == string("drynk"));
    CHECK(find(text, "and") == string("and"));
    CHECK(find(text, "are") == string("are"));
    try {
                CHECK(find(text, "drunk") == string("drynk"));
                CHECK(find(text, "could") == string("can"));
    }
    catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;
    }


    
}

