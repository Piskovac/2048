#include <iostream>
#include <time.h>
#include <stdio.h>      
#include <stdlib.h>     

using namespace::std;

int zerocounter(int x, int xdsf, int xds, int xsd, int xgd, int adx, int adsx, int xafa, int xfsf, int dafx, int dax, int xas, int xasdf, int sf, int f, int d)
{
    int counter(0);
    if (x == 0) { counter += 1; }
    if (xdsf == 0) { counter += 1; }
    if (xds == 0) { counter += 1; }
    if (xsd == 0) { counter += 1; }
    if (xgd == 0) { counter += 1; }
    if (adx == 0) { counter += 1; }
    if (xafa == 0) { counter += 1; }
    if (xfsf == 0) { counter += 1; }
    if (dafx == 0) { counter += 1; }
    if (dax == 0) { counter += 1; }
    if (xas == 0) { counter += 1; }
    if (xasdf == 0) { counter += 1; }
    if (sf == 0) { counter += 1; }
    if (f == 0) { counter += 1; }
    if (d == 0) { counter += 1; }
    if (adsx == 0) { counter += 1; }
    return counter;
}
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
            yatay = 2;
        }
        else
        {
            yatay = 1;
        }
    }
    else
    {
        if (b > 24575)
        {
            yatay = 3;
        }
        else
        {
            yatay = 4;
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
            dikey = 2;
        }
        else
        {
            dikey = 1;
        }
    }
    else
    {
        if (b > 24575)
        {
            dikey = 3;
        }
        else
        {
            dikey = 4;
        }
    }

    return dikey;
}

int main()
{
    srand(time(NULL));

    unsigned int yer[] = { 0,0,0,0 };
    unsigned int yer1[] = { 0,0,0,0 };
    unsigned int yer2[] = { 0,0,0,0 };
    unsigned int yer3[] = { 0,0,0,0 };
    bool tekmiciftmi = 0;
    bool validmove = 1;
    int a = yer[0];
    int aa = yer[1];
    int aaa = yer[2];
    int aaaa = yer[3];
    int aaaaa = yer1[0];
    int aaaaaa = yer1[1];
    int aaaaaaa = yer1[2];
    int aaaaaaaa = yer1[3];
    int aaaaaaaaa = yer2[0];
    int aaaaaaaaaa = yer2[1];
    int aaaaaaaaaaa = yer2[2];
    int aaaaaaaaaaaa = yer2[3];
    int aaaaaaaaaaaaa = yer3[0];
    int aaaaaaaaaaaaaa = yer3[1];
    int aaaaaaaaaaaaaaa = yer3[2];
    int aaaaaaaaaaaaaaaa = yer3[3];

    while (true)
    {
        system("CLS");

        int hamle{};
        int yatay(0) ;
        int dikey(0);
        int count(0);   
        int zeros = zerocounter(yer3[0], yer3[1], yer3[2], yer3[3], yer[0], yer[1], yer[2], yer[3], yer1[0], yer1[1], yer1[2], yer1[3], yer2[0], yer2[1], yer2[2], yer2[3]);
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

                    if (yatay == 1)
                    {

                        if (yer[dikey - 1] == 0)
                        {
                            yer[dikey - 1] = ikidortrandom();
                            count += 1;
                        }
                    }
                    if (yatay == 2)
                    {
                        if (yer1[dikey - 1] == 0)
                        {
                            yer1[dikey - 1] = ikidortrandom();
                            count += 1;
                        }
                    }
                    if (yatay == 3)
                    {

                        if (yer2[dikey - 1] == 0)
                        {
                            yer2[dikey - 1] = ikidortrandom();
                            count += 1;
                        }
                    }
                    if (yatay == 4)
                    {

                        if (yer3[dikey - 1] == 0)
                        {
                            yer3[dikey - 1] = ikidortrandom();
                            count += 1;
                        }
                    }

                    // hepsinde sayý olursa döngü durdur
                    if (yer[0] != 0 && yer[1] != 0 && yer[2] != 0 && yer[3] != 0 && yer1[0] != 0 && yer1[1] != 0 && yer1[2] != 0 && yer1[3] != 0 && yer2[0] != 0 && yer2[1] != 0 && yer2[2] != 0 && yer2[3] != 0 && yer3[0] != 0 && yer3[1] != 0 && yer3[2] != 0 && yer3[3] != 0)
                    {
                        count = 10;
                    }
                }
            
        }


        // kolaylýk olsun diye dikey diziler
          unsigned int dikeys[]  = { yer[0], yer1[0], yer2[0], yer3[0] };
          unsigned int dikeys1[] = { yer[1], yer1[1], yer2[1], yer3[1] };
          unsigned int dikeys2[] = { yer[2], yer1[2], yer2[2], yer3[2] };
          unsigned int dikeys3[] = { yer[3], yer1[3], yer2[3], yer3[3] };

          //kaç tane yanyana eþit sayý var
          int horizontalequalitycount(0);
          for (int c = 1; c <= 3; c++)
          {

              if (yer[c - 1] == yer[c])
              {
                  horizontalequalitycount += 1;
              }
              if (yer1[c - 1] == yer1[c])
              {
                  horizontalequalitycount += 1;
              }
              if (yer2[c - 1] == yer2[c])
              {
                  horizontalequalitycount += 1;
              }
              if (yer3[c - 1] == yer3[c])
              {
                  horizontalequalitycount += 1;
              }
          }




          //kaç tane yanyana eþit sayý var
          int verticalequalitycount(0);

          if (yer[0] == yer1[0])
          {
              verticalequalitycount += 1;
          }
          if (yer1[0] == yer2[0])
          {
              verticalequalitycount += 1;
          }
          if (yer2[0] == yer3[0])
          {
              verticalequalitycount += 1;
          }
          if (yer[1] == yer1[1])
          {
              verticalequalitycount += 1;
          }
          if (yer1[1] == yer2[1])
          {
              verticalequalitycount += 1;
          }
          if (yer2[1] == yer3[1])
          {
              verticalequalitycount += 1;
          }
          if (yer[2] == yer1[2])
          {
              verticalequalitycount += 1;
          }
          if (yer1[2] == yer2[2])
          {
              verticalequalitycount += 1;
          }
          if (yer2[2] == yer3[2])
          {
              verticalequalitycount += 1;
          }
          if (yer[3] == yer1[3])
          {
              verticalequalitycount += 1;
          }
          if (yer1[3] == yer2[3])
          {
              verticalequalitycount += 1;
          }
          if (yer2[3] == yer3[3])
          {
              verticalequalitycount += 1;
          }

          // sayý göstergeleri

          cout << "\t\t\t   2048" << endl;
          cout << "\t\t" << yer[0] << "\t" << yer[1] << "\t" << yer[2] << "\t" << yer[3] << endl;
          cout << "\t\t" << yer1[0] << "\t" << yer1[1] << "\t" << yer1[2] << "\t" << yer1[3] << endl;
          cout << "\t\t" << yer2[0] << "\t" << yer2[1] << "\t" << yer2[2] << "\t" << yer2[3] << endl;
          cout << "\t\t" << yer3[0] << "\t" << yer3[1] << "\t" << yer3[2] << "\t" << yer3[3] << endl;
          cout << endl << "SOLA HAMLE: 1 SAGA HAMLE: 2 ASAGI HAMLE: 3 YUKARI HAMLE: 4" << endl;

          // oyun kazanýldý
          for (int c = 0; c <= 3; c++)
          {
              if (yer[c] == 2048)
              {
                  cout << "OYUNU KAZANDINIZ" << endl;
                  system("pause");
                  return 0;
              }
              if (yer1[c] == 2048)
              {
                  cout << "OYUNU KAZANDINIZ" << endl;
                  system("pause");
                  return 0;
              }
              if (yer2[c] == 2048)
              {
                  cout << "OYUNU KAZANDINIZ" << endl;
                  system("pause");
                  return 0;
              }
              if (yer3[c] == 2048)
              {
                  cout << "OYUNU KAZANDINIZ" << endl;
                  system("pause");
                  return 0;
              }
          }
          // oyun kaybedildi
          if (horizontalequalitycount + verticalequalitycount == 0 && zeros == 0)
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

        //hamle uygun mu
        a = yer[0];
        aa = yer[1];
        aaa = yer[2];
        aaaa = yer[3];
        aaaaa = yer1[0];
        aaaaaa = yer1[1];
        aaaaaaa = yer1[2];
        aaaaaaaa = yer1[3];
        aaaaaaaaa = yer2[0];
        aaaaaaaaaa = yer2[1];
        aaaaaaaaaaa = yer2[2];
        aaaaaaaaaaaa = yer2[3];
        aaaaaaaaaaaaa = yer3[0];
        aaaaaaaaaaaaaa = yer3[1];
        aaaaaaaaaaaaaaa = yer3[2];
        aaaaaaaaaaaaaaaa = yer3[3];        

        
        //sola öteleme
        if (hamle == 1)
        {
            for (int c = 0; c <= 4; c++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (yer[c - 1] == 0)
                    {
                        yer[c - 1] = yer[c];

                        if (c < 2)
                        {
                            yer[c] = yer[c + 1];
                        }
                        yer[c] = 0;
                    }
                    if (yer1[c - 1] == 0)
                    {
                        yer1[c - 1] = yer1[c];
                        if (c < 2)
                        {
                            yer1[c] = yer1[c + 1];
                        }
                        yer1[c] = 0;
                    }
                    if (yer2[c - 1] == 0)
                    {
                        yer2[c - 1] = yer2[c];
                        if (c < 2)
                        {
                            yer2[c] = yer2[c + 1];
                        }
                        yer2[c] = 0;
                    }
                    if (yer3[c - 1] == 0)
                    {
                        yer3[c - 1] = yer3[c];
                        if (c < 2)
                        {
                            yer3[c] = yer3[c + 1];
                        }
                        yer3[c] = 0;
                    }
                }
            }
        }
        //saða öteleme
        if (hamle == 2)
        {
            for (int b = 0; b <= 4; b++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (yer[4 - c] == 0)
                    {
                        yer[4 - c] = yer[3 - c];
                        if (c < 2)
                        {
                            yer[3 - c] = yer[2 - c];
                        }
                        yer[3 - c] = 0;
                    }
                    if (yer1[4 - c] == 0)
                    {
                        yer1[4 - c] = yer1[3 - c];
                        if (c < 2)
                        {
                            yer1[3 - c] = yer1[2 - c];
                        }
                        yer1[3 - c] = 0;
                    }
                    if (yer2[4 - c] == 0)
                    {
                        yer2[4 - c] = yer2[3 - c];
                        if (c < 2)
                        {
                            yer2[3 - c] = yer2[2 - c];
                        }
                        yer2[3 - c] = 0;
                    }
                    if (yer3[4 - c] == 0)
                    {
                        yer3[4 - c] = yer3[3 - c];
                        if (c < 2)
                        {
                            yer3[3 - c] = yer3[2 - c];
                        }
                        yer3[3 - c] = 0;
                    }
                }
            }
        }
        //aþaðý öteleme
        if (hamle == 3)
        {
            for (int b = 0; b <= 4; b++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (dikeys[4 - c] == 0)
                    {
                        dikeys[4 - c] = dikeys[3 - c];
                        if (c < 2)
                        {
                            dikeys[3 - c] = dikeys[2 - c];
                        }
                        dikeys[3 - c] = 0;
                    }
                    if (dikeys1[4 - c] == 0)
                    {
                        dikeys1[4 - c] = dikeys1[3 - c];
                        if (c < 2)
                        {
                            dikeys1[3 - c] = dikeys1[2 - c];
                        }
                        dikeys1[3 - c] = 0;
                    }
                    if (dikeys2[4 - c] == 0)
                    {
                        dikeys2[4 - c] = dikeys2[3 - c];
                        if (c < 2)
                        {
                            dikeys2[3 - c] = dikeys2[2 - c];
                        }
                        dikeys2[3 - c] = 0;
                    }
                    if (dikeys3[4 - c] == 0)
                    {
                        dikeys3[4 - c] = dikeys3[3 - c];
                        if (c < 2)
                        {
                            dikeys3[3 - c] = dikeys3[2 - c];
                        }
                        dikeys3[3 - c] = 0;
                    }
                }
            }
        }
        //yukarý öteleme
        if (hamle == 4)
        {
            for (int c = 0; c <= 4; c++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (dikeys[c - 1] == 0)
                    {
                        dikeys[c - 1] = dikeys[c];

                        if (c < 2)
                        {
                            dikeys[c] = dikeys[c + 1];
                        }
                        dikeys[c] = 0;
                    }
                    if (dikeys1[c - 1] == 0)
                    {
                        dikeys1[c - 1] = dikeys1[c];
                        if (c < 2)
                        {
                            dikeys1[c] = dikeys1[c + 1];
                        }
                        dikeys1[c] = 0;
                    }
                    if (dikeys2[c - 1] == 0)
                    {
                        dikeys2[c - 1] = dikeys2[c];
                        if (c < 2)
                        {
                            dikeys2[c] = dikeys2[c + 1];
                        }
                        dikeys2[c] = 0;
                    }
                    if (dikeys3[c - 1] == 0)
                    {
                        dikeys3[c - 1] = dikeys3[c];
                        if (c < 2)
                        {
                            dikeys3[c] = dikeys3[c + 1];
                        }
                        dikeys3[c] = 0;
                    }
                }
            }
        }




        //sola toplama
        if (hamle == 1)
        {
            for (int c = 1; c <= 3; c++)
            {

                if (yer[c - 1] == yer[c])
                {
                    yer[c - 1] += yer[c];
                    yer[c] = 0;
                }
                if (yer1[c - 1] == yer1[c])
                {
                    yer1[c - 1] += yer1[c];
                    yer1[c] = 0;
                }
                if (yer2[c - 1] == yer2[c])
                {
                    yer2[c - 1] += yer2[c];
                    yer2[c] = 0;
                }
                if (yer3[c - 1] == yer3[c])
                {
                    yer3[c - 1] += yer3[c];
                    yer3[c] = 0;
                }
            }
        }
        //saða toplama
        if (hamle == 2)
        {
            for (int c = 1; c <= 3; c++)
            {

                if (yer[4 - c] == yer[3 - c])
                {
                    yer[4 - c] += yer[3 - c];
                    yer[3 - c] = 0;
                }
                if (yer1[4 - c] == yer1[3 - c])
                {
                    yer1[4 - c] += yer1[3 - c];
                    yer1[3 - c] = 0;
                }
                if (yer2[4 - c] == yer2[3 - c])
                {
                    yer2[4 - c] += yer2[3 - c];
                    yer2[3 - c] = 0;
                }
                if (yer3[4 - c] == yer3[3 - c])
                {
                    yer3[4 - c] += yer3[3 - c];
                    yer3[3 - c] = 0;
                }
            }
        }
        //aþaðý toplama
        if (hamle == 3)
        {
            for (int c = 1; c <= 3; c++)
            {

                if (dikeys[4 - c] == dikeys[3 - c])
                {
                    dikeys[4 - c] += dikeys[3 - c];
                    dikeys[3 - c] = 0;
                }
                if (dikeys1[4 - c] == dikeys1[3 - c])
                {
                    dikeys1[4 - c] += dikeys1[3 - c];
                    dikeys1[3 - c] = 0;
                }
                if (dikeys2[4 - c] == dikeys2[3 - c])
                {
                    dikeys2[4 - c] += dikeys2[3 - c];
                    dikeys2[3 - c] = 0;
                }
                if (dikeys3[4 - c] == dikeys3[3 - c])
                {
                    dikeys3[4 - c] += dikeys3[3 - c];
                    dikeys3[3 - c] = 0;
                }
            }
            yer[0] = dikeys[0];
            yer[1] = dikeys1[0];
            yer[2] = dikeys2[0];
            yer[3] = dikeys3[0];
            yer1[0] = dikeys[1];
            yer1[1] = dikeys1[1];
            yer1[2] = dikeys2[1];
            yer1[3] = dikeys3[1];
            yer2[0] = dikeys[2];
            yer2[1] = dikeys1[2];
            yer2[2] = dikeys2[2];
            yer2[3] = dikeys3[2];
            yer3[0] = dikeys[3];
            yer3[1] = dikeys1[3];
            yer3[2] = dikeys2[3];
            yer3[3] = dikeys3[3];
        }
        //yukarý toplama
        if (hamle == 4)
        {
            for (int c = 1; c <= 3; c++)
            {

                if (dikeys[c - 1] == dikeys[c])
                {
                    dikeys[c - 1] += dikeys[c];
                    dikeys[c] = 0;
                }
                if (dikeys1[c - 1] == dikeys1[c])
                {
                    dikeys1[c - 1] += dikeys1[c];
                    dikeys1[c] = 0;
                }
                if (dikeys2[c - 1] == dikeys2[c])
                {
                    dikeys2[c - 1] += dikeys2[c];
                    dikeys2[c] = 0;
                }
                if (dikeys3[c - 1] == dikeys3[c])
                {
                    dikeys3[c - 1] += dikeys3[c];
                    dikeys3[c] = 0;
                }
            }
            yer[0] = dikeys[0];
            yer[1] = dikeys1[0];
            yer[2] = dikeys2[0];
            yer[3] = dikeys3[0];
            yer1[0] = dikeys[1];
            yer1[1] = dikeys1[1];
            yer1[2] = dikeys2[1];
            yer1[3] = dikeys3[1];
            yer2[0] = dikeys[2];
            yer2[1] = dikeys1[2];
            yer2[2] = dikeys2[2];
            yer2[3] = dikeys3[2];
            yer3[0] = dikeys[3];
            yer3[1] = dikeys1[3];
            yer3[2] = dikeys2[3];
            yer3[3] = dikeys3[3];
        }




        //toplamlarýda ötelemek için
        //sola öteleme
        if (hamle == 1)
        {
            for (int c = 0; c <= 4; c++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (yer[c - 1] == 0)
                    {
                        yer[c - 1] = yer[c];

                        if (c < 2)
                        {
                            yer[c] = yer[c + 1];
                        }
                        yer[c] = 0;
                    }
                    if (yer1[c - 1] == 0)
                    {
                        yer1[c - 1] = yer1[c];
                        if (c < 2)
                        {
                            yer1[c] = yer1[c + 1];
                        }
                        yer1[c] = 0;
                    }
                    if (yer2[c - 1] == 0)
                    {
                        yer2[c - 1] = yer2[c];
                        if (c < 2)
                        {
                            yer2[c] = yer2[c + 1];
                        }
                        yer2[c] = 0;
                    }
                    if (yer3[c - 1] == 0)
                    {
                        yer3[c - 1] = yer3[c];
                        if (c < 2)
                        {
                            yer3[c] = yer3[c + 1];
                        }
                        yer3[c] = 0;
                    }
                }
            }
        }
        //saða öteleme
        if (hamle == 2)
        {
            for (int b = 0; b <= 4; b++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (yer[4 - c] == 0)
                    {
                        yer[4 - c] = yer[3 - c];
                        if (c < 2)
                        {
                            yer[3 - c] = yer[2 - c];
                        }
                        yer[3 - c] = 0;
                    }
                    if (yer1[4 - c] == 0)
                    {
                        yer1[4 - c] = yer1[3 - c];
                        if (c < 2)
                        {
                            yer1[3 - c] = yer1[2 - c];
                        }
                        yer1[3 - c] = 0;
                    }
                    if (yer2[4 - c] == 0)
                    {
                        yer2[4 - c] = yer2[3 - c];
                        if (c < 2)
                        {
                            yer2[3 - c] = yer2[2 - c];
                        }
                        yer2[3 - c] = 0;
                    }
                    if (yer3[4 - c] == 0)
                    {
                        yer3[4 - c] = yer3[3 - c];
                        if (c < 2)
                        {
                            yer3[3 - c] = yer3[2 - c];
                        }
                        yer3[3 - c] = 0;
                    }
                }
            }
        }
        //aþaðý öteleme
        if (hamle == 3)
        {
            for (int b = 0; b <= 4; b++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (dikeys[4 - c] == 0)
                    {
                        dikeys[4 - c] = dikeys[3 - c];
                        if (c < 2)
                        {
                            dikeys[3 - c] = dikeys[2 - c];
                        }
                        dikeys[3 - c] = 0;
                    }
                    if (dikeys1[4 - c] == 0)
                    {
                        dikeys1[4 - c] = dikeys1[3 - c];
                        if (c < 2)
                        {
                            dikeys1[3 - c] = dikeys1[2 - c];
                        }
                        dikeys1[3 - c] = 0;
                    }
                    if (dikeys2[4 - c] == 0)
                    {
                        dikeys2[4 - c] = dikeys2[3 - c];
                        if (c < 2)
                        {
                            dikeys2[3 - c] = dikeys2[2 - c];
                        }
                        dikeys2[3 - c] = 0;
                    }
                    if (dikeys3[4 - c] == 0)
                    {
                        dikeys3[4 - c] = dikeys3[3 - c];
                        if (c < 2)
                        {
                            dikeys3[3 - c] = dikeys3[2 - c];
                        }
                        dikeys3[3 - c] = 0;
                    }
                }
            }
        }
        //yukarý öteleme
        if (hamle == 4)
        {
            for (int c = 0; c <= 4; c++)
            {

                for (int c = 1; c <= 3; c++)
                {

                    if (dikeys[c - 1] == 0)
                    {
                        dikeys[c - 1] = dikeys[c];

                        if (c < 2)
                        {
                            dikeys[c] = dikeys[c + 1];
                        }
                        dikeys[c] = 0;
                    }
                    if (dikeys1[c - 1] == 0)
                    {
                        dikeys1[c - 1] = dikeys1[c];
                        if (c < 2)
                        {
                            dikeys1[c] = dikeys1[c + 1];
                        }
                        dikeys1[c] = 0;
                    }
                    if (dikeys2[c - 1] == 0)
                    {
                        dikeys2[c - 1] = dikeys2[c];
                        if (c < 2)
                        {
                            dikeys2[c] = dikeys2[c + 1];
                        }
                        dikeys2[c] = 0;
                    }
                    if (dikeys3[c - 1] == 0)
                    {
                        dikeys3[c - 1] = dikeys3[c];
                        if (c < 2)
                        {
                            dikeys3[c] = dikeys3[c + 1];
                        }
                        dikeys3[c] = 0;
                    }
                }
            }
        }

        //hamle yeni sayý koymak için uygun mu
        validmove = 1;
        if (
            a == yer[0] &&
            aa == yer[1] &&
            aaa == yer[2] &&
            aaaa == yer[3] &&
            aaaaa == yer1[0] &&
            aaaaaa == yer1[1] &&
            aaaaaaa == yer1[2] &&
            aaaaaaaa == yer1[3] &&
            aaaaaaaaa == yer2[0] &&
            aaaaaaaaaa == yer2[1] &&
            aaaaaaaaaaa == yer2[2] &&
            aaaaaaaaaaaa == yer2[3] &&
            aaaaaaaaaaaaa == yer3[0] &&
            aaaaaaaaaaaaaa == yer3[1] &&
            aaaaaaaaaaaaaaa == yer3[2] &&
            aaaaaaaaaaaaaaaa == yer3[3])
        {
            validmove = 0;
        }

    }
    return 0;
}


