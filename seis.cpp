/******************************************************************************
 FUP que peça 3 números inteiros. Imprima os números em ordem decrescente.
*******************************************************************************/


#include <iostream>
using namespace std;
float um, dois, tres;

main()
{
 cout<<"\n digite o numero um:";
 cin>>um;
 cout<<"\n digite o numero dois:";
 cin>>dois;
 cout<<"\n digite o numero tres:";
 cin>>tres;
 
    if((um > dois)&&(um > tres)){
        cout<<"\n a ordem decrescente é: \n"<<um;
        if(dois>tres){
            cout<<"\n"<<dois;
            cout<<"\n"<<tres;
        }
    } else{
        if((dois >= um)&&(tres <= um)){
            cout<<"\n a ordem decrescente é: \n"<<dois;
            if(um>tres){
                cout<<"\n"<<um;
                cout<<"\n"<<tres;
        }
            }else {
                    if ((tres >= dois)&&(dois <= um)){
            			cout<<"\n a ordem decrescente é: \n"<<tres;
            			if(um>dois){
                			cout<<"\n"<<um;
                			cout<<"\n"<<dois;
                    } else{
                            if((um >= tres)&&(dois <= tres)){
            					cout<<"\n a ordem decrescente é: \n"<<um;
            					if(tres>dois){
                					cout<<"\n"<<tres;
                					cout<<"\n"<<dois;
                            } else {
                                    if((dois >= tres)&&(um <= tres)){
            							cout<<"\n a ordem decrescente é: \n"<<dois;
            							if(tres>um){
                							cout<<"\n"<<tres;
                							cout<<"\n"<<um;
                                    } else {
                                              if((tres >= um)&&(dois <= um)){
            									cout<<"\n a ordem decrescente é: \n"<<tres;
            									if(um>dois){
                									cout<<"\n"<<um;
                									cout<<"\n"<<dois;
                                                }                                                                                              
            				}
						}
                  }
             }                                  
         }
      }
   
