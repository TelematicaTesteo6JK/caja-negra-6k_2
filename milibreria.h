#ifndef MILIBRERIA_H_INCLUDED
#define MILIBRERIA_H_INCLUDED

void obtiene_rendimiento(int cantidad)

if(cantidad <1){
	cout<<"Valor incorrecto<<endl;
}else if(cantidad<1000){
cantidad=cantidad+(cantidad*0.01);
cout<<cantidad;
}

else if(cantidad>=1000)|| (cantidad<=10000){
cantidad=cantidad+(cantidad*0.03);
cout <<cantidad;
}

else (cantidad>10000){
    cantidad=cantidad+(cantidad*0.05);
    cout <<cantidad;
}



#endif // MILIBRERIA_H_INCLUDED
