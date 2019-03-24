//a tv as an object

#include <iostream>

using namespace std;

class TV
{
public:
	int channel;
	int volumeLevel; //default volume is 1
	bool on; //default is off
	
	TV()//defaults
	{
		channel = 1;
		volumeLevel = 1;
		on = false;
	}
	
	//turn on
	void turnOn()
	{
		on = true;
	}
	
	//turn off
	void turnOff()
	{
		on = false;
	}
	
	//new channel
	void setChannel(int newChannel)
	{
		if(on && newChannel >= 1 && newChannel <=120)
		channel = newChannel;
	}
	
	//new volume
	void setVolume(int newVolume)
	{
		if (on && newVolume >= 1 && newVolume <= 7)
		volumeLevel = newVolume;
	}
	
	//channel up
	void channelUp()
	{
		if (on && channel < 120)
		channel++;
	}
	
	//channel down
	void channelDown()
	{
		if (on && channel > 1)
		channel--;
	}
	
	//volume up
	void volumeUp()
	{
		if (on && volumeLevel < 7)
		volumeLevel++;
	}
	
	//volume down
	void volumeDown()
	{
		if (on && volumeLevel > 1)
		channel--;
	}
};

int main ()
{
	TV tv1;
	tv1.turnOn();
	tv1.setChannel(30);
	tv1.setVolume(3);
	
	
	TV tv2;
	tv2.turnOn();s
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();
	
	
	
	cout << "tv1's channel is " << tv1.channel << " and the volume level is " << tv1.volumeLevel << endl;
	cout << "tv2's channel is " << tv2.channel << " and the volume level is " << tv2.volumeLevel << endl;
	
	return 0;
}
