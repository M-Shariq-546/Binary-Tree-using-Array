#include<iostream>
using namespace std;
class tree
{
    private:
        const int size = 10;
        int arr[];
        public:
            //Array initializes
            void initialize()
            {
                for(int i=0 ; i<size ; i++)
                {
                    arr[i] = -9999;
                }
            }
            bool isFull()
            {
                for(int i=0 ; i<size ; i++)
                {
                    if(arr[i] == -9999)
                    {
                        return false;
                    }
                }
                return true;
            }
            void insertAtStart(int x)
            {
                if(arr[0] == -9999)
                {
                    arr[0] = x;
                }
                else{
                    for(int i=0 ; i<size ; i++)
                    {
                        arr[i+1] = arr[i];
                    }
                    arr[0] = x;
                }
            }
            void getFirstElement()
            {
                cout<<arr[0]<<endl;
                for(int i=0 ; i<size ; i++)
                {
                    arr[i] = arr[i+1];
                }
            }        
            void getLeftElement(int pos)
            {
                cout<<arr[(pos * 2) + 1]<<endl;
            }
            void getRightElement(int pos)
            {
                cout<<arr[(pos * 2) + 2]<<endl;
            }
};
int main()
{
    tree t;
    t.insertAtStart(15);
    t.insertAtStart(26);
    t.insertAtStart(36);
    t.insertAtStart(46);
    t.insertAtStart(56);
    t.insertAtStart(76);
    t.insertAtStart(86);
    t.insertAtStart(96);
    t.insertAtStart(106);
    // t.getFirstElement();
    // t.getFirstElement();
    t.getLeftElement(0);
    t.getRightElement(2);
}
