function funkcja = kwadratura(f, a, b, n)
    wynik = 0;
    h = (b-a)/n;
    i=1;
    
    while(i < n)
        wynik = wynik + f(a + i * h);
        i++;
    endwhile
    
    funkcja = (h / 2) * (f(a) + f(b) + 2 * wynik);
    printf("Otrzymany wynik to: ")
endfunction
