let kthFactor = (N, K) => {
    for (let i = 1; i <= N; ++i)
        if (!(N % i) && !--K)
            return i;
    return -1;
};
