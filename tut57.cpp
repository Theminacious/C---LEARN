#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title = s;
        rating = r;
    }
    virtual void display(){

    }

};

class CWHVideo: public CWH{
    int videoLength;
    public:
    CWHVideo(string s,float r,int vL):CWH(s,r){
        videoLength = vL;
    }
    void display(){
       cout<< "This is an amazing video with title "<< title<<endl;
       cout<< "Rating: "<< rating<<" out of 5 stars" <<endl;
       cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText: public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc):CWH(s,r){
        words = wc;
    }
     void display(){
       cout<< "This is an amazing video with title "<< title<<endl;
       cout<< "Rating of this text tutorial :  "<< rating<<" out of 5 stars" <<endl;
       cout<<"No if words in this text tutorial is : "<<words<<" minutes"<<endl;
        }
};

int main(){
    string title;
    float rating , vlen;
    int words;

    // for code with harry video
    title = " Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title,rating , vlen);
    // djvideo.display();

    // for code with harry text
    title = " Django tutorial Text";
    words = 433;
    rating = 4.89;
    CWHText djtext(title, rating, words);
    //djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();




return 0;
}

// rules for virtual 