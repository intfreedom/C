#ifndef LANDOWNERV3_H
#define LANDOWNERV3_H
#include <iostream>

using namespace std;

class LandOwnerV3
{
	public:
		LandOwnerV3();
		virtual ~LandOwnerV3();

		long Getscore() {return _score;}
		void Setscore(long val)
		{
			if(val < 0) _score = 0;
			_score = val;
		}
		string Getname() {return _name;}
		void Setname(string name){_name = name;}
		
	protected:
	
	private:
		long _score;
		string _name;
		int cards[20];



};

#endif //LANDOWNERV3_H
