Code TC of 0(n):

    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    cout << best << "\n";

Explanation: 

    sum = max(array[k], sum + arreay[k]);
    It's working in this way that, when the sum of all previous index is less than the evalue of present index
    at this time previous sub array automatically neglected from the counting process.
    That's all 🙂