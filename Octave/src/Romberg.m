function g = Romberg (f,a,b,precision)

  k = 1;

     h(k)=((b-a)/(2^(k-1)));
     R(1,1) =(((b - a)/2)*(f(a)+f(b)));

  k++;

    do
      h(k)=((b-a)/(2^(k-1)));
      i=1;
      sum=0;

            do
              sum+=f(a+((2*i)-1)*h(k));
              i++;

            until(i>(2^(k-2)));

      R(k,1)=(1/2)*(R((k-1),1)+h((k-1))*(sum));
      j=2;

            while (j<=k)
              R(k,j) = R(k,(j-1))+((R(k,(j-1))-R((k-1),(j-1)))/((4.^ (j-1))-1));
              j++;

            endwhile;

      result = R(k,k);
      error = abs(R((k-1),(k-1))-R(k,k));
      k++;

    until(error<precision)

  result
  error

endfunction