import time
def mainer():
	
    n=long(input())
    t1=time.time()
    mod=long(1e9+7)
    sm=n*(n+1)
    sm//=2
    if sm & 1 :
        print(0)
        return
        
    sm//=2
    sm=long(sm)
    mod1=mod+mod
    dp=[[0 for x in range(n+1)] for y in range(sm+1)]
    for i in range(0,sm+1):
        for j in range(0,n+1):
            if (i==0 and j==0):
                dp[i][j]=1
                continue
            dp[i][j]=dp[i][j-1]
            if i>=j:
                dp[i][j]+=dp[i-j][j-1]
            if dp[i][j]>=mod1:
                dp[i][j]%=mod1
            
            
    dp[sm][n]//=2
    
    print(dp[sm][n]%mod)
    t2=time.time()
    print(t2-t1)
mainer()


