//     B L O O D  B A N K  M A N A G E M E N T  S Y S T E M

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int k = 1, l = 1;

class hospital
{
public:
    int HPID : char contactno[10];
    char rhesius;
    char type;
    void h_register()
    {
        HPID = k;
        cout << "\nEnter Contact Number: ";
        cin >> contactno;
        cout << "\nYour HPID is: " << HPID << endl;
    }
    void payment_check()
    {
        char ch;
        cout << "Has payment been made?(Y/N)";
        cin >> ch;
        if (ch == 'Y')
        {
            cout << "Transaction completed! ";
        }
        else
        {
            cout << "Transaction is incomplete ";
        }
    }
};

class donor
{
public:
    int fitness;
    char name[10];
    char contact[10];
    int DNR;
    char r;
    char t;

    void d_register()
    {
        char str[2];
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Contact Number: ";
        cin >> contact;
        cout << "Enter your Fitness state.";
        cout << "Press 1 for FIT";
        cout << "Press 2 for UNFIT ";
        cin >> fitness;

        while (1)
        {
            cout << "\n Enter Type: ";
            cin >> str;
            if (strcmp(str, "AB") == 0 || strcmp(str, "ab") == 0)
            {
                t = 'x';
                break;
            }
            else if (strcmp(str, "A") == 0 || strcmp(str, "B") == 0 || strcmp(str, "o") == 0 || strcmp(str, "a") == 0 || strcmp(str, "b") == 0 ||)
            {
                t = str[0];
                break;
            }
            else
            {
                cout << "\nInvalid Type!";
            }

            while (1)
            {
                cout << "\nEnter Rhesius(+/-):";
                cin >> r;
                if (r == '+' || r == '-')
                    break;
                else
                {
                    cout << "Invalid rhesius(+/-)";
                }
            }
            DNR = 1;
            cout << "Your DNR is: " << DNR;
        }
        void d_updation()
        {
            int choice;
            cout << "Enter choice:\n1) Update Fitness\n2) Update Contact Number";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\nEnter new Fitness state: ";
                cin >> fitness;
                break;
            case 2:
                cout << "\nEnter contact number: ";
                cin >> contact;
                break;
            default:
                cout << "\nInvalid input! ";
            }
        }
    }
};

class blooodpacket
{
public:
    char t_1;
    char r_1;
    int expiry;
};

class bloodbank
{
public:
    int z = 0, x = 0, c = 0, v = 0, w = 0, n = 0, m = 0, q = 0;
    int username;
    int password;
    class donoor d[5];
    class hospital h[5];
    class bloodpacket b[24];
    bloodbank(int a, int b)
    {
        username = a;
        password = b;
    }
    int authenticate()
    {
        int y, z;
        cout << "Enter username :- ";
        cin >> y;
        cout << "Enter password :- ";
        cin >> z;
        int x;
        if (y == username && z == password)
        {
            x = 2;
            return x;
        }
        else
        {
            return 0;
        }
        void b_register()
        {
            d[1].d_register();
            l = l + 1;
        }
        void update()
        {
            int r;
            cout << "Enter DNR: ";
            cin >> r;
            if (r >= 1)
            {
                cout << "DNR does not exist ";
                return;
            }
            else
                d[r].d_updation();
        }
        void h_registration()
        {
            h[k].h_register();
            k = k + 1;
        }
        void accept()
        {
            int hid, flag = 0, i;
            char req_t, req_r;
            cout << "Enter HPID: ";
            cin >> hid;
            if (hid >= k)
            {
                cout << "Enter valid HPID\n";
                return;
            }
            cout << "Enter required blood type: ";
            cin >> req_t;
            cout << "Enter required rhesisus type(+/-): ";
            cin >> req_r;
            switch (req_t)
            {
            case 'A':
                if (req_r == '+')
                {
                    for (i = 0; i < 3; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 300;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else
                {
                    for (i = 3; i < 6; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 1000;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
            case 'B':
                if (req_r == '+')
                {
                    for (i = 6; i < 9; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 400;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = '0';
                            break;
                        }
                    }
                }
                else
                {
                    for (i = 9; i < 12; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 800;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;
            case 'o':
                if (req_r == '+')
                {
                    for (i = 12; i < 15; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 300;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                else
                {
                    for (i = 15; i < 18; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 2000;
                            b[i].t_1 = '0';
                            b[i].r_1 = '0';
                            b[i].expiry = 0;
                            break;
                        }
                    }
                }
                break;

            case 'X':
                if (req_r == '+')
                {
                    for (i = 18; i < 21; i++)
                    {
                        if (b[i].expiry > 2024)
                        {
                            flag = 500;
                            b[i].t_1 = '0';
                        }
                        b[i].r_1 = '0';
                    }
                    b[i].expiry = 0;
                    break;
                }
            }
        }
    }

    else
    {
        for (i = 21; i < 24; i++)
        {
            if (b[i].expiry > 2024)
            {
                flag = 2000;
                b[i].t_1 = '0';
                b[i].r_1 = '0';
                b[i].expiry = 0;
                break;
            }
        }
    }
    break;
default:
    break;
} if (flag != 0)
{
    cout << "Cost of the required Blood Packet is: " << flag;
    h[hid].payment_check();
}
else
{
    cout << "Required Blood Packet not available";
}

void donate()
{
    int a, i;
    cout << "Enter DNR: ";
    cin >> a;
    if (a >= 1)
    {
        cout << "Enter valid DNR\n";
        return;
    }
    if (d[a].fitness == 0)
    {
        cout << "Person is UNIFT to donate\n";
        return;
    }
    char t, r;
    t = d[a].t;
    r = d[a].r;
    switch (t)
    {
    case 'A':
        if (r == '+')
        {
            for (i = 0; i < 3; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry: ";
                    cin >> b[i].expiry;
                    z++;
                    break;
                }
            }
        }
        else
        {
            for (i = 3; i < 6; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry: ";
                    cin >> b[i].expiry;
                    v++;
                    break;
                }
            }
        }
        break;
    case 'o':
        if (r == '+')
        {
            for (i = 12; i < 15; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry: ";
                    cin >> b[i].expiry;
                    w++;
                    break;
                }
            }
        }
        else
        {
            for (i = 15; i < 18; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry";
                    n++;
                    break;
                }
            }
        }
        break;
    case 'x':
        if (r == '+')
        {
            for (i = 18; i < 21; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry: ";
                    cin >> b[i].expiry;
                    m++;
                    break;
                }
            }
        }
        else
        {
            for (i = 21; i < 24; i++)
            {
                if (b[i].expiry < 2024)
                {
                    b[i].t_1 = d[a].t;
                    b[i].r_1 = d[a].r;
                    cout << "Enter expiry: ";
                    cin >> b[i].expiry;
                    q++;
                    break;
                }
            }
        }
        break;
    default:
        break;
    }
    cout << b[i].expiry;
}
void show()
{
    cout << "BLOOD BANK DETAILS\n";
    cout << "Available Blood Packets: \n";
    cout << "Total Blood packets available" << z + x + c + v + W + n + m + q;
    cout << "\n A+     :" << z;
    cout << "\n A-     :" << x;
    cout << "\n B+     :" << c;
    cout << "\n B-     :" << v;
    cout << "\n o+     :" << w;
    cout << "\n o-     :" << n;
    cout << "\n Ab+     :" << m;
    cout << "\n AB-     :" << q;
}
}
;

int main()
{
    cout << "B L O O D  B A N K ";

    int ch,
        count = 0;
    class bloodbank b(123, 123);
    while (count < 3)
    {
        if (b.authenticate() == 0)
        {
            cout << "\nInavlid Access";
            count++;
        }
        else
            break;

        if (count == 3)
        {
            cout << "Invalid access attempted beyond 3 times, existing";
            return 1;
        }

        while (1)
        {
            cout << "\nEnter choice";
            cout << "\n 1) Add Donor  2) Update Donor  3) Add Hospital  4) Donate  5) Request Blood  6) Display available blood packets";
            cin >> ch;
            switch (ch)
            {
            case 1:
                b.b_register();
                break;

            case 2:
                b.update();
                break;
            case 3:
                b.h_registration();
                break;
            case 4:
                b.donate();
                break;
            case 5:
                b.accept();
                break;
            case 6:
                b.show();
                break;
            case 7:
                return 0;

            default:
                cout << "\nInvalid Entry!";
            }
        }
    }
    return 0;
}
