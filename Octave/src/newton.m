function [m, err] = newton(f,der,a,b,eps)

	x = (a + b) / 2;

	if(f(x) == 0)
		m = x;
	else
		y = x - f(x) / der(x);
		m = x;

		while((y - x) ^ 2 > eps)
			x = y;
			y = x - f(x) / der(x);
			m = y;

			if(f(y) == 0)
				break
			endif
		endwhile

	err = (y - x) ^ 2;

	endif

endfunction
