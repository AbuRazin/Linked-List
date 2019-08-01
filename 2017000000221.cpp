#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main ()
{
    struct Node *head, *temp, *x, *y, *p, *q, *r;
    int choice, n, i, specificValue, searchedValue, flag, position, continueLoop;
    while(1)
    {
        cout<<endl<<"\t\t\t\t\t --------------Menu-------------"<<endl;
        cout<<"\t\t\t\t\t|\t1. Create a list\t|\n\t\t\t\t\t|\t2. Show the list\t|\n\t\t\t\t\t|\t3. Insert a node\t|"<<endl;
        cout<<"\t\t\t\t\t|\t4. Delete a node\t|\n\t\t\t\t\t|\t5. Search in the list\t|\n\t\t\t\t\t|\t6. Exit\t\t\t|"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Welcome to linked list creation!"<<endl;
            cout<<"Let's create the head first"<<endl;
            head = new Node;
            cout<<"Enter head->data"<<endl;
            cin>>head->data;
            head->next = NULL;
            cout<<"Head has been created"<<endl;

            cout<<"How many nodes do you want to create?"<<endl;
            cin>>n;
            x = head;
            for(i=0; i<n; i++)
            {
                temp = new Node;
                cout<<"Enter node data: "<<endl;
                cin>>temp->data;
                temp->next = NULL;

                x->next = temp;
                x = x->next;
            }
            n++;
            cout<<"Congrats! Your list has been created!"<<endl;

        }
        else if(choice == 2)
        {
            cout<<"Now the list will be shown"<<endl;
            x = head;
            for(i=0; i<n; i++)
            {
                if(head== NULL)
                {
                    cout<<"Currently, there is no data in the list"<<endl;
                    break;
                }
                cout<<x->data<<" ";
                x = x->next;
            }
            cout<<endl;
        }
        else if(choice== 3)
        {
            cout<<endl<<"\t ----------Insertion Sub-Menu-----------"<<endl;
            cout<<"\t|\t11. at the beginning\t\t|\n\t|\t12. before a specific node\t|\n\t|\t13. after a specific node\t|"<<endl;
            cout<<"\t|\t14. at the end\t\t\t|\n\t|\t15. at a particular position\t|"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>choice;
            if(choice == 11)
            {
                y= new Node;
                cout<<"Insert a new head"<<endl;
                cin>>y->data;
                y->next= NULL;

                y->next= head;
                head= y;
                n++;
                cout<<head->data<<" has been added as your new head of the list."<<endl;
            }
            else if(choice == 12)
            {
                cout<<"Insert the specific value"<<endl;
                cin>>specificValue;

                flag= 0;
                x = head;
                for(i=0; i<n; i++)
                {
                    if(x->data== specificValue)
                    {
                        y= new Node;
                        cout<<"Insert the new data"<<endl;
                        cin>>y->data;
                        y->next= NULL;
                        flag= 1;
                        if(i== 0)
                        {
                            y->next= head;
                            head= y;
                        }
                        else
                        {
                            y->next= x;
                            p->next= y;
                        }
                        n++;
                        break;
                    }
                    p= x;
                    x= x->next;
                }
                if(flag== 1)
                {
                    cout<<y->data<<" has been successfully added in the list"<<endl;
                }
                else
                {
                    cout<<"Your specified value ( "<<specificValue<<" )  does not exit in the list"<<endl;
                }
            }
            else if(choice == 13)
            {
                cout<<"Insert the specific value"<<endl;
                cin>>specificValue;

                flag= 0;
                x = head;
                for(i=0; i<n; i++)
                {
                    if(x->data==specificValue)
                    {
                        y= new Node;
                        cout<<"Insert the new data"<<endl;
                        cin>>y->data;
                        y->next= NULL;
                        flag= 1;
                        y->next= x->next;
                        x->next= y;
                        n++;
                        break;
                    }
                    x = x->next;
                }
                if(flag==1)
                {
                    cout<<y->data<<" has been successfully added in the list"<<endl;
                }
                else
                {
                    cout<<"Your specified value ( "<<specificValue<<" ) does not exit in the list"<<endl;
                }
            }
            else if(choice == 14)
            {
                x = head;
                for(i=0; i<n; i++)
                {
                    if(x->next==NULL)
                    {
                        y= new Node;
                        cout<<"Insert a new data"<<endl;
                        cin>>y->data;
                        y->next=NULL;
                        x->next=y;
                        cout<<"Your inserted data ( "<<y->data<<" ) has been successfully added in the list"<<endl;
                        n++;
                        break;
                    }
                    x = x->next;
                }
            }
            else if(choice== 15)
            {
                cout<<"In which position you want to add new data"<<endl;
                cin>>position;

                flag= 0;
                if(position>0 && position <=n+1)
                {
                    x = head;
                    for(i=0; i<=position; i++)
                    {
                        if(i== position-1)
                        {
                            y= new Node;
                            cout<<"Insert the new data"<<endl;
                            cin>>y->data;
                            y->next= NULL;
                            flag= 1;
                            if(i== 0)
                            {
                                y->next= head;
                                head= y;
                            }
                            else if(i== n+1)
                            {
                                x->next= y;
                            }
                            else
                            {
                                y->next= x;
                                p->next= y;
                            }
                            n++;
                            break;
                        }
                        p= x;
                        x= x->next;
                    }
                }
                if(flag==1)
                {
                    cout<<y->data<<" has been successfully added in the list"<<endl;
                }
                else
                {
                    cout<<"Your specified position ( "<<position<<" ) is not valid"<<endl;
                    cout<<"The list contains total "<<n<<" numbers of data thus from 1 to "<<n+1<<" position is valid to enter new data"<<endl;
                }
            }
            else
            {
                cout<<"Sorry! Invalid option!"<<endl;
            }
        }
        else if(choice== 4)
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t -----------Deletion Sub-Menu-----------"<<endl;
            cout<<"\t\t\t\t\t\t\t\t|\t21. at the beginning\t\t|\n\t\t\t\t\t\t\t\t|\t22. before a specific node\t\t|\n\t\t\t\t\t\t\t\t|\t23. after a specific node\t\t|\n";
            cout<<"\t\t\t\t\t\t\t\t|\t24. at the end\t\t\t|\n\t\t\t\t\t\t\t\t|\t25. of a particular position\t|\n\t\t\t\t\t\t\t\t|\t26. Delete a particular node\t|\n";
            cout<<"Enter your choice"<<endl;
            cin>>choice;
            if(choice == 21)
            {
                searchedValue= head->data;
                flag= 0;
                if(n== 1)
                {
                    head= NULL;
                    flag= 1;
                }
                else
                {
                    x = head->next;
                    delete(head);
                    head= x;
                    n--;
                    flag=1;
                }
                if(flag== 1)
                {
                    cout<<"First data ( "<<searchedValue<< " ) of the list has been successfully deleted"<<endl;
                }
                else
                {
                    cout<<"You do not have any data"<<endl;
                }
            }
            else if(choice == 22)
            {
                cout<<"Insert the specific value"<<endl;
                cin>>specificValue;

                flag= 0;
                x = head;
                for(i=0; i<n-1; i++)
                {
                    if(x->next->data== specificValue)
                    {
                        flag= 1;
                        searchedValue= x->data;
                        if(i== 0)
                        {
                            q= head;
                            r= x->next;
                            delete(q);
                            head= r;
                        }
                        else
                        {
                            p->next= x->next;
                            delete(x);
                        }
                        n--;
                        break;
                    }
                    p= x;
                    x= x->next;
                }
                if(flag==1)
                {
                    cout<<searchedValue<<" has been successfully deleted from the list"<<endl;
                }
                else if(head->data== specificValue)
                {
                    cout<<"There is no data before "<<head->data<<". Please select other listed data to delete."<<endl;
                }
                else
                {
                    cout<<"Your specified value ( "<<specificValue<<" ) does not exit in the list"<<endl;
                }
            }
            else if(choice == 23)
            {
                cout<<"Insert the specific value"<<endl;
                cin>>specificValue;

                flag= 0;
                x = head;
                for(i=0; i<n; i++)
                {
                    if(x->data== specificValue)
                    {
                        if(x->next== NULL)
                        {
                            flag= 2;
                            break;
                        }
                        flag= 1;
                        searchedValue= x->next->data;
                        p= x->next->next;
                        delete(x->next);
                        x->next= p;
                        n--;
                        break;
                    }
                    x = x->next;
                }
                if(flag== 1)
                {
                    cout<<searchedValue<<" has been successfully deleted from the list"<<endl;
                }
                else if(flag== 2)
                {
                    cout<<"Sorry! There is no data after "<< specificValue<<endl;
                }
                else
                {
                    cout<<"Your specified value ( "<<specificValue<<" ) does not exit in the list"<<endl;
                }
            }
            else if(choice == 24)
            {
                continueLoop= 0;
                flag= 0;
                if(n== 1)
                {
                    searchedValue= head->data;
                    head= NULL;
                    flag= 1;
                    continueLoop= 1;
                }
                x = head;
                for(i=0; i<n-1; i++)
                {
                    if(continueLoop==1)
                    {
                        break;
                    }
                    if(x->next->next== NULL)
                    {
                        searchedValue= x->next->data;
                        delete(x->next);
                        x->next= NULL;
                        n--;
                        flag=1;
                        break;
                    }
                    x = x->next;
                }
                if(flag== 1)
                {
                    cout<<"Last data ( "<<searchedValue<<" ) has been successfully deleted"<<endl;
                }
                else
                {
                    cout<<"You do not have any data"<<endl;
                }
            }
            else if(choice== 25)
            {
                cout<<"of which position you want to delete data"<<endl;
                cin>>position;

                flag= 0;
                if(position>0 && position<=n)
                {
                    continueLoop= 0;
                    if(position== 1)
                    {
                        flag= 1;
                        searchedValue= head->data;
                        if(n== 1)
                        {
                            head= NULL;
                        }
                        else
                        {
                            p= head->next;
                            q= head;
                            delete(q);
                            head= p;
                            n--;
                        }
                        continueLoop= 1;
                    }
                    x= head;
                    for(i=1; i<n; i++)
                    {
                        if(continueLoop== 1)
                        {
                            break;
                        }
                        if(position-1== i)
                        {
                            flag= 1;
                            searchedValue= x->next->data;
                            p= x->next->next;
                            delete(x->next);
                            x->next= p;
                            n--;
                            break;
                        }
                        x = x->next;
                    }
                }
                if(flag==1)
                {
                    cout<<searchedValue<<" has been successfully deleted from the list"<<endl;
                }
                else
                {
                    cout<<"Your specified position ( "<<position<<" ) is not valid"<<endl;
                    cout<<"The list contains total "<<n<<" numbers of data thus from 1 to "<<n<<" position is valid"<<endl;
                }
            }
            else if(choice== 26)
            {
                cout<<"Insert the particular value"<<endl;
                cin>>specificValue;

                flag= 0;
                continueLoop= 0;
                if(head->data== specificValue)
                {
                    flag= 1;
                    if(n== 1)
                    {
                        head= NULL;
                    }
                    else
                    {
                        p= head->next;
                        q= head;
                        delete(q);
                        head= p;
                        n--;
                    }
                    continueLoop= 1;
                }
                x= head;
                for(i=0; i<n-1; i++)
                {
                    if(continueLoop== 1)
                    {
                        break;
                    }
                    if(x->next->data== specificValue)
                    {
                        flag= 1;
                        p= x->next->next;
                        delete(x->next);
                        x->next= p;
                        n--;
                        break;
                    }
                    x = x->next;
                }
                if(flag==1)
                {
                    cout<<specificValue<<" has been successfully deleted from the list"<<endl;
                }
                else
                {
                    cout<<"The particular value ( "<<specificValue<<" ) does not exit in the list"<<endl;
                }
            }
            else
            {
                cout<<"Sorry! Invalid option!"<<endl;
            }
        }
        else if(choice == 5)
        {
            cout<<"Insert the value you want to search"<<endl;
            cin>>searchedValue;
            flag= 0;

            x = head;
            for(i=0; i<n; i++)
            {
                if(x->data== searchedValue)
                {
                    flag= 1;
                }
                x = x->next;
            }
            if(flag== 1)
            {
                cout<<"Your searched value ( "<<searchedValue<<" ) is present in the linked list"<<endl;
            }
            else
            {
                cout<<"The searched value ( "<<searchedValue<<" ) is not present in the linked list"<<endl;
            }
        }
        else if(choice == 6)
        {
            return 0;
        }
        else
        {
            cout<<"Sorry! Invalid option!"<<endl;
        }
    }
    return 0;
}

