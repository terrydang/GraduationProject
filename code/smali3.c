testCFG-BB@0x0 :
       0(0) const/4 v0 , [ #+ 1 ] // {1}
       1(2) const/4 v1 , [ #+ 1 ] // {1}
       2(4) const/4 v2 , [ #+ 1 ] // {1}
       3(6) const/4 v3 , [ #+ 1 ] // {1} [ testCFG-BB@0x8 ]

testCFG-BB@0x8 :
       4(8) iget-boolean v4 , v7 , [ field@ 14 Ltests/androguard/TestIfs;
            Z P ]
       5(c) if-eqz v4 , [ + 77 ] [ testCFG-BB@0x10  testCFG-BB@0xa6 ]

testCFG-BB@0x10 :
       6(10) move v1 , v0
       7(12) iget-boolean v4 , v7 , [ field@ 15 Ltests/androguard/TestIfs;
             Z Q ]
       8(16) if-eqz v4 , [ + 70 ] [ testCFG-BB@0x1a  testCFG-BB@0xa2 ]

testCFG-BB@0x1a :
       9(1a) const/4 v3 , [ #+ 2 ] // {2} [ testCFG-BB@0x1c ]

testCFG-BB@0x1c :
       10(1c) add-int/lit8 v2 , v2 , [ #+ 1 ] [ testCFG-BB@0x20 ]

testCFG-BB@0x20 :
      11(20) sget-object v4 , [ field@ 0 Ljava/lang/System;
             Ljava/io/PrintStream; out ]
       12(24) new-instance v5 , [ type@ 25 Ljava/lang/StringBuilder; ]
       13(28) invoke-static v0 , [ meth@ 22 Ljava/lang/String; valueOf
              ['(I)', 'Ljava/lang/String;'] ]
       14(2e) move-result-object v6
       15(30) invoke-direct v5 , v6 , [ meth@ 25 Ljava/lang/StringBuilder;
              ['(Ljava/lang/String;)', 'V'] ]
       16(36) const-string v6 , [ string@ 5 ',' ]
       17(3a) invoke-virtual v5 , v6 , [ meth@ 31
              Ljava/lang/StringBuilder; append ['(Ljava/lang/String;)',
              'Ljava/lang/StringBuilder;'] ]
       18(40) move-result-object v5
       19(42) invoke-virtual v5 , v1 , [ meth@ 28
              Ljava/lang/StringBuilder; append ['(I)',
              'Ljava/lang/StringBuilder;'] ]
       20(48) move-result-object v5
       21(4a) const-string v6 , [ string@ 5 ',' ]
       22(4e) invoke-virtual v5 , v6 , [ meth@ 31
              Ljava/lang/StringBuilder; append ['(Ljava/lang/String;)',
              'Ljava/lang/StringBuilder;'] ]
       23(54) move-result-object v5
       24(56) invoke-virtual v5 , v2 , [ meth@ 28
              Ljava/lang/StringBuilder; append ['(I)',
              'Ljava/lang/StringBuilder;'] ]
       25(5c) move-result-object v5
       26(5e) const-string v6 , [ string@ 5 ',' ]
       27(62) invoke-virtual v5 , v6 , [ meth@ 31
              Ljava/lang/StringBuilder; append ['(Ljava/lang/String;)',
              'Ljava/lang/StringBuilder;'] ]
       28(68) move-result-object v5
       29(6a) invoke-virtual v5 , v3 , [ meth@ 28
              Ljava/lang/StringBuilder; append ['(I)',
              'Ljava/lang/StringBuilder;'] ]
       30(70) move-result-object v5
       31(72) invoke-virtual v5 , [ meth@ 32 Ljava/lang/StringBuilder;
              toString ['()', 'Ljava/lang/String;'] ]
       32(78) move-result-object v5
       33(7a) invoke-virtual v4 , v5 , [ meth@ 8 Ljava/io/PrintStream;
              println ['(Ljava/lang/String;)', 'V'] ] [ testCFG-BB@0x80 ]

testCFG-BB@0x80 :
       34(80) iget-boolean v4 , v7 , [ field@ 16
              Ltests/androguard/TestIfs; Z R ]
       35(84) if-eqz v4 , [ + 4 ] [ testCFG-BB@0x88  testCFG-BB@0x8c ]

testCFG-BB@0x88 :
       36(88) add-int/lit8 v3 , v3 , [ #+ 4 ] [ testCFG-BB@0x8c ]

testCFG-BB@0x8c :
       37(8c) iget-boolean v4 , v7 , [ field@ 17
              Ltests/androguard/TestIfs; Z S ]
       38(90) if-eqz v4 , [ + -8 ] [ testCFG-BB@0x94  testCFG-BB@0x80 ]

testCFG-BB@0x94 :
       39(94) add-int/lit8 v0 , v0 , [ #+ 6 ]
       40(98) iget-boolean v4 , v7 , [ field@ 18
              Ltests/androguard/TestIfs; Z T ]
       41(9c) if-eqz v4 , [ + -74 ] [ testCFG-BB@0xa0  testCFG-BB@0x8 ]

testCFG-BB@0xa0 :
       42(a0) return-void

testCFG-BB@0xa2 :
       43(a2) const/4 v3 , [ #+ 3 ] // {3}
       44(a4) goto [ + -68 ] [ testCFG-BB@0x1c ]

testCFG-BB@0xa6 :
       45(a6) add-int/lit8 v2 , v2 , [ #+ 2 ]
       46(aa) goto [ + -69 ] [ testCFG-BB@0x20 ]
