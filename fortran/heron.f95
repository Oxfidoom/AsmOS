program heron
real::a,b,c,s.la,lb

print *,'enter a,b,c ='
read *,a,b,c

s=(a+b+c)/2
la=s*(s-a)*(s-b)*(s-c)
lb=sqrt(la)
print *,'num heron = ', lb
end program heron
