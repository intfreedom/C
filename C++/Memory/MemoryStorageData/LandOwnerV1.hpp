#ifndef LANDOWNERV1_H
#define LANDOWNERV1_H
#include <iostream>

using namespace std;
/* .hpp inline */

class LandOwnerV1
{
	private:
		string name;
		long score;
		int cards[20];
	public:
		LandOwnerV1(){}
		~LandOwnerV1(){}
		inline void TouchCard(int cardCount)
		{
			cout << name << "Get" << cardCount << endl;
		}
		void ShowScore(){
			cout<<name<<"the score is: "<<score<<endl;
		}
};

#endif //LANDOWNERV1_H
