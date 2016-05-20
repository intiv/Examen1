#include<cstring>
#include<string>
#include<iostream>
#include<stdint.h>

using std::cout;
using std::cin;
using std::endl;

bool Pangrama(char*,unsigned int);
void contar(char*,unsigned int);

int main(int argc, char* argv[]){
	int resp=1;
	while(resp){
		int opcion;
		cout<<"1.- Pangramas\n2.- Contar palabras y letras\n3.- Traductor de codigo morse\n4.- Salir"<<endl;
		cin>>opcion;
		const unsigned int size=256;
		if(opcion==1){
			char* input=new char[size];
			cout<<"Ingrese linea a evaluar"<<endl;
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
			char* input=new char[size];
			cout<<"Ingrese palabra o frase:"<<endl;
			cin.clear();
			cin.ignore();
			cin.getline(input,size);
			contar(input,size);
			delete[] input;
			input=NULL;	
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

void contar(char* input, unsigned int size){	
	int words=1,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,letrai=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
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
		else if(curr=='z'||curr=='Z')
			z++;
		else if((curr==' '&&input[i+1]!=' ')||(curr=='\n')){
			words++;
		}
	}
	int letras=(a+b+c+d+e+f+g+h+letrai+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z);
	cout<<input<<" tiene "<<words<<" palabras"<<endl;
	cout<<input<<" tiene "<<letras<<" letras"<<endl;
	cout<<"Letras cuantas veces se repiten las letras usadas:"<<endl;
	if(a>0)
		cout<<"A: "<<a<<endl;
	if(b>0)
		cout<<"B: "<<b<<endl;
	if(c>0)
		cout<<"C: "<<c<<endl;
	if(d>0)
		cout<<"D: "<<d<<endl;
	if(e>0)
		cout<<"E: "<<e<<endl;
	if(f>0)
		cout<<"F: "<<f<<endl;
	if(g>0)
		cout<<"G: "<<g<<endl;
	if(h>0)
		cout<<"H: "<<h<<endl;
	if(letrai>0)
		cout<<"I: "<<letrai<<endl;
	if(j>0)
		cout<<"J: "<<j<<endl;
	if(k>0)
		cout<<"K: "<<k<<endl;
	if(l>0)
		cout<<"L: "<<l<<endl;
	if(m>0)
		cout<<"M: "<<m<<endl;
	if(n>0)
		cout<<"N: "<<n<<endl;
	if(o>0)
		cout<<"O: "<<o<<endl;
	if(p>0)
		cout<<"P: "<<p<<endl;
	if(q>0)
		cout<<"Q: "<<q<<endl;
	if(r>0)
		cout<<"R: "<<r<<endl;
	if(s>0)
		cout<<"S: "<<s<<endl;
	if(t>0)
		cout<<"T: "<<t<<endl;
	if(u>0)
		cout<<"U: "<<u<<endl;
	if(v>0)
		cout<<"V: "<<v<<endl;
	if(w>0)
		cout<<"W: "<<w<<endl;
	if(x>0)	
		cout<<"X: "<<x<<endl;
	if(y>0)
		cout<<"Y: "<<y<<endl;
	if(z>0)
		cout<<"Z: "<<z<<endl;
	cout<<"No se usaron las letras: "<<endl;
	if(a==0)
		cout<<" A ";
	if(b==0)
		cout<<" B ";
	if(c==0)
		cout<<" C ";
	if(d==0)
		cout<<" D ";
	if(e==0)
		cout<<" E ";
	if(f==0)
		cout<<" F ";
	if(g==0)
		cout<<" G ";
	if(h==0)
		cout<<" H ";
	if(letrai==0)
		cout<<" I ";
	if(j==0)
		cout<<" J ";
	if(k==0)
		cout<<" K ";
	if(l==0)
		cout<<" L ";
	if(m==0)
		cout<<" M ";
	if(n==0)
		cout<<" N ";
	if(o==0)
		cout<<" O ";
	if(p==0)
		cout<<" P ";
	if(q==0)
		cout<<" Q ";
	if(r==0)
		cout<<" R ";
	if(s==0)
		cout<<" S ";
	if(t==0)
		cout<<" T ";
	if(u==0)
		cout<<" U ";
	if(v==0)
		cout<<" V ";
	if(w==0)
		cout<<" W ";
	if(x==0)	
		cout<<" X ";
	if(y==0)
		cout<<" Y ";
	if(z==0)
		cout<<" Z ";
	cout<<endl;
}
