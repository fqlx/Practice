(m,t,x) = float(raw_input()), int(raw_input()), int(raw_input())
tip = (m*t)/100
tax = (m*x)/100
print 'The final price of the meal is $' + str(int(round(m+tip+tax, 0))) + '.'