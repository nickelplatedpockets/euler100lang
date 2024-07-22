#include <vector>
#include <iostream>
#include <fstream>

class Program
{
	private:
		std::string fname;
		std::ifstream *ifile;

	public:
		Program(std::string filename) { fname = filename; ifile = new std::ifstream(fname, std::ios::in); }
		bool is_open(void) { return ifile->is_open(); }
		~Program(void)	{ ifile->close(); delete ifile; }
		int char_seek(int n, char c);
};

/* Stack is implemented as vector to make rotation easier */
class Stack 
{
	private:
		std::vector<int> *data;
		Program *prog = NULL;
	public:
		Stack(Program* p_prog)	{ prog = p_prog; data = new std::vector<int>; }
		~Stack()		{ delete data; }

		void push(int a){ data->push_back(a); }
		int pop(void) 	{ int b = data->back(); data->pop_back(); return b; }
		int add(void)	{ int b = (pop() + pop()); push(b); return b; }
		int mult(void)	{ int b = (pop() * pop()); push(b); return b; }
		void dupl(void) { push(data->back()); }
		/* e.g. [1, 2, 3, 4] => [4, 1, 2, 3] */
		void rotdn(void){ int b = pop(); data->insert(data->begin(), b); }
		/* e.g. [1, 2, 3, 4] => [2, 3, 4, 1] */	
		void rotup(void){ int b = data->front(); data->erase(data->begin()); push(b); }
		/* Convert character to integer */
		void read(void)	{ char b; std::cin >> b; push((int)b); }
		void swap(void) { char a = pop(); char b = pop(); push(a); push(b); }
		void cmp(void)	{ char a = pop(); char b = pop(); push((a < b) ? 0 : 1); }
		void jmp(void)	{ } 
		void print(void){ for (int& e : (*data)) { std::cout << e << " "; } std::cout << std::endl; }
};

int Program::char_seek(int num_chars, char exp_char)
{
	int count = -1;
	char c;

	if (!ifile->is_open()) return -1;

	while (ifile->get(c))
	{
		if (c == exp_char) count++;
		if (count == num_chars) break;
	}

	if ((c == std::char_traits<char>::eof()) && (count != num_chars))
	{
		ifile->seekg(0, ifile->beg);
		count = -1;
	}

	return count;
}

int main(void)
{
	Program* p_prog = new Program("./program.1p");
	if (!p_prog->is_open()) 
	{
		return -1;
	}

	Stack* p_stack = new Stack(p_prog);

	// TODO:
	// 1) Write a loop to read in the program char and interpret it into a 1+ command.

	delete p_stack;
	delete p_prog;
}
