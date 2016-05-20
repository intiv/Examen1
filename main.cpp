#include<cstring>
#include<string>
#include<iostream>
#include<stdint.h>

using std::cout;
using std::cin;
using std::endl;

bool Pangrama(char*,unsigned int);

int main(int argc, char* argv[]){
	int resp=1;
	while(resp){
		int opcion;
		cout<<"1.- Pangramas\n2.- Contar palabras y letras\n3.- Traductor de codigo morse\n4.- Salir"<<endl;
		cin>>opcion;
		const unsigned int size=256;
		if(opcion==1){
			char* input=new char[size];
			cout<<"Ingrese string a evaluar"<<endl;
			cin.clear();
			cin.ignore();
			cin.getline(input,size);
			if(Pangrama(input,size)){
				cout<<input<<" es un pangrama!"<<endl;
			}else{
				cout<<input<<" no es un pangrama!"<<endl;
			}
			delete[] input;
			input=NULL;
			
		}else if(opcion==2){
			
	
		}else if(opcion==3){
		//	char* codigo = new char[256];

		}else if(opcion==4){
			cout<<"Gracias por usar este programa!"<<endl;
			return 0;
		}else{
			cout<<"Opcion invalida"<<endl;
		}
		cout<<"Desea continuar? [1 = Si, 0 = No]"<<endl;
		cin>>resp;
		
	}

}

bool Pangrama(char* input, unsigned int size){
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,letrai=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	
	for(int i=0;i<size;i++){
		char curr=input[i];
		if(curr=='a'||curr=='A')
			a++;
		else if(curr=='b'||curr=='B')
			b++;
		else if(curr=='c'||curr=='C')
			c++;
		else if(curr=='d'||curr=='D')
			d++;
		else if(curr=='e'||curr=='E')
			e++;
		else if(curr=='f'||curr=='F')
			f++;
		else if(curr=='g'||curr=='G')
			g++;
		else if(curr=='h'||curr=='H')
			h++;
		else if(curr=='i'||curr=='I')
			letrai++;
		else if(curr=='j'||curr=='J')
			j++;
		else if(curr=='k'||curr=='K')
			k++;
		else if(curr=='l'||curr=='L')
			l++;
		else if(curr=='m'||curr=='M')
			m++;
		else if(curr=='n'||curr=='N')
			n++;
		else if(curr=='o'||curr=='O')
			o++;
		else if(curr=='p'||curr=='P')
			p++;	
		else if(curr=='q'||curr=='Q')
			q++;
		else if(curr=='r'||curr=='R')
			r++;
		else if(curr=='s'||curr=='S')
			s++;
		else if(curr=='t'||curr=='T')
			t++;
		else if(curr=='u'||curr=='U')
			u++;
		else if(curr=='v'||curr=='V')
			v++;
		else if(curr=='w'||curr=='W')
			w++;
		else if(curr=='x'||curr=='X')
			x++;
		else if(curr=='y'||curr=='Y')
			y++;
		else if(curr=='z'||curr=='Z'){
			z++;
		}
	}
		
	if(a>0 && b>0 && c>0 && d>0 && e>0 && f>0 && g>0 && h>0 && letrai>0 && j>0 && k>0 && l>0 && m>0 && n>0 && o>0 && p>0 && q>0 && r>0 && s>0 && t>0 && u>0 && v>0 && w>0 && x>0 && y>0 && z>0){
		return true;
	}else{
		return false;
	}
}
