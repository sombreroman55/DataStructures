#include "../src/SLLqueue.h"

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
    SLLqueue<int> queueeroni;
    SLLqueue<tclass> tts;
    try
    {
        queueeroni.push(3);
        std::cout << queueeroni.front() << std::endl;
        queueeroni.push(4);
        queueeroni.push(7);
        std::cout << queueeroni.front() << std::endl;
        queueeroni.pop();
        std::cout << queueeroni.front() << std::endl;
        queueeroni.pop(); 
        queueeroni.pop();
        std::cout << queueeroni.size() << std::endl;
        std::cout << queueeroni.empty() << std::endl;
        tclass b("turd", 4);
        tclass c("curd", 7);
        tclass d("durd", 9);
        tts.push(b);
        tts.push(c);
        tts.push(d);
        std::cout << tts.size() << std::endl;
        tclass t = tts.front();
        std::cout << t.getButt() << std::endl;
        std::cout << t.getDiam() << std::endl;
        tts.pop();
        tts.pop();
        tts.pop();
        tts.pop();
    }
    catch (QueueException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
