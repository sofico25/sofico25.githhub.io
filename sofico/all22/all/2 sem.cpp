 //название стоимость и наличие штук. Вывести сумму штук самых дорогих препаратов
//#include <iostream>
//using namespace std;
//struct preparat
//{
//    char name;
//    int price, shtuk;
//};
//int main()
//{
//    int n;
//    cin>>n;
//    preparat *a= new preparat[n];
//    for(int i=0; i<n; i++)
//    {
//        cin>>a[i].name>>a[i].price>>a[i].shtuk;
//    }
//    int max=0;
//    for(int i=0; i<n; i++)
//    {
//        if(a[i].price>max)
//            max=a[i].price;
//    }
//    int s=0;
//    for(int i=0; i<n; i++)
//    {
//        if(a[i].price==max)
//            s+=a[i].shtuk;
//    }
//    cout<<s;
// 
//}

//Дана структура, состоящая из номера школы, выделенного бюджета на год в рублях, потраченных средств за год. Отсортировать по убыванию остатка бюджета. (хоар)
//
//#include <iostream>
//using namespace std;
//struct school
//{
//    int number, money, potrat;
//};
//void Sort(school *a, int k)
//{
//    school temp;
//    for(int i = k-1; i>0; i--)
//        for(int j=0; j<i; i++)
//        {
//            if(a[j].money>a[j+1].money)
//                temp=a[j+1]; a[j+1]=a[j]; a[j]=temp;
//        }
//}
//int main()
//{
//    int n; cin>>n;
//    school *a = new school[n];
//    for(int i=0; i<n; i++)
//    {
//        cin>>a[i].number>>a[i].money>>a[i].potrat;
//    }
//    Sort(a,n);
//    for(int i=0; i<n; i++)
//    {
//        cout<<" "<<a[i].number<<" "<<a[i].money<<" "<<a[i].potrat<<endl;
//    }
//
//}

//удалить отрицательные элементы
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//int main()
//{
//    list* head, *p;
//    int x;
//    head = new list;
//    cin>>x;
//    head->info = x;
//    head->next = nullptr;
//    p=head;
//    cin>>x;
//    while(x)
//    {
//        list *r = new list;
//        r->info = x;
//        r->next = nullptr;
//        p->next = r;
//        p = r;
//        cin >> x;
//    }
//    while(head!=nullptr && head->info<0 )
//    {
//        list* temp=head;
//        head = head->next;
//        delete temp;
//    }
//    p = head;
//    while (p!=nullptr && p->next != nullptr)
//    {
//        if (p->next->info < 0)
//        {
//         list* r = p->next;
//         p->next = p->next->next;
//         delete r;
//        }
//        else
//         p = p -> next;
//    }
//    p = head;
//    while (p != nullptr)
//    {
//        cout << p->info << " ";
//        p = p->next;
//    }
//}

//ввести двунаправленный список и вывести его с конца
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* last;
//};
//int main()
//{
//    int x;
//    cin>>x;
//    list *head, *p = nullptr, *r=nullptr;
//    head = nullptr;
//    
//    if(x)
//    {
//        head = new list;
//        head->info = x;
//        head->last = nullptr;
//        head->next = nullptr;
//        cin>>x;
//        list * p = head;
//        
//        while(x)
//        {
//            list* r = new list;
//            r->info = x;
//            r->next = nullptr;
//            r->last = p;
//            p->next = r;
//            p=r;
//            cin>>x;
//        }
//    }
//    p= head;
//    while(p)
//    {
//        list *q = p;
//        cout<<p->info;
//        p=p->last;
//        delete q;
//    }
//}

//сформировать двунаправленный список найти количество неповторяющихся подряд четных элементов
//66 11 454 - 4 и 4 не повторяются - 2 эл-та
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//    list* last;
//};
//int main()
//{
//    int x;
//    cin>>x;
//    list *head,  *p, *r;
//    head = nullptr;
//    head = new list;
//    if(x)
//    {
//        if(x)
//        {
//            head->info = x;
//            head->next = head;
//            head->last = head;
//        }
//        cin>>x;
//        p=head;
//        while(x)
//        {
//            r = new list;
//            r->info = x;
//            r->next = head;
//            r->last = p;
//            p->next = r;
//            p = r;
//            cin>>x;
//        }
//        head->last = p;
//        p->next = head;
//    }
//    p = head;
//    bool f= true;
//    while(p->next!=head)
//    {
//        if(p->info!=p->next->info)
//        {
//            f=false;
//        }
//        p=p->next;
//    }
//    int chet=0;
//    if(f)
//    {
//        p = head;
//        while(p->next!=head)
//        {
//            if(p->info%2==0)
//            {
//                chet++;
//            }
//            p=p->next;
//        }
//    }
//    cout<<chet;
//}


//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list *next;
//};
//int main()
//{
//    list* head, *p, *r;
//    int *a,n;
//    cin>>n;
//    a=new int[n];
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    head=new list;
//    p=head;
//    bool f=true;
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]>0)
//            f=false;
//    }
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]>0 && f==false)
//        {
//            r=new list;
//            r->info=a[i];
//            p->next=r;
//            r->next=nullptr;
//            p=r;
//        }
//
//    }
//    r=head;
//    head=head->next;
//    p=head;
//    while(p!=nullptr)
//    {
//        cout<<p->info<<" ";
//        p=p->next;
//    }
//    delete r;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* last;
//    list* next;
//};
//int main()
//{
//    list* head, *p, *r;
//    int *a,n,x,y;
//    cin>>n>>x>>y;
//    a=new int[n];
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    head=new list;
//    p=head;
//    bool f=true;
//    for(int i=0, j=n-1; i<=j; i++, j--)
//    {
//        if(a[i]!=a[j])
//            f=false;
//    }
//    if(f)
//    
//        for(int i=0; i<n; i++)
//        {
//            if(a[i]>=x && a[i]<=y)
//            {
//                r=new list;
//                r->info=a[i];
//                p->next=r;
//                r->next=nullptr;
//                p=r;
//            }
//        }
//    
//    r=head;
//    head=head->next;
//    p=head;
//    delete r;
//    while(p)
//    {
//   
//        cout<<p->info<<" ";
//        p=p->next;
//
//    }
//}


//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* last;
//    list* next;
//};
//int main()
//{
//    list* head, *p, *r;
//    int *a,n,x,y;
//    cin>>n>>x>>y;
//    a=new int[n];
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    head=nullptr;
//    head=new list;
//    p=head;
//    bool f=true;
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]>0)
//            f=false;
//    }
//    if(f)
//    if(x)
//        {
//            if(x)
//            {
//                head->info = x;
//                head->next = head;
//                head->last = head;
//            }
//            cin>>x;
//            p=head;
//            while(x)
//            {
//                r = new list;
//                r->info = x;
//                r->next = head;
//                r->last = p;
//                p->next = r;
//                p = r;
//                cin>>x;
//            }
//            head->last = p;
//            p->next = head;
//        }
//    r=head;
//    head=head->next;
//    p=head;
//    delete r;
//    while(p)
//    {
//   
//        cout<<p->info<<" ";
//        p=p->next;
// 
//    }
//}


//Дан массив. Если он возрастающий, то построить однонаправленный список, состоящий только из простых элементов массива.
//
//#include <iostream>
//using namespace std;
//struct list
//{
//    int info;
//    list* next;
//};
//int main()
//{
//    list* head, *p;
//    int n;
//    cin>>n;
//    head=new list;
//    p=head;
//    int*a=new int[n];
//    for(int i=0; i<n; i++)
//    {
//        cin>>a[i];
//    }
//    bool f=true;
//    for(int i=0; i<n-1; i++)
//    {
//        if(a[i]>a[i+1])
//            f=false;
//    }
//    for(int i=0; i<n; i++)
//    {
//
//    }
//
//}


//1) Сформировать дерево оканчивающееся 0 и найти сумму его четных листьев.
//#include <iostream>
//using namespace std;
//struct tree{
//    int info;
//    tree *l, *r;
//};
//void add(tree *t, int x)
//{
//    tree *r;
//    if(x<t->info)
//    {
//        if(t->l==nullptr)
//        {
//            r=new tree;
//            r->info=x;
//            r->l=nullptr;
//            r->r=nullptr;
//            t->l=r;
//        }
//        else add(t->l,x);
//    }
//    else
//        if(x>t->info)
//        {
//            if(t->r==nullptr)
//            {
//                r=new tree;
//                r->info = x;
//                r->l = nullptr;
//                r->r= nullptr;
//                t->r=r;
//            }
//            else add(t->r,x);
//        }
//}
//int sum(tree *t)
//{
//    if(t==nullptr)
//        return 0;
//    if(t->info%2==0 && t->l==nullptr && t->r==nullptr)
//        return t->info;
//    return sum(t->l) + sum(t->r);
//}
//void print(tree *t)
//{
//    if(t!=nullptr)
//    {
//        cout<<t->info<<" ";
//        print(t->l);
//        print(t->r);
//    }
//}
//int main()
//{
//    int x;
//    cin>>x;
//    tree *t=new tree;
//    t->info = x;
//    t->l = nullptr;
//    t->r = nullptr;
//    while(x)
//    {
//        add(t,x);
//        cin>>x;
//    }
//    print(t);
//    cout<<sum(t);
//}


//2) Сформировать дерево оканчивающееся 0 и увеличить нечетные элементы в 3 раза.
//#include <iostream>
//using namespace std;
//struct tree{
//    int info;
//    tree *l, *r;
//};
//void add(tree *t, int x)
//{
//    tree *r;
//    if(x<t->info)
//    {
//        if(t->l==nullptr)
//        {
//            r=new tree;
//            r->info=x;
//            r->l=nullptr;
//            r->r=nullptr;
//            t->l=r;
//        }
//        else add(t->l,x);
//    }
//    else
//        if(x>t->info)
//        {
//            if(t->r==nullptr)
//            {
//                r=new tree;
//                r->info = x;
//                r->l = nullptr;
//                r->r= nullptr;
//                t->r=r;
//            }
//            else add(t->r,x);
//        }
//}
//void uvel(tree *t)
//{
//    if(t!=nullptr)
//    {
//        if(t->info%2!=0)
//            t->info*=3;
//        uvel(t->l);
//        uvel(t->r);
//    }
//
//}
//void print(tree *t)
//{
//    if(t!=nullptr)
//    {
//        cout<<t->info<<" ";
//        print(t->l);
//        print(t->r);
//    }
//}
//int main()
//{
//    int x;
//    cin>>x;
//    tree *t=new tree;
//    t->info = x;
//    t->l = nullptr;
//    t->r = nullptr;
//    while(x)
//    {
//        add(t,x);
//        cin>>x;
//    }
//    uvel(t);
//    print(t);
//    
//}

//3) Сформировать дерево оканчивающееся 0. Если произведение его листьев меньше заданного Х, то найти кол-во вершин кратных 3
//#include <iostream>
//using namespace std;
//struct tree{
//    int info;
//    tree *l, *r;
//};
//void add(tree *t, int x)
//{
//    tree *r;
//    if(x<t->info)
//    {
//        if(t->l==nullptr)
//        {
//            r=new tree;
//            r->info=x;
//            r->l=nullptr;
//            r->r=nullptr;
//            t->l=r;
//        }
//        else add(t->l,x);
//    }
//    else
//        if(x>t->info)
//        {
//            if(t->r==nullptr)
//            {
//                r=new tree;
//                r->info = x;
//                r->l = nullptr;
//                r->r= nullptr;
//                t->r=r;
//            }
//            else add(t->r,x);
//        }
//}
//void max(tree *t)
//{
//    if(t!=nullptr)
//    {
//        if(t->info%2!=0)
//            t->info*=3;
//        max(t->l);
//        max(t->r);
//    }
//
//}
//void print(tree *t)
//{
//    if(t!=nullptr)
//    {
//        cout<<t->info<<" ";
//        print(t->l);
//        print(t->r);
//    }
//}
//int main()
//{
//    int x;
//    cin>>x;
//    tree *t=new tree;
//    t->info = x;
//    t->l = nullptr;
//    t->r = nullptr;
//    while(x)
//    {
//        add(t,x);
//        cin>>x;
//    }
//    max(t);
//    print(t);
//    
//}



//если максимальный элемент дерева больше введенного пользователем числа, то заменить кратные 3 - этим числом, иначе найтим произведение листьев, которые больше минимума дерева
//#include <iostream>
//using namespace std;
//struct tree
//{
//    int info;
//    tree *l, *r;
//};
//void add(tree *t, int x)
//{
//    tree *r;
//    if(x<t->info)
//    {
//        if(t->l==nullptr)
//        {
//            r=new tree;
//            r->info=x;
//            r->l=nullptr;
//            r->r=nullptr;
//            t->l=r;
//        }
//        else add(t->l,x);
//    }
//    else
//        if(x>t->info)
//        {
//            if(t->r==nullptr)
//            {
//                r=new tree;
//                r->info=x;
//                r->l=nullptr;
//                r->r=nullptr;
//                t->r=r;
//            }
//            else add(t->r,x);
//        }
//}
//int max(tree *t)
//{
//    if (t->r == nullptr)
//    {
//        return t->info;
//    }
//    return max(t->r);
//}
//int min(tree *t)
//{
//    if (t->l == nullptr)
//    {
//        return t->info;
//    }
//    return min(t->l);
//}
//int prozv(tree *t, int min)
//{
//    if(t==nullptr) return 1;
//    if(t->r==nullptr && t->l==nullptr && t->info>min)
//        return t->info;
//    return prozv(t->r, min) * prozv(t->l, min);
//}
//void zamena(tree *t, int max)
//{
//    if(t!=nullptr)
//    {
//        if(t->info%3==0)
//        {
//            t->info=max;
//        }
//        zamena(t->l,max);
//        zamena(t->r,max);
//    }
//    else return;
//}
//void print(tree *t)
//{
//    if(t!=nullptr)
//    {
//        cout<<t->info<<" ";
//        print(t->l);
//        print(t->r);
//    }
//}
//int main()
//{
//    int x, X;
//    cin>>X;
//    cin>>x;
//    tree *t=new tree;
//    t->info = x;
//    t->l = nullptr;
//    t->r = nullptr;
//    cin>>x;
//    while(x)
//    {
//        add(t,x);
//        cin>>x;
//    }
//    int mx=max(t), mn= min(t);
//    if(mx>X)
//    {
//        zamena(t,X);
//        print(t);
//    }
//    else
//        cout<<prozv(t,mn);
//}
//


//дан файл целых чисел. Найти количество чисел, оканчивающихся на 3 или 7
//#include <fstream>
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    ifstream f("/Users/cofa/Desktop/rerf/control/control/text.txt");
//    if(!f.is_open())
//    {
//        cout<<"error";
//        system("pause");
//        return 0;
//    }
//    int count = 0;
//    while(!f.eof())
//    {
//        int n;
//        f>>n;
//        if(n%10==3 || n%10==7)
//            count++;
//        cout<<count<<endl;
//    }
//    f.close();
//    cout<<count;
//    system("pause");
//    return 0;
//}


//найти минимальное положительное число, у которого первая цифра четная, последняя цифра равна сумме остальных цифер, квадрат числа не превышает 50.000
//#include <fstream>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int first_number(int x)
//{
//    int n;
//    for(;x;n=x%10,x/=10);
//    return 0;
//}
//int sum_number(int x)
//{
//    if(x<10)
//        return 0;
//    int sum = 0;
//    int p;
//    p=x%10;
//    x/=10;
//    while(x>0)
//    {
//        sum+=x%10;
//        x/=10;
//    }
//    return sum;
//}
//int main()
//{
//    vector <int> mas;
//    int x;
//    int min=-1;
//    fstream f("/Users/cofa/Desktop/rerf/control/control/text.txt");
//    if(!f.is_open())
//    {
//        cout<<"error";
//        system("pause");
//        return 0;
//    }
//    while(f>>x)
//    {
//        if(x>0 && (x%10 == sum_number(x)) && (x*x<=50000))
//        {
//            if(min==-1 || x<min)
//                min=x;
//        }
//    }
//    f.close();
//    if(min!=-1)
//        cout<<min;
//    system("pause");
//    return 0;
//}
//

//1. Дан набор целых чисел с четным количеством элементов. Заполнить вектор V исходными числами и вывести вначале вторую половину элементов вектора V, а затем первую половину (в каждой половине порядок элементов не изменять).
//#include <iostream>


//дан вектор V и число K. Вставить после К-того элемента значение Х(где Х задачется пользователем)
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n, X, k; cin>>n>>k>>X;
//    vector<int> v(n);
//    for(int i=0; i<n; i++)
//    {
//        int x; cin>>x;
//        v.push_back(x);
//    }
//    for(int i=0; i<v.size(); i++)
//    {
//        if(k==i)
//        {
//            v.insert(v.begin() +i, X);
//            k+=i+1;
//        }
//    }
//    for(int i=0; i<v.size(); i++)
//        cout<<v[i]<<" ";
//}

// дан вектор V. Вставить после каждого положительного элемента значение 0, а перед каждым отрицательным элементом значение -1
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int n; cin>>n;
//    vector<int> v(n);
//    for(int i=0; i<n; i++)
//    {
//        cin>>v[i];
//    }
//    for(int i=0; i<v.size(); i+=2)
//    {
//        if(v[i]>=0)
//            v.insert(v.begin()+i+1,0);
//        else
//            v.insert(v.begin()+i,-1);
//    }
//    for(vector <int>:: iterator it = v.begin(); it<v.end(); it++)
//        cout<<*it<<" ";
//}

//Дан векторы V1, V2 четной длины. Записатт в V1 вторую половину V2 в обратеои порядке, а в V2 - первую половину V1 в исходном порядке
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n, m; cin>>n>>m;
//    vector<int> v1(n);
//    vector<int> v2(m);
//    for(int i=0; i<n; i++)
//        cin>>v1[i];
//    for(int j=0; j<m; j++)
//        cin>>v2[j];
//    for(int j=m-1; j>=0; j--)
//        v1.push_back(v2[j]);
//    
//    
//}


//1. Дана строка s и символ c. Создать новую строку, в которой c будет добавлен в начало и конец строки s.
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;

//int main()
//{
//    string s;
//    char c;
//    getline(cin, s);
//    cin>>c;
//    string n = c+s+c;
//    cout<<n;
//}

//2. Дана строка s. Заменить в ней все символы с нечетным индексом на символ 'X'.
//int main()
//{
//    string s;
//    getline(cin,s);
//    for(int i=1; i<s.length(); i+=2)
//    {
//        s[i]='x';
//    }
//    cout<<s;
//}

//3. Дана строка s и число k. Разделить строку на подстроки длиной k и вывести их на отдельных строках. Если длина исходной строки не кратна k, вывести последнюю подстроку как есть.
//int main()
//{
//    string s;
//    getline(cin,s);
//    int k; cin>>k;
//    for(int i=0; i<s.length(); i+=k)
//    {
//        if(i+k<s.length())
//            cout<<s.substr(i,k)<<endl; //первый символ - с какого начинается подстрока, второй - скок символов
//        else cout<<s.substr(i);
//    }
//}

//4. Дана строка s. Поменять местами первую и последнюю буквы в каждом слове строки. ??????
//int main()
//{
//    string s;
//    getline(cin,s);
//    char tmp;
//    int i=0, end = 0;
//    while(s.find(' ', i)!=-1)
//    {
//        end = s.find(' ', i);
//        tmp=s[i];
//        s[i]=s[end-1];
//        s[end-1]=tmp;
//        i=end+1;
//    }
//    tmp=s[i];
//    s[i]=s[s.size()-1];
//    s[s.size()-1]=tmp;
//    cout<<s;
//}


//5. Даны строки s1, s2 и число k. Вставить строку s2 в строку s1 после k-го символа, а затем вставить s1 в s2 после k-го символа (если это возможно, иначе ничего не вставлять).

//int main()
//{
//    string s1,s2;
//    getline(cin,s1);
//    getline(cin,s2);
//    int k; cin>>k;
//    string w = s1;
//    if(k<s1.size())
//        s1.insert(k,s2); //с к символа вставляем s2
//    if(k<s2.size())
//        s2.insert(k,w);
//    cout<<s1<<"\n"<<s2;
//}

//6.Дана строка s. Перед каждой гласной буквой в строке вставить символ '*'.
//int main()
//{
//    string s;
//    getline(cin,s);
//    string glass="aeyuio";
//    int i=0, j=0;
//    while(s.find_first_of(glass,i))
//    {
//        for(int i=0; i<s.size(); i++)
//        {
//            if(s.find(glass,i))
//            {
//                s.insert(s.begin()+i+1,'*');
//            }
//        }
//    }
//    cout<<s;
//}

//7.Дана строка s. После каждой согласной буквы с нечетным индексом (индексация с 0) добавить символ '#'.

//8.Дана строка s. После каждой согласной буквы с нечетным индексом (индексация с 0) добавить символ '#'.


//1. Дан вектор, найти количество уникальных элементов в нем
//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//int main()
//{
//    vector <int> v;
//    int n, x;
//    cin>>n;
//    for(int i=0; i<n; i++)
//    {
//        cin>>x;
//        v.push_back(x);
//    }
//    set <int> k;
//    for(int i=0; i<v.size(); i++)
//        k.insert(v[i]);
//    cout<<k.size();
//}

//2.Дано множество целых чисел, найти и вывести максимальный и минимальный элементы
// #include <iostream>
// #include <set>

// using namespace std;
// int main()
// {
//    set <int> s;
//    int n, x;
//    cin>>n;
//    for(int i=0; i<n; i++)
//    {
//        cin>>x;
//        s.insert(x);
//    }
//    if(s.empty())
//        cout<<"pusto";
//    int min=*s.begin();
//    int max=*s.rbegin();
//    cout<<"min: "<<min;
//    cout<<"max: "<<max;
// }

//3.Дана последовательность из n натуральных чисел. Вывести в возрастающем порядке все цифры, которые входят хотя бы в одно число
//#include <iostream>
//#include <set>
//
//using namespace std;
//int main()
//{
//    int n; cin>>n;
//    set <int> s;
//    for(int i=0; i<n; i++)
//    {
//        int b; cin>>b;
//        while(b>0)
//        {
//            int k=b%10;
//            s.insert(k);
//            b/=10;
//        }
//    }
//    for(auto it = s.begin(); it!=s.end(); it++)
//        cout<<*it;
//}

//



//удалить отрицательные элементы
// #include <iostream>
// using namespace std;
// struct list
// {
//    int info;
//    list* next;
// };
// int main()
// {
//    list* head, *p;
//    int x;
//    head = new list;
//    cin>>x;
//    head->info = x;
//    head->next = nullptr;
//    p=head;
//    cin>>x;
//    while(x)
//    {
//        list *r = new list;
//        r->info = x;
//        r->next = nullptr;
//        p->next = r;
//        p = r;
//        cin >> x;
//    }
//    while(head!=nullptr && head->info<0 )
//    {
//        list* temp=head;
//        head = head->next;
//        delete temp;
//    }
//    p = head;
//    while (p!=nullptr && p->next != nullptr)
//    {
//        if (p->next->info < 0)
//        {
//         list* r = p->next;
//         p->next = p->next->next;
//         delete r;
//        }
//        else
//         p = p -> next;
//    }
//    p = head;
//    while (p != nullptr)
//    {
//        cout << p->info << " ";
//        p = p->next;
//    }
// }