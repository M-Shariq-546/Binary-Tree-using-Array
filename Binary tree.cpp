#include<iostream>
using namespace std;
class tree
{
    private:
        const int size = 10;
        char arr[];
        public:
            //Array initializes
            void initialize()
            {
                for(int i=0 ; i<size ; i++)
                {
                    arr[i] = '\0';
                }
            }
            bool isEmpty()
            {
                for(int i=0 ; i<size ; i++)
                {
                    if(arr[i] == '\0')
                    {
                        return true;
                    }
                }
                return false;
            }
            int insertRoot(char x)
            {
                if(arr[0] != '\0')
                {
                    cout<<"This root is already created";
                }
                else{
                    arr[0] = x;
                }
                return 0;
            }
            int setLeftElement(int pos , char x)
            {
                if(arr[pos] == '\0')
                {
                    cout<<(pos *2 ) + 1<<"Can't set as child"<<endl;
                }
                else{
                    arr[(pos * 2 ) + 1] = x;
                }
                return 0;
            }
            int setRightElement(int pos , char x)
            {
                if(arr[pos] == '\0')
                {
                    cout<<(pos *2 ) + 2<<"Can't set as child"<<endl;
                }
                else{
                    arr[(pos * 2 ) + 2] = x;
                }
                return 0;
            }
            int print_tree() 
            {  
              cout << "\n";
              for (int i = 0; i < 10; i++) {
                if (arr[i] != '\0')
                  cout << arr[i];
                else
                  cout << "->";
              }
              return 0;
            }
};
int main()
{
    tree t;
    t.insertRoot('7');
    t.setLeftElement(0 , '8');
    t.setRightElement(0 , '4');
    t.setRightElement(1 , '5');
    t.setRightElement(1 , '9');
    t.setRightElement(2 , '2');
    t.setRightElement(2 , '3');
    t.print_tree();
}
