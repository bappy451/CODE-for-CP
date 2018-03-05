bool isPrime(long num)
{
	if (num == 2)
		return true;

	if (num <= 1 || num % 2 == 0)	// 0, 1, and all even numbers
		return false;

	for (unsigned long x = 3; x*x <= num; x += 2) {
		if (num % x == 0)
			return false;
	}

	return true;
}
