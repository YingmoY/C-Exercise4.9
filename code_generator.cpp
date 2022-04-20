#include <stdio.h>

int main(){

    //将输出保存到code.cpp文件中
    freopen("code.cpp", "w", stdout);

    //开始整活
    printf("#include <iostream> \n");
    printf("using namespace std; \n");
    printf("int main() \n");
    printf("{ \n");
    printf("    cout << \"请给出一个不多于5位的正整数：\"; \n");
    printf("    int x; \n");
    printf("    cin >> x; \n\n");
    printf("    switch (x){ \n");

    for(int i=1;i<=99999;++i){
        printf("    case %d:\n",i);
        if(i<10){
            printf("        cout << \"是1位数\" << endl;\n");
            printf("        cout << \"个位数是:%d\" << endl;\n",i);
            printf("        cout << \"倒过来是:%d\" << endl;\n",i);
            printf("        break;\n");
        }
        else if(i<100){
            printf("        cout << \"是2位数\" << endl;\n");
            printf("        cout << \"个位数是:%d\" << endl;\n",i%10);
            printf("        cout << \"十位数是:%d\" << endl;\n",i/10);
            printf("        cout << \"倒过来是:%d\" << endl;\n",i%10*10+i/10);
            printf("        break;\n");
        }
        else if(i<1000){
            printf("        cout << \"是3位数\" << endl;\n");
            printf("        cout << \"个位数是:%d\" << endl;\n",i%10);
            printf("        cout << \"十位数是:%d\" << endl;\n",i/10%10);
            printf("        cout << \"百位数是:%d\" << endl;\n",i/100);
            printf("        cout << \"倒过来是:%d\" << endl;\n",i%10*100+i/10%10*10+i/100);
            printf("        break;\n");
        }
        else if(i<10000){
            printf("        cout << \"是4位数\" << endl;\n");
            printf("        cout << \"个位数是:%d\" << endl;\n",i%10);
            printf("        cout << \"十位数是:%d\" << endl;\n",i/10%10);
            printf("        cout << \"百位数是:%d\" << endl;\n",i/100%10);
            printf("        cout << \"千位数是:%d\" << endl;\n",i/1000);
            printf("        cout << \"倒过来是:%d\" << endl;\n",i%10*1000+i/10%10*100+i/100%10*10+i/1000);
            printf("        break;\n");
        }
        else {
            printf("        cout << \"是5位数\" << endl;\n");
            printf("        cout << \"个位数是:%d\" << endl;\n",i%10);
            printf("        cout << \"十位数是:%d\" << endl;\n",i/10%10);
            printf("        cout << \"百位数是:%d\" << endl;\n",i/100%10);
            printf("        cout << \"千位数是:%d\" << endl;\n",i/1000%10);
            printf("        cout << \"万位数是:%d\" << endl;\n",i/10000);
            printf("        cout << \"倒过来是:%d\" << endl;\n",i%10*10000+i/10%10*1000+i/100%10*100+i/1000%10*10+i/10000);
            printf("        break;\n");
        }
    }

    printf("\n    }");
    printf("\n}");

    return 0;
}