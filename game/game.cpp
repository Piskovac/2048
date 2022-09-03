#include <iostream>
#include <time.h>
#include <stdio.h>      
#include <stdlib.h>     
#include <cstdint>
#include <bitset>

using namespace::std;

int ikidortrandom()
{
   
    int a{ rand() };
    if (a <= 16000)
    {
        return 4;
    }
    return 2;
}
int yatayyersecici()
{
    
    int b(rand());
    int yatay{};
    if (b <= 16383)
    {
        if (b <= 8191)
        {
            yatay = 1;
        }
        else
        {
            yatay = 0;
        }
    }
    else
    {
        if (b > 24575)
        {
            yatay = 2;
        }
        else
        {
            yatay = 3;
        }
    }
    
    return yatay;
}
int dikeyyersecici()
{
    
    int b(rand());
    int dikey{};
    if (b <= 16383)
    {
        if (b <= 8191)
        {
            dikey = 1;
        }
        else
        {
            dikey = 0;
        }
    }
    else
    {
        if (b > 24575)
        {
            dikey = 2;
        }
        else
        {
            dikey = 3;
        }
    }

    return dikey;
}

int main()
{
    srand(time(NULL));
    


    unsigned int yer[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
    
    bool tekmiciftmi = 0;
    bool validmove = 1;
    
    int hamle{};
    int yatay(0);
    int dikey(0);
    int count(0);
    int zeros = 0;
    int additionforvalidmove(0), additionforvalidmove_2(0);

    while (true)
    {
        system("CLS");

        yatay = 0;
        dikey = 0;
        count = 0;
        zeros = 0;

        //boþ yerleri sayma
        for (int c = 0; c <= 3; c++)
        {
            for (int b = 0; b <= 3; b++)
            {
                if (!yer[c][b])
                    zeros++;
            }
        }
        tekmiciftmi = 1 - tekmiciftmi;


          // 3 ten fazla boþ yer varsa 2 tane 0 a sayý koy
          if (tekmiciftmi == 1 && validmove == 1)
        {
            if (zeros < 3)
            {
                count = 1;
            }
            while (count < 2)
                {

                    yatay = yatayyersecici();
                    dikey = dikeyyersecici();

                    if (yer[dikey][yatay] == 0 )
                    {

                        
                            yer[dikey][yatay] = ikidortrandom();
                            count += 1;
                       
                    }
                    
                }
            
        }


       
          //kaç tane yanyana eþit sayý var
          int equalitycount(0);
          for (int c = 1; c <= 3; c++)
          {
              for (int b = 1; b <= 3; b++)
              {
                  if (yer[c][b - 1] == yer[c][b])
                  {
                      equalitycount += 1;
                  }
                  if (yer[c - 1][b] == yer[c][b])
                  {
                      equalitycount += 1;
                  }
                  
              }

          }

         

          // sayý göstergeleri

          cout << "\t\t\t   2048" << endl;
          cout << "\t\t" << yer[0][0] << "\t" << yer[0][1] << "\t" << yer[0][2] << "\t" << yer[0][3] << endl;
          cout << "\t\t" << yer[1][0] << "\t" << yer[1][1] << "\t" << yer[1][2] << "\t" << yer[1][3] << endl;
          cout << "\t\t" << yer[2][0] << "\t" << yer[2][1] << "\t" << yer[2][2] << "\t" << yer[2][3] << endl;
          cout << "\t\t" << yer[3][0] << "\t" << yer[3][1] << "\t" << yer[3][2] << "\t" << yer[3][3] << endl;

          cout << endl << "SOLA HAMLE: 1 SAGA HAMLE: 2 ASAGI HAMLE: 3 YUKARI HAMLE: 4" << endl;

          // oyun kazanýldý
          for (int c = 0; c <= 3; c++)
          {
              for (int b = 0; b <= 3; b++)
              {
                  if (yer[c][b] == 2048)
                  {
                      cout << "OYUNU KAZANDINIZ" << endl;
                      system("pause");
                      return 0;
                  }
              }
          }
          // oyun kaybedildi
          if (equalitycount == 0 && zeros == 0)
          {
              cout << "OYUN BITTI KAYBETTIN" << endl;
              system("pause");
              return 0;
          }

 
        //oyuncudan hamle al
        
        cin >> hamle;
        while(hamle != 1 && hamle != 2 && hamle != 3 && hamle != 4)
        {   
            cout << "GECERSIZ LUTFEN TEKRAR GIRIN: ";
            cin >> hamle;
        }

        

        
        //sola öteleme
        if (hamle == 1)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for(int c = 0; c <= 3 ;c++)
                    if (yer[c][b - 1] == 0)
                    {
                        yer[c][b - 1] = yer[c][b];
                        yer[c][b] = 0;
                    }
                    
                }
            }
        }
        //saða öteleme
        if (hamle == 2)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[c][b] == 0)
                        {
                            yer[c][b] = yer[c][b - 1];
                            yer[c][b - 1] = 0;
                        }

                }
            }
        }
        //aþaðý öteleme
        if (hamle == 3)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[b][c] == 0)
                        {
                            yer[b][c] = yer[b - 1][c];
                            yer[b - 1][c] = 0;
                        }

                }
            }
        }
        //yukarý öteleme
        if (hamle == 4)
        {
           for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[b - 1][c] == 0)
                        {
                            yer[b - 1][c] = yer[b][c];
                            yer[b][c] = 0;
                        }

                }
            }

                
        }

        


        //sola toplama
        if (hamle == 1)
        {
            for (int c = 0; c <= 3; c++)
            {
                for (int b = 1; b <= 3; b++)
                    if (yer[c][b - 1] == yer[c][b])
                    {
                        yer[c][b - 1] += yer[c][b];
                        yer[c][b] = 0;
                    }

            }
        }
        //saða toplama
        if (hamle == 2)
        {
            for (int c = 3; c >= 0; c--)
            {
                for (int b = 2; b >= 0; b--)
                    if (yer[c][b] == yer[c][b + 1])
                    {
                        yer[c][b + 1] += yer[c][b];
                        yer[c][b] = 0;
                    }

            }
        }
        //aþaðý toplama
        if (hamle == 3)
        {
           
            for (int c = 3; c >= 0; c--)
            {
                for (int b = 2; b >= 0; b--)
                    if (yer[b][c] == yer[b + 1][c])
                    {
                        yer[b + 1][c] += yer[b][c];
                        yer[b][c] = 0;
                    }

            }
            
        }
        //yukarý toplama
        if (hamle == 4)
        {
               
            for (int c = 0; c <= 3; c++)
            {
                for (int b = 1; b <= 3; b++)
                    if (yer[b - 1][c] == yer[b][c])
                    {
                        yer[b - 1][c] += yer[b][c];
                        yer[b][c] = 0;
                    }

            }
        }

        for (int c = 0; c <= 3; c++)
        {
            for (int b = 0; b <= 3; b++)
            {
                additionforvalidmove += yer[c][b];
            }
        }
        


        //toplamlarýda ötelemek için

        //sola öteleme
        if (hamle == 1)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[c][b - 1] == 0)
                        {
                            yer[c][b - 1] = yer[c][b];
                            yer[c][b] = 0;
                        }

                }
            }
        }
        //saða öteleme
        if (hamle == 2)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[c][b] == 0)
                        {
                            yer[c][b] = yer[c][b - 1];
                            yer[c][b - 1] = 0;
                        }

                }
            }
        }
        //aþaðý öteleme
        if (hamle == 3)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[b][c] == 0)
                        {
                            yer[b][c] = yer[b - 1][c];
                            yer[b - 1][c] = 0;
                        }

                }
            }
        }
        //yukarý öteleme
        if (hamle == 4)
        {
            for (int a = 1; a <= 4; a++)
            {
                for (int b = 1; b <= 3; b++)
                {
                    for (int c = 0; c <= 3; c++)
                        if (yer[b - 1][c] == 0)
                        {
                            yer[b - 1][c] = yer[b][c];
                            yer[b][c] = 0;
                        }

                }
            }


        }


        //hamle yeni sayý koymak için uygun mu
        if (additionforvalidmove == additionforvalidmove_2)
            validmove = 0;
        
    }
    return 0;
}


