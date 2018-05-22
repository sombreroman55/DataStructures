#include "../src/SLLstack.h"

class tclass
{
    private:
        std::string tt;
        int diameter;
    public:
        tclass() : tt("tt"), diameter(0) { }
        tclass(std::string s, int d) : tt(s), diameter(d) { }
        std::string getButt() { return tt; }
        int getDiam() { return diameter; }
};

int main (int argc, char** argv)
{
    SLLstack<int> stackeroni;
    SLLstack<tclass> tts;
    try
    {
        stackeroni.push(3);
        std::cout << stackeroni.top() << std::endl;
        stackeroni.push(4);
        stackeroni.push(7);
        std::cout << stackeroni.top() << std::endl;
        stackeroni.pop();
        std::cout << stackeroni.top() << std::endl;
        stackeroni.pop(); 
        stackeroni.pop();
        std::cout << stackeroni.size() << std::endl;
        std::cout << stackeroni.empty() << std::endl;
        tclass b("turd", 4);
        tclass c("curd", 7);
        tclass d("durd", 9);
        tts.push(b);
        tts.push(c);
        tts.push(d);
        std::cout << tts.size() << std::endl;
        tclass t = tts.top();
        std::cout << t.getButt() << std::endl;
        std::cout << t.getDiam() << std::endl;
        tts.pop();
        tts.pop();
        tts.pop();
        tts.pop();
    }
    catch (StackException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
