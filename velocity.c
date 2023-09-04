 #include<stdio.h>
 void main()
 {
  float u,a,t,v,s;
  printf("final velocity acceleration and time=");
  scanf("%f%f%f",&u,&a,&t);
  v=u+a*t;
  s=u+a*t*t;
  printf("final velocity =%f\n distance travelled=%f",v,s);
  }
