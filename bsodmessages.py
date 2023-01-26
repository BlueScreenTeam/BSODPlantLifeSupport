from twilio.rest import Client 
 
account_sid = 'AC2dde8fb3fd2950f0bd509a479c474ab9' 
auth_token = '59c8d4c4d2c316bc93a6edeee1372c2e' 
client = Client(account_sid, auth_token)

message = None

def sendMessage():
    message = client.messages.create(  
                              messaging_service_sid='MG1e395dae840436485eeaa150357f6fac', 
                              body='testing',      
                              to='+18322971186',
                          )
 
for i in range(1):
    sendMessage()