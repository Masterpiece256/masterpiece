#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void main()
{
 int Num_1,Num_2,i,j,a,b;    //����������������Num_1,Num_2������������ʱ��100���ڵ���������������i,aΪ���ͣ���������ķ��ӣ�����j,bΪ���ͣ���������ķ�ĸ��
    int x,y;                    //��������x,y��xΪsiwtch,case����е��¼���y�������һ������
 srand((unsigned)time(NULL));//����srand��������������ӣ������Ӻ͵�ǰʱ���йأ�����ÿ�����ɵ��������ͬ��
    for(int k=0;k<30;k++)       //����forѭ������ѭ��30�Σ�����30������㡣
  {
      Num_1=rand()%100;   //����rand()�����������100���ڵ�������
   Num_2=1+rand()%99;  //����rand()��������1��100���ڵ���������Ϊ�ڶ����������������ڳ���������0�ĳ��֡�
      i=rand()%100;       //����������ɵ�һ��������ķ��ӡ�
      j=1+rand()%99;      //����������ɵ�һ��������ķ�ĸ��
      a=rand()%100;       //����������ɵڶ���������ķ��ӡ�
      b=1+rand()%99;      //����������ɵڶ���������ķ�ĸ��
      y=1+rand();         //�������һ�����������ڳ���15ȡ��
         x=y%16;             //��ȡ�õ���������x������������֮����������㣬����֮����������㣬�����ͷ���֮����������㣬����������֮�����������
        switch(x)            //����siwtch,case�����������жϣ�������ɡ�
          {
              case 0:cout<<Num_1<<"+"<<Num_2<<"="<<endl;break;//case0��case3������������֮�����������
              case 1:cout<<Num_1<<"-"<<Num_2<<"="<<endl;break;
              case 2:cout<<Num_1<<"*"<<Num_2<<"="<<endl;break;
              case 3:cout<<Num_1<<"/"<<Num_2<<"="<<endl;break;
              case 4:if(i<j)                                  //case4��case7�Ƿ����ͷ���֮�����������
                {
               if(a<b)
                           {cout<<"("<<i<<"/"<<j<<")"<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
               else
                  {cout<<"("<<i<<"/"<<j<<")"<<"+"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
                }
              else
        {
         cout<<"("<<j<<"/"<<i<<")"<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
        }
        break;
              case 5:if(i<j)
                {
               if(a<b)
      {cout<<"("<<i<<"/"<<j<<")"<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
               else
      {cout<<"("<<i<<"/"<<j<<")"<<"-"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}
                }
               else
                  {
       cout<<"("<<j<<"/"<<i<<")"<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }
         break;
             case 6:if(i<j)
               {
              if(a<b)
        {cout<<"("<<i<<"/"<<j<<")"<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
              else
        {cout<<"("<<i<<"/"<<j<<")"<<"*"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}

               }
              else
      {
       cout<<"("<<j<<"/"<<i<<")"<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }
        break;
             case 7:if(i<j)
               {
              if(a<b)
        {cout<<"("<<i<<"/"<<j<<")"<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;}
       else
        {cout<<"("<<i<<"/"<<j<<")"<<"/"<<"("<<b<<"/"<<a<<")"<<"="<<endl;}

               }
              else
      {
       cout<<"("<<j<<"/"<<i<<")"<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
         }
        break;
          case 8:if(i<j)                              //case8��case11�Ƿ���������֮�����������
                 cout<<i<<"/"<<j<<"+"<<Num_2<<"="<<endl;
             else
              cout<<j<<"/"<<i<<"+"<<Num_2<<"="<<endl;
       break;
          case 9:if(i<j)
                 cout<<i<<"/"<<j<<"-"<<Num_2<<"="<<endl;
              else
                 cout<<j<<"/"<<i<<"-"<<Num_2<<"="<<endl;
              break;
          case 10:if(i<j)
                 cout<<i<<"/"<<j<<"*"<<Num_2<<"="<<endl;
            else
           cout<<i<<"/"<<j<<"*"<<Num_2<<"="<<endl;
          break;
          case 11:if(i<j)
                  cout<<i<<"/"<<j<<"/"<<Num_2<<"="<<endl;
            else
            cout<<i<<"/"<<j<<"/"<<Num_2<<"="<<endl;
            break;
             case 12:if(a<b)                           //case12��case15�Ƿ���������֮�����������
                cout<<Num_1<<"+"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
          cout<<Num_1<<"+"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
            break;
             case 13:if(a<b)
               cout<<Num_1<<"-"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
      cout<<Num_1<<"-"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
            break;
             case 14:if(a<b)
                        cout<<Num_1<<"*"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
      cout<<Num_1<<"*"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
               break;
             case 15:if(a<b)
                       cout<<Num_1<<"/"<<"("<<a<<"/"<<b<<")"<<"="<<endl;
            else
         cout<<Num_1<<"/"<<"("<<b<<"/"<<a<<")"<<"="<<endl;
              break;
           }
     }
}