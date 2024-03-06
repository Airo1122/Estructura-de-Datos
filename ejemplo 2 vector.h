#define MAX 10
class Vector

{
	private:
		int vec[MAX];
		int n;
	public:
		Vector();
		~Vector();
		void set_n(int _n);
		int get_n();

		void cargarVector(int _n, int _vec[]);
		int mostrarVector(int _vec[]);
		void ordenarVector(int _vec[], int _vec2[]);
		int promedio(int _vec[], int _n);

};

