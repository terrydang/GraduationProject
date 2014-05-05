% ARFF file for APK classification
@relation 'Andriod-Class'
@attribute 'INTERNET' {0,1}
@attribute ' RECEIVE_SMS ' {0,1}
@attribute 'READ_CONTACTS' {0,1}
@attribute 'CAMERA' {0,1}
@attribute 'ACCESS_GPS' {0,1}
@attribute 'CLASS' {'map','camera','sms'}
@data
% 6 instances
1, 0, 0, 0, 1, map
1, 0, 0, 1, 1, map
0, 0, 0, 1, 0, camera
1, 0, 0, 1, 0, camera
0, 1, 1, 0, 0, sms
1, 1, 1, 0, 0, sms
