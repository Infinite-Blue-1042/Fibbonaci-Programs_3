 - (void) displayFibonacciNumbers:(int) n {
        NSMutableArray *fibSeries = [NSMutableArray new];
        int total = 0;
        int prev = 1;        
        for (int x=1; x<n; x++){
            total = total + prev;
            prev = total - prev;   
            [fibSeries addObject:[NSNumber numberWithInt:total]];
        }
        NSLog(@"Fibonacci numbers are: %@", fibSeries);
    }
