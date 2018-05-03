#ifndef Compteur_h
#define Compteur_h


class Compteur
{
	public:
		Compteur(int min = 0 , int max = 0);
		void run(int key);
		
		int index(void);
		void setIndex(int index);
		
		bool isSelect(void);
		void setSelect(bool value = true);
		
	private:
		int	_index;
		bool _isSelect;
		
		int	_min;
		int _max;
};
#endif
