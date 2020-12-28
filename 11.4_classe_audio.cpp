#include<iostream>

using namespace std;

class Audio_quality{
    float _sample_rate,  _bits_per_sample;
    int _channels;

    public:
        Audio_quality(float sample_rate, int channels, float bits_per_sample){
            _sample_rate= sample_rate;
            _channels = channels;
            _bits_per_sample = bits_per_sample;
        }
    
    float byte_rate()
    {
        float byte_rate;
        float block_align = _channels * _bits_per_sample/8;
        byte_rate = block_align * -_sample_rate;
        return abs(byte_rate);
    }

    float audio_size(int durata)
    {
        float audio_size;
        audio_size=byte_rate()*durata;
        return audio_size;
    }
};

int main(){
    int durata, minuti, secondi;
    float sample_rate, channels, bits_per_sample;
    float byte_rate, audio_size;
    cout<<"Sample rate: ";
    cin>>sample_rate;
    cout<<"Channels: ";
    cin>>channels;
    cout<<"Bits per sample: ";
    cin>> bits_per_sample;

    auto audio_quality = Audio_quality(sample_rate, channels, bits_per_sample);
    cout << "Byte rate: "<<audio_quality.byte_rate()<<endl;

    do{
        cout<<"minuti: ";
        cin>>minuti;
        if (minuti>=0)
        {    
            cout<<"secondi: ";
            cin>>secondi;
            durata = minuti*60+secondi;
            cout<<"Audio size:" << audio_quality.audio_size(durata)<<endl;
        }
    }while(minuti>=0);
}