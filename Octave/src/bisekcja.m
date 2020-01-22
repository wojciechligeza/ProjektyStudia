function [m, err] = bisekcja(f, a, b, eps)

    n = 1;

    if (f(a) * f(b) < 0)
        x = (a + b) / 2;

        while (!((b - a) < eps))
            if (f(x) == 0)
                m = x;
                break
            endif

            if (f(x) * f(a) > 0)
                a = x;
                x = (a + b) / 2;
            else
                b = x;
                x = (a + b) / 2;
            endif
            n++;
        endwhile

    m = x;
    err = (b - a) / 2 ^ n;

    else
        error('Funkcja posiada te same znaki na kra�cach przedzia�u!')
    endif

endfunction
