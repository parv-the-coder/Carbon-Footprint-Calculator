#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
 void main()
 {
 	int aov=0;//aoc=average of 2wheeler
 	int aoc=0;//aoc=average of car
 	float litre=0;
 	float temp1;//Temporary Variable 1
 	char scv;//select car variant
 	float cbyp=0; //cbyp=carbon emitted by petrol 1l petrol=2.3kg carbon
 	float cbyd=0; //cbyd=carbon emitted  by disel 1l diesel=2.7kg carbon
 	float cbyc=0; //cbyc=carbon emitted  by cng 1kgcng=2.2
 	float cbyv=0; //cbyv=carbon emitted  by petrol 1l petrol=2.3kg carbon
 	float litres=0;
 	int tkmbyv=0;//total km per day
 	float tcebyh=0; //total carbon emitted by human
 	printf("                                           Carbon Footprint Calculator\n");
 	printf("                                           ---------------------------\n\n");
 	printf("Enter your total usage of electricity per day in kwh:(Check your electricity bill)");
 	int a=0;
 	scanf("%d",&a);
 	float cbye=0;
 	cbye=(a*0.45);//cbye=carbon emit by elctricity 1kwh=0.45kg
 	printf("\nTotal carbon emitted by electricity:%.2f kg\n\n",cbye);
 	printf("Average human emit carbon by  breathing is 1 kg\n\n\n");
 	printf(" Carbon Emitted By Your Vehicle\n");
 	printf("-------------------------------\n");
 	printf("Enter Your daily drive in km:");
	float tkm=0;//total km per day
	scanf("%f",&tkm);
 	printf("\nEnter your mode of transport:\n");
 	printf("A) 4-wheeler\n");
 	printf("B) 2-wheeler\n");
 	char mot;//mot=mode of transport
 	scanf("%s",&mot);
 	if(mot=='A' || mot=='a')
 	{
 		printf("\nEnter  average of your car in km:");
		scanf("%d",&aoc);
		litre=tkm/aoc;
		printf("\nEnter your car variant:\n");
		printf("A)Petrol\n");
		printf("B)Diesel\n");
		printf("C)CNG\n");
		scanf("%s",&scv);
		if(scv=='A'||scv=='a')
		{
			cbyp=litre*2.3;
			printf("\nTotal Carbon emitted by your car:%.2f kg",cbyp);
		}
		else if(scv=='B'||scv=='b')
		{
			cbyd=litre*2.7;
			printf("\nTotal Carbon emitted by your car:%.2f kg",cbyd);
		}
		else if(scv=='C'||scv=='c')
		{
			cbyc=litre*2.2;
			printf("\nTotal Carbon emitted by your car:%.2f kg\n",cbyc);
		}
	}
		else if(mot=='B' || mot=='b')
 	{
 		printf("\nEnter average of your 2-wheeler in km:");
		scanf("%d",&aov);
		printf("Enter total km:");
		scanf("%d",&tkmbyv);
		litres=tkm/aov;
		cbyv=litres*2.3;
		printf("\nTotal Carbon emitted by your vehicle :%.2f kg\n",cbyv);
	 }
	 	tcebyh=cbye + cbyp + cbyd + cbyc + cbyv + 1;
	 	printf("\nYour Total daily carbon footprint is %.2f kg",tcebyh);
	 	if(tcebyh>4.76)
	 	{
	 	    temp1=tcebyh-4.76;
	 	    printf("\n Your carbon footprint is %.2f more than an average citizen of India \n",temp1);
	 	    if(tcebyh<5)
	 	    {
	 	        printf("\n Your carbon footprint is slightly above average Consumtion \n Here are some tips to reduce your carbon footprints:\n");
	 	        printf("(i) Take good care of your clothes \n (ii) Bring reusable shopping bags and avoid products with excessive plastic packaging ");
	 	    }
	 	    else if(tcebyh>5 && tcebyh<7)
	 	    {
	 	        printf("\n Your carbon footprint is above average Consumtion \n Here are some tips to reduce your carbon footprints:\n");
	 	        printf("(i) Take good care of your clothes \n (ii) Bring reusable shopping bags and avoid products with excessive plastic packaging ");
	 	        printf("\n (iii) Try the train for your next holiday \n (iv) Turn down the heating by 1°, it will already make a difference ");
	 	    }
	 	    else
	 	    {
	 	        printf("\n Your carbon footprint is very above average Consumtion \n Here are some tips to reduce your carbon footprints:\n");
	 	        printf("(i) Take good care of your clothes \n (ii) Bring reusable shopping bags and avoid products with excessive plastic packaging ");
	 	        printf("\n (iii) Try the train for your next holiday \n (iv) Turn down the heating by 1°, it will already make a difference \n");
	 	        printf("(v) Take short showers \n (vi) Cycle or use public transport ");
	 	    }
	 	}
	 	else
	 	{
	 	    temp1=4.76-tcebyh;
	 	    printf("\n Your carbon footprint is %.2f less than average carbon footprint of an Indian Citizen ",temp1);
	 	    printf("\n But Here are some tips to reduce it even more: \n");
	 	    printf("(i) Turn down the heating by 1°, it will already make a difference \n (ii) Take good care of your clothes");
	 	    printf("\n (iii) Cycle or use public transport");
	 	}
	}	
 
