/*nama Nurul Ma'arif
  Kls  B
  UTS 1
  NPM 14810180040
*/

#include <iostream>

using namespace std;

struct ElemtList{
int nopesanan;
char namapesanan[20];
char jumlah[20];
int gol;
ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First){
First = NULL;
}

void createElemt(pointer& pBaru){
pBaru=new ElemtList;
cout << "No. Pesanan:";cin >>pBaru->nopesanan;
cout << "Nama Pesanan:";cin >>pBaru->namapesanan;
cout << "jumlaah:";cin >>pBaru->jumlah;
pBaru->next=NULL;
}

void insertFirst(List& First, pointer pBaru){
if(First==NULL)
First=pBaru;
else{
pBaru->next=First;
First=pBaru;
}
}

void traversal(List First){
pointer pBantu;
pBantu=First;
cout << "No. Daftar\t"<< "Nama pesanan\t"<< "jumlah \t"<<"harga satuan\t"<<endl;
while(pBantu != NULL){
cout <<pBantu->nopesanan<<"\t"<<pBantu->namapesanan<<"\t"<<pBantu->jumlah<<"\t"<<endl;
pBantu=pBantu->next;
}
}

void deleteFirst(List& First, pointer& pHapus){
if (First==NULL){
pHapus=NULL;
cout << "List kosong, tidak ada yang dihapus"<<endl;
}
else if(First->next==NULL){
pHapus=First;
First=NULL;
}
else{
pHapus=First;
First=First->next;
pHapus->next=NULL;
}
}

void insertLast(List& First, pointer pBaru){

pointer last;
if(First==NULL){
First=pBaru;
}
else{
last=First;
while(last->next!=NULL){
last=last->next;
}
last->next=pBaru;
}
}

void deleteLast(List& First, pointer& pHapus){
pointer last,precLast;
cout << "Delete last"<<endl;
if (First==NULL){
pHapus=NULL;
cout << "List Kosong, tidak ada yang dihapus"<<endl;
}
else if(First->next==NULL){
pHapus=First;
First=NULL;
}
else{
last=First;
precLast=NULL;
while(last->next !=NULL){
precLast=last;
last=last->next;
}
pHapus=last;
precLast->next=NULL;
}
}


void insertAfter(List& First,pointer pCari,pointer pBaru){
if (pCari->next==NULL)
pCari->next=pBaru;
else {
pBaru->next=pCari->next;
pCari->next=pBaru;
}
}


void linearSearch(List First,int key, int& found, pointer& pCari){
found=0;
pCari=First;
while (found==0 && pCari!=NULL) {
if (pCari->nodaftar==key)
found=1;
else
pCari=pCari->next;
}

}

void update(List& First, int key) {
pointer pToUpdate = NULL;
cout << "nama: "; cin >> pToUpdate->gol;
cout << endl;
}

void sortin(List& First){
int count = 0, i;
pointer start,curr,trail,temp;
start=First;
curr=NULL;
trail=NULL;
temp=NULL;

while(start != NULL) { 
count++;
start = start->next;
}

for(i = 0; i<count; ++i) { 

curr = trail = First; 

while (curr->next != NULL) { 
if (curr->nodaftar > curr->next->nodaftar) { 

temp = curr->next;
curr->next = curr->next->next;
temp->next = curr;


if(curr == First) 
First = trail = temp;
else 
trail->next = temp;
curr = temp; 
}

trail = curr;
curr = curr->next;
}
}
}

int main()
{
pointer p,pCari;
List m;
int ketemu;
int kunci;
int pilih;

createList(m);
while(1){
system("cls");
cout<<"Menu"<<endl;
cout<<"1. omlet Rendang "<<endl;
cout<<"2. Nasi gila"<<endl;
cout<<"3. Chicken Katsu"<<endl;
cout<<"4.ayam geprek"<<endl:
cout<<"5.nasi goreng"<<endl;
cout<<"6. Exit"<<endl;
cout << "Masukan Pilihan : "; cin >> pilih;
switch(pilih){
case 1:


return 0;
}
