
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(2) << dis << endl;
    */
    /* //chuyen don vi do c -> f 
    int c;
    cin >> c; 
    double F = (float)c * 9 / 5 + 32;
    cout << fixed << setprecision(2)<< F << endl;
    */
    /* //abs, sqrt, pow------------------------------------------------
    // tri tuyet doi 
    int d; cin >> d;
    double ttd = abs(d);
    cout << fixed << setprecision(2) << ttd << endl;
    // can bac hai
    int n; cin >> n;
    double can = sqrt(n);
    cout << fixed << setprecision(2) << can << endl;
    // số mũ 
    int a ,b;
    cin >> a >> b;
    double somu = pow(a,b);
    cout << fixed << setprecision(2) << somu << endl;
    */
    /* //tính tổng 1----------------------------------
    int n;
    cin >> n; 
    long long s = 1ll * n * (n+1) / 2;
    cout << s << endl;
    */ 
    /* //tính tổng 2---------------------------------
    int n;
    cin >> n;
    long long res = 1ll * n *(n+1) * (2*n+1) / 6;
    cout << res << endl;
    */
    /* //tính tổng 3----------------------------------