#ifndef Compteur_h
#define Compteur_h

#define YEAR  	  0
#define MONTH     1
#define DAY		  2

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

class CompteurBool
{
	public:
		CompteurBool(bool value = false);
		void	start(bool value = false);
		void	run(int key);
		bool	value(void);
		bool	isSelect(void);
	private:		
		bool	_value;	
		bool	_isSelect;
};

class CompteurDate
{
	public:
		CompteurDate(int annee = 2017, int mois = 1, int jour = 1);
		void	start(int annee = 2017, int mois = 1, int jour = 1);
		void	run(int key);
		int		annee(void);
		int		mois(void);
		int		jour(void);
		bool	isSelect(void);
		int		selected(void);
	private:
		int		_annee;
		int		_mois;
		int		_jour;
		bool	_isSelect;
		int		_selected;
};

class CompteurFloat
{
	public:
		CompteurFloat(float value = 0);
		void	start(float value = 0);
		void	run(int key);
		float	value(void);
		int		entier(void);
		int		decimal(void);
		bool	isSelect(void);
		bool	selected(void);
	private:		
		int		_entier;
		int		_decimal;
		bool	_isSelect;		
		bool	_selected;
};

class CompteurHeure
{
	public:
		CompteurHeure(int time = 0);
		void	start(int time = 0);
		void	run(int key);
		int		time(void);
		int		heure(void);
		int		minute(void);
		bool	isSelect(void);
		bool	selected(void);
	private:		
		int		_heure;
		int		_minute;
		bool	_isSelect;		
		bool	_selected;
};

class CompteurInt
{
	public:
		CompteurInt(int min = 0, int max = 100);
		void	start(int value = 0);
		void	run(int key);
		int		value(void);
		bool	isSelect(void);
	private:		
		int		_value;	
		bool	_isSelect;
		int		_min;
		int		_max;
};

class CompteurSeconde
{
	public:
		CompteurSeconde(unsigned long value = 0);
		void	start(unsigned long value = 0);
		void	run(int key);
		unsigned long seconde(void);
		bool	isSelect(void);
		int		increment(void);
	private:
		unsigned long _seconde;
		bool	_isSelect;
		int		_increment;
};

#endif
