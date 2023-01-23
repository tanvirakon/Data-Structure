#include<bits/stdc++.h>
using namespace std;
#define n 4
//complete
class queuee
{
    int arr[n];
    int frontt, rear;
public:
    queuee()
    {
        frontt = 0; //quue te -1 ble kisu nai, n-1 r por theke 0 theke start hy
        rear = 0;
    }

    void enqueue(int a)
    {
        if (rear == n - 1)
        {

            if (frontt == 0) //jdi last element hoy & front 1st element e thake thaole quque full
            {
                cout << "\tfull" << endl;
            }
            else
            {
                rear = 0; //if queue full na hoy..samne space ase (but piche nai as rear = n-1) so abr 1st element theke start so rear = 0 set

                arr[rear] = a;
                cout << "front " << frontt << " rear " << rear << endl;
            }
        }
        else //rear last node e nai so piche jayga ase
        {
            if (rear + 1 == frontt)  cout << "\tfull" << endl;
            else arr[++rear] = a; //index barie value input r kaj ekhane hcce
            cout << "front " << frontt << " rear " << rear << endl;
        }
    }

//front e kno value thake na
    void dequee()
    {
        if (rear == frontt) cout << "\tempty" << endl;
        else
        {
            if (frontt == n - 1) //front hlo reserve,front e kno value nai... tai dequeue chaple actually front r porer ta dlt hbe
            {
                frontt = 0; //last e front tkle , dlt hbe ekdom samner ta
                cout << "dequed " << arr[frontt] << endl;
                cout << "front " << frontt << " rear " << rear << endl;
            }
            else
            {
                frontt = frontt + 1;
                cout << "dequed " << arr[frontt] << endl;
                cout << "front " << frontt << " rear " << rear << endl;
            }

        }
    }

    void displayy()
    {
        cout << "front " << frontt << " rear " << rear << endl;
        if (frontt == rear) cout << "\tempty" << endl;
        else if (frontt == n - 1)
        {
            int p = 0; //front tai p...front likhle pore onno jaygay value change hye jay
            for (int i = p; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else if (frontt > rear) //jhkn rear 1bar puro array ghure .. front r age ase
        {
            //print krte hbe 2 dhap e
            for (int i = frontt + 1; i <= n - 1; i++) //front r porer onsho tuk print
            {
                cout << arr[i] << " ";
            }
            int k = rear;
            for (int i = 0; i <= k; i++) //ebr 0 theke rear prjnto print.....
            {
                cout << arr[i] << " ";
            }
            //pura array print hye gelo

        }
        else
        {
            for (int i = frontt + 1; i <= rear; i++) //niormal display
            {
                cout << arr[i] << " ";

            }
        }
    }

};

int main()
{
    int x;
    queuee qq;
    while (1)
    {
        int ch;
        cout << "\n********* Menu ********" << endl;
        cout << "1. Enqueue \n2. Dequeue \n3. Display \n4. Exit\n";
        cout << "enter your choise" << endl;
        cin >> ch;
        if (ch == 4) break;
        else
        {
            switch (ch)
            {
            case 1:
            {
                cout << "enter value to enqueue" << endl;
                cin >> x;
                qq.enqueue(x);
            }
            break;
            case 2:
                qq.dequee();
                break;
            case 3:
                qq.displayy();
                break;
            }


        }
    }
}
