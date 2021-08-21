#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str;
void init(ll x){
    str = "";
    while(x){
        str = (char)(x%10 + '0')+str;
        x/=10;
    }
}
string toStr(ll x){
    string rs = "";
    while(x){
        rs = (char)(x%10 + '0')+rs;
        x/=10;
    }
    return rs;
}
bool check(string s){
    int i=0,j=0;
    int len1 = s.size(),len2 = str.size();
    for(i=0,j=0;i<len1&&j<len2;){
        if(s[i]==str[j]){
            i++;
            j++;
        }
        else j++;
    }
    if(i!=len1) return false;
    return true;
}
void solve(ll x){
    int d = 0;
    ll a = cbrt(x);
    for(ll i=a;i>0;i--){
        if(check(toStr(i*i*i))){
            d = 1;
            cout<<i*i*i<<endl;
            break;
        }
    }
    if(!d) cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        init(n);
        //cout<<str<<endl;
        solve(n);
    }
}
/*

1373438
287361
310804
108053
1468871
1349086
504891
234226
1479749
738838
122817
1231029
1029820
1075546
1193922
348481
236271
781282
773030
984196
==================================================================
872062
569138
726328
1055671
1468293
1022313
676236
839451
1145908
669740
124346
937079
530543
180506
804375
1167409
800511
628635
173681
794686
895821
694140
1237157
446069
146342
841732
1220013
1313866
837350
701849
1425948
1332950
1235998
824416
860281
617433
632407
46198
672578
642418
820082
960654
1139910
561567
795570
48434
106741
86032
405271
848922
802060
1472107
1283411
1027613
548004
1099993
688906
1382215
871381
1170690
879360
207994
603413
1495113
946721
672415
119810
1118173
33058
699661
218894
186090
867660
638294
1331800
361933
1492415
489008
908987
589234
576493
875130
167747
553638
805000
1360583
1095305
873489
712909
809643
154556
625459
21249
1112303
720075
509773
378248
125480
670425
533298
486011
983371
1396831
553162
875868
57488
475868
650778
701419
740187
630373
455302
986307
717673
1131814
1246774
808739
641388
1426470
376307
823892
1157067
853961
1157282
106011
840243
1200933
1126838
547666
744121
246673
1320676
296719
649514
583711
1293203
710885
85957
709793
686024
1456788
621460
268326
267323
714029
591115
104661
1340718
1484487
1226368
639042
1332425
800085
334203
227439
1285753
652895
203842
1126128
1419261
1270573
944999
351889
1405017
622423
872235
517129
15949
38822
398518
752546
184921
604607
932973
768277
591395
1233614
1150178
1216837
731943
358076
1345948
777011
1329312
735687
712407
866688
1247623
514564
1379057
1498240
55153
518579
1466613
641209
591155
1256058
763555
537803
445812
1358862
569620
1153489
1108773
77327
391230
614200
646821
77598
676442
1044529
701104
1450017
1286743
955193
219445
12977
711121
624393
1445471
765214
1497027
1113034
120278
410348
877719
774287
1360871
766156
11553
62654
147397
503367
555282
808468
1269425
753749
276437
477765
718253
293863
1333334
1003222
519715
1077400
692530
64847
261841
495940
1332400
505951
716601
438666
336821
782915
1356303
1251691
262745
398297
1065739
1015589
30181
1343491
651704
1360502
50901
547097
1364590
470462
1436825
697161
627128
662920
1467726
1124793
144560
1047428
256881
1240918
718765
1382424
1023523
706053
627890
982291
1374470
1307271
613911
795323
378093
46432
625483
1090804
165614
1160123
532621
366141
499713
1117087
975614
554393
598629
709431
878830
425802
1378246
83554
1494390
1183990
194213
1452457
395773
156191
554227
356570
681904
369507
670675
389129
473148
222500
87507
880855
634014
521776
1147712
896583
638867
577964
969168
47464
1400240
1087176
334986
1051137
487418
501584
89480
972352
736900
678709
1290532
400477
973650
688743
1393216
1012649
1113252
1052829
951933
1126462
343340
1099728
838190
616655
1251508
378750
1456154
1367550
907243
290070
370825
1354885
1400825
487274
756506
214500
972971
1115465
297179
162414
780117
230600
1035787
319636
1329136
589109
667238
1401858
502813
1125920
1485679
1464807
577014
998830
526291
1210179
271153
298186
1408711
756083
312782
51881
152347
399768
277989
931422
301967
139865
21502
176770
1027493
178620
995438
659710
162290
370061
912736
145329
854653
1196901
1100933
1435818
566985
1038591
663560
139739
1212030
872073
1364530
508200
65386
55393
203888
1353376
167716
112304
1324025
169450
1461148
599218
1468197
1004345
795132
684045
1443928
771443
273661
1341589
1032272
73809
437209
366809
166915
770623
1207396
1290946
1228990
841987
883466
1493045
935575
1227223
476611
1098967
1171539
902220
860589
754969
636557
460923
386329
1248404
834466
668920
25724
760329
135687
1126392
433123
1123804
126820
1258135
621657
1130922
965306
1193196
857320
1114492
1487353
239012
564839
915132
664198
1018172
1458951
1034684
483520
170834
1038467
222978
1094629
297554
1427500
1027156
1342897
1150271
1372126
282171
1279935
888373
367228
886008
327150
340621
610131
229808
1458449
757980
518555
1130455
1151658
1440839
50243
1267459
785660
222696
1452335
1173153
342543
1377446
1248812
952859
771195
921419
829393
1029412
1187428
868640
868594
1028529
529868
467935
167154
802671
525194
422427
711048
761817
873326
1354883
665322
755690
172211
345458
29035
596895
400591
633312
1162173
579386
1413350
1101792
470907
891840
971278
1232524
884922
476238
678036
45194
1259733
499792
545368
301663
602307
833774
994696
852751
642702
1261228
1057232
101574
531960
443007
301125
174503
818021
692016
663372
1482331
1149896
843271
1482855
688077
998297
1489755
1056607
1114033
896907
1080445
469633
1034095
123790
1162621
246952
383509
1272542
716202
1084733
1468945
264591
22132
544789
324944
663676
215371
1208705
22022
724390
32840
1282096
1226648
1418196
25536
647056
478887
1359728
979487
937206
525913
539128
306417
1397198
423202
1100398
90950
920557
989627
1110007
156914
1048373
346395
776744
1438111
708521
674336
533584
1270379
774553
1462376
701441
669634
1244006
1108729
1260671
491649
197166
536033
858801
1095598
610570
232302
385690
1278810
900520
618510
1180143
165023
28978
1468294
582249
818310
1122258
760652
505205
283232
337833
730783
1117001
892325
224733
736294
1458266
1080598
1241721
1446645
1497580
108273
106742
519818
627839
226704
263317
471783
650807
359614
164389
1408013
861954
1032250
687338
1205580
120775
592808
259447
208301
111796
1176662
715549
870126
37650
302766
1343772
188869
808121
984154
570041
1214350
330694
681290
227253
1323769
1314164
964999
56217
70628
692749
85025
705836
320242
1305878
741355
498769
84831
772742
1255381
540422
129775
1412325
1293923
730049
320351
836304
177520
1493505
1412486
1125713
576977
137903
881826
1146025
761267
1230272
737874
876906
975765
591442
305152
1131856
1444744
1079694
1278289
610168
717736
1401151
390028
312808
970960
122462
562263
74991
1196949
533047
88185
206114
271690
428930
1072745
1022891
851509
462348
944786
537533
1015095
431581
992965
1221999
399733
646584
986344
1389770
943478
93469
537981
336135
32126
1120667
1025134
1257709
319780
1406731
1466520
1319678
839082
1031647
489196
1318765
1281637
1033852
543973
371410
453333
403353
505680
542798
482906
1227144
218319
94960
679818
123242
1228018
253028
85273
653655
1363413
205064
1317811
1335432
654014
1435456
1063745
284456
1236787
878890
860117
818449
844720
1388596
199561
187723
412383
834548
841319
618773
1028095
1228659
370894
219278
937722
205403
432127
219796
73436
187580
333483
229155
550708
1086787
379823
1120846
534571
45280
1067249
137772
308538
787048
416833
1079069
1098090
1413551
755542
1140960
732663
695510
632741
1318172
1404834
1395481
580557
546540
418404
1497208
1358974
208696
1111380
981480
1494096
1339158
518737
936437
1088137
539954
979250
1133993
498419
562518
163213
1227223
96928
433669
1051644
222280
658757
476893
1110841
1326161
943770
1145564
899737
806943
1048913
74550
863995
663873
348722
1310257
84474
1369566
1340578
801998
1481944
1493208
754770
230042
1137558
138509
1155595
1027711
704562
1062892
272478
1318043
1371058
341328
256935
191780
566540
829308
641714
1094283
1433745
1130644
813540
1385459
903984
120819
627147
522509
1236658
1322822
1496320
723986
1383775
1257470
667777
829467
512762
377334
973786
745628
1119675
666664
443732
694788
1495683
78045
381098
906885
370218
1307574
645052
998441
1170804
41347
738388
1088023
1323428
125263
772926
154587
1240867
729296
1359777
202606
579952
459840
380807
684450
422546
109424
1351680
719876
1460593
1217307
819586
788279
529304
152391
143116
996131
816184
927348
268576
1262979
12789
567602
1158809
686977
1446479
189494
507272
221501
421147
1414799
379779
1029297
941072
457125
613738
509157
997479
1136415
73143
1341342
1294470
467286
791324
240727
937941
414869
1235197
1418663
1238882
151150
975211
797794
1190976
1458172
1238076
705611
361498
640637
203249
735169
455960
718479
166447
996555
1227320
122765
1055234
1342522
1154311
1021680
1162804
355979
532141
702853
797435
1147222
256697
1456528
560586
81541
416615
1025641
1277224
736777
415605
1387925
646108
57418
345008
1058447
140274
114247
371089
808447
208123
1167919
1382330
965115
855469
1149086
1213198
394487
254263
180519
1239016
194974
208563
128535
504832
129680
415198
988098
1122407
742011
199951
870324
430864
900564
106442
1141224
803409
196627
506130
1470757
76646
535264
1436719
569185
820016
261936
31696
433315
933475
556216
1222108
478284
452983
914343
1292054
101632
1341047
1092557
395932
758952
880033
740566
1088308
249381
146084
82837
300746
1224411
1261418
264338
1099070
488439
1258989
1102950
592642
97522
166331
1135321
1247628
800544
642700
1345687
1445288
430865
1296203
243760
1209481
1187434
830785
382303
256720
925437
1496450
1044493
1119080
720512
937110
1336832
916511
210908
1035547
1205854
1325000
225382
133956
825289
614231
620112
58571
533494
38062
740928
988003
534655
817780
1088603
276912
1401875
1139528
29155
263073
1424954
1443268
315376
520486
487064
1196326
112461
1014921
1345531
344434
784893
761590
533502
1135964
1224190
130257
1006203
685640
138178
1232450
1236378
1183654
899831
538822
345622
1018684
1258954
1027964
1036512
607836
383833
46554
563673
1243706
50816
43811
1139301
1325168
709325
20848
798588
940534
1305564
1031335
196793
176980
403207
616210
612955
1215029
727245
1252907
1106054
994007
400006
31361
534251
619928
401799
292297
231814
1130229
1008913
514785
530271
458593
643986
897382
951200
388263
464125
128199
554832
761773
1122234
1070494
1368857
1127664
583799
372505
1136661
335937
1335985
951362
515750
1340831
496924
759248
687445
124224
1280004
1446191
104199
102680
871700
920271
744275
116443
89611
1003399
70748
817285
1321428
1304260
49952
747176
1429114
970008
1153183
1268000
884493
365234
507064
515111
703862
1041797
1397221
547307
372034
1491443
592709
1174571
49424
1014598
1474216
1285488
351547
703343
203453
588525
523731
378903
1336112
1335583
95365
1289802
1071441
731016
1150861
327782
658709
866576
256277
648068
1471800
1336056
424801
335115
877417
236917
1498999
320954
851978
260032
210576
229586
829026
1191439
867176
611666
977972
11024
837339
1377702
474161
132470
1286800
774025
585386
635923
1403043
108183
38131
1268081
925519
240394
1313978
1314247
866652
928510
475083
510317
1446829
628465
522782
500438
1266557
1248477
1478097
1184342
1047851
724637
521865
1036099
1440012
1177717
981827
484931
937079
710705
350810
1257009
1343286
818335
614373
193591
679785
382272
58625
434290
794658
1008506
1023929
124985
261012
559481
583879
955955
1285352
883067
1454781
291427
359004
1432694
1341605
284378
1191562
104201
1254419
320295
592136
777661
381452
135531
1011583
1262361
341867
693015
376307
1304515
644398
476552
819315
1292360
1424954
472363
1172962
877168
1281494
646457
973048
167936
1139656
79435
754563
87483
853462
118880
707154
21104
1207430
152374
471840
571864
1119297
78327
469774
1352488
1007147
633218
1361769
1320341
305161
1106754
829538
51882
1410958
1103009
11206
617968
594726
617438
22529
856594
1402021
1442582
856471
882167
306313
125756
655169
994803
1102499
1293852
1388606
1393785
806928
588554
580671
480237
1337091
408525
566335
692247
578339
308304
893351
725610
458747
332740
728384
861892
909063
1119775
1330078
1086300
1327307
1170759
15399
215841
420713
260400
116676
167374
904429
984266
549909
1068790
1001065
75540
1436839
894256
1283490
334372
372937
478497
392694
333311
436769
209163
446697
906693
662383
1167859
393294
1010415
1182573
309766
161316
827523
807448
45747
650219
622655
1239063
258108
1127727
603491
950989
604762
1106917
513595
565260
581530
1397965
42044
1441969
1341614
573534
669651
1014078
237411
358395
1330505
1268971
1494598
938391
1343377
370113
1097642
694860
20111
1220071
1448719
597257
72594
592125
984703
1137558
1235996
1499491
1090994
104701
1368135
1115721
896912
1124134
1481672
1417121
1060759
1290901
1449518
994710
1370022
1281813
208498
397592
957053
1088752
539038
336134
1358383
1264046
130784
966514
824303
1090467
556264
229330
293880
1146380
481050
1489130
40301
548577
792050
1006331
1411739
24469
269374
729027
57688
943551
862327
1367943
1273450
1113601
1436975
853908
1413180
968953
1003311
41478
1163135
335890
1079058
317338
840733
918369
956822
1187829
451096
1181493
346209
302536
565397
959668
350169
388710
1296847
1473912
1156061
164307
400653
759237
484126
893128
858090
672421
1317826
1014766
1154449
542817
327098
366748
652665
1192096
1498886
241793
1146085
936194
877870
1092778
939949
503924
453407
124003
1342586
983919
321004
836252
682472
1234560
683254
779164
1210496
203618
597248
174192
1359905
813837
171573
882511
418659
1339007
603443
1295641
558915
690507
939239
677729
271982
64462
648178
401386
442709
33312
860225
1017451
1024497
853915
116032
787404
625914
671267
165742
334612
749473
198527
288551
1273222
738998
1290718
1209593
331811
930347
132619
482745
404884
1267369
208411
425343
149146
1272239
1212242
724964
1053635
1462743
928373
1152360
727589
189276
753835
95794
52216
404922
1310023
698175
281707
175249
252541
1000690
407618
448345
512060
1449213
875506
154905
87327
64019
598408
316830
1220613
137991
1184028
1019872
723196
847570
1150821
654227
534694
673815
824497
68245
843887
458350
1006783
609551
341965
473354
1048598
1079079
877128
584436
1114219
440202
160902
15454
219199
655615
452153
26674
152818
807488
49505
30363
907652
1258139
1040891
1277271
1127781
205782
647673
1171633
75952
177697
830997
222746
753449
991058
1434252
1448156
346497
1220740
23597
289016
1149363
97612
1267427
753365
1349001
230246
605871
320441
1308206
486544
1191450
885356
512191
904456
286562
1030193
1410630
62120
499494
163633
636425
757499
290688
830592
1098367
273916
187638
198587
247781
1032998
1389379
969782
150500
428433
1171144
1442000
316757
1304542
1265407
1102298
1495789
363354
1344687
331722
462543
897549
1460066
186085
648957
645773
396873
488257
1481641
91533
477491
839344
332704
434956
1323736
1110314
1295519
1295215
1279496
468726
357555
1102617
370745
12729
818222
665523
1136619
972636
539175
1030927
1179826
180423
1264246
1193583
107184
18999
405831
857804
1206703
545822
501016
562279
668663
1343700
249994
330567
723879
1311367
1311868
1291291
279928
56875
375101
1229153
842853
318978
970170
820581
242259
736884
969428
595508
1165751
430505
1404109
1215938
1147627
1397662
905557
401112
1248035
1387240
926324
1182569
119055
1321775
882402
775325
359636
1022452
506435
354278
576894
315725
651861
668999
1226670
1422654
253225
1473426
727906
107405
572794
747720
1065168
1329806
1475154
1055000
1065741
1494799
953600
804921
562450
676126
887453
574396
259324
446767
1448401
238700
1490464
341405
1222050
219049
523602
1034036
791412
1007419
318447
715784
228039
857008
356527
1261486
1404740
150376
1065773
437653
1124215
554399
1382571
1487219
316808
761789
1071803
939786
358920
352133
1130021
754802
1021773
899973
259249
946113
1258704
1430713
38822
407743
70507
154090
326828
47794
1373958
481714
1258621
773610
130303
1233501
1348103
302172
1442620
844508
426897
424077
1116600
793692
798131
1100138
297269
1392866
1333346
79285
921875
968646
1480670
1280094
457417
706885
1323014
792739
1491742
870537
524891
435153
628636
583491
1148559
636895
872832
717151
563211
558920
512826
1178878
1117196
1280925
805589
1065955
747125
196104
670122
210186
133919
231373
710054
337618
949539
708481
171933
1376324
200566
1032941
612171
1236515
1252944
1268557
104652
723271
42787
37602
690710
1471377
129996
1469960
1496509
1058192
142588
363080
970529
1206132
288396
805249
793886
50464
182883
1207357
319635
349287
90948
437880
840696
1036481
535727
758279
1206159
1418767
645660
287089
1470478
18915
926407
248422
361166
449203
614513
623627
652095
566744
92614
1312974
820875
498649
959757
1337610
1016901
814445
1350724
300717
270913
1022978
129778
712397
582859
56453
954356
1395690
277508
691673
1015545
168179
591156
783852
1102805
1021740
1302821
557732
69922
49108
1083633
1159167
691195
1062281
17805
332015
691606
1329721
412053
551618
200268
1374885
1452390
1419630
786683
26863
1379886
974802
506793
314005
1083358
116793
20245
1189629
1108897
1047467
102239
1125979
390811
1342095
1191581
1021753
667477
1043311
1358089
34210
374743
915254
1195786
49710
1340455
1348932
1036976
938550
941276
75648
205626
772342
1076651
1490471
357640
1114622
1279664
291882
807623
588868
673207
323090
1291733
521458
714678
202363
443630
1336705
563658
24808
374604
1084333
74687
507081
426241
329184
290805
1443906
771433
330193
1172542
1294257
724948
398232
772056
1149429
68809
203689
384660
349049
207630
161684
1046821
473983
142020
1077657
72713
1174799
1047199
600549
191961
440185
1298226
255980
582188
1412639
19888
450868
962711
574256
352568
579226
1325940
278401
805958
288044
167743
76952
993017
265090
743604
778601
501518
1487222
1043342
1303222
1075199
468663
261832
705773
113731
602164
911869
1071974
751639
597007
104478
139178
1121753
254134
302153
1365911
540076
1018123
907674
589761
1362733
487108
1396521
481693
1320639
691324
197919
75300
627384
174753
1299468
1255386
159131
23997
365807
401254
537739
559595
1123058
228474
811340
1270385
636636
1335345
1002697
1330353
1186782
670376
81395
336129
365179
1453227
1401609
1207671
370122
1054234
141793
787577
293401
880954
863716
1400600
1314973
962332
746807
310604
211788
645963
338098
1357061
925072
473834
508364
199167
128663
515279
1092879
1144508
256830
368516
276139
1333533
541250
1477070
758473
755123
1120474
302995
339270
235402
1188650
565601
72231
412043
1488309
266504
1477036
424859
1123356
1093542
282570
244648
1230694
1328739
782977
784858
422999
1372529
1283593
1211345
1272263
51956
1360415
1072321
771377
1405930
178857
140212
814750
330723
72623
886767
881734
980904
1197878
1343047
1267539
1372736
254323
842413
574280
46174
731073
956025
675386
1121582
641966
1497222
493913
1087772
1455478
245381
114895
839116
543190
1331060
1092815
880343
823435
474116
1169211
1262749
660347
515222
1305399
572841
1265695
198202
1024117
486791
527160
163484
1394132
730841
316060
766001
695804
563150
791611
783055
33970
1216493
378496
1189436
148366
859753
635096
934713
651642
166110
1340350
51567
586466
937830
1312493
714425
1190134
611656
384868
1231690
1296162
438351
1382787
1065382
496287
300013
1119200
174256
1221710
736986
168551
223616
850141
628716
421568
276570
261971
1189729
442096
1430403
513907
1024842
755750
1358757
359105
870663
741358
62777
979474
376226
1344536
454899
1323185
1421805
934755
1378323
230093
805534
663096
1009842
1334321
1474146
1083619
1024713
386177
1122837
1116198
750233
399566
888333
280853
794881
1050534
497373
381101
1350995
1194546
416958
573145
391182
436701
1250880
1125381
32230
861173
244679
884084
1225907
756371
1253630
684486
87259
525590
953795
840446
292088
861547
1397901
507796
1243133
470426
973024
58372
632114
854624
669856
731374
163129
1037920
107563
795764
114294
1036733
1269327
1413862
440997
368153
398383
460141
101110
357813
832089
1007463
528626
414769
1392609
801143
95496
1064329
1458524
1173919
131069
1403809
1405474
1074307
998120
1445707
513978
626346
1384716
297710
903588
965305
1409163
812390
423157
1491103
300686
1494832
43450
838927
127538
512892
1421325
808373
119712
497335
166970
111526
1429985
581855
254597
401472
1082365
310638
624266
1357014
11514
773776
351297
1122141
146650
281319
204404
379964
171126
776945
13777
90139
70401
510791
102962
988711
110750
1017434
140483
499722
953486
919484
796009
706774
467747
344523
406095
194841
695431
550778
1156312
609233
592774
515281
459543
925317
748520
1329077
502652
913616
1460946
540019
1192023
1492328
893206
464867
654655
554262
642250
372184
1438153
1376658
624772
210355
1332747
457341
507787
1469396
454882
226350
466234
161750
1073472
678645
300978
617556
471390
148916
28556
1133210
1266884
213400
532072
338645
1070985
1235473
886280
798154
465693
418423
1460257
833581
426807
608845
959362
524084
1399336
711434
1026195
392852
1396023
480939
1022101
1096106
347288
1302798
1154639
1017097
1411992
212567
416335
824290
312515
941761
715299
1343944
236989
1464123
92404
995128
840805
1322036
640925
63120
1185377
1279304
1443542
275227
1470295
735050
1007376
776274
993427
426865
115510
1209974
912245
1322839
1316760
745148
614197
959215
913073
1305297
694183
242462
1174660
718109
507774
330673
1358989
897799
444017
842512
1364160
327408
452210
1333619
663568
723443
1158282
119685
974705
387548
416956
683333
1445997
702137
1361319
1182334
702536
755727
1267105
644907
925275
390988
999270
512537
367743
1443011
1223926
1430225
927539
889019
211008
872557
591892
1115856
464761
1084276
358383
1170857
630607
1185053
446632
258134
794865
1053636
185269
147812
17368
1074215
943671
772181
126188
952458
1106593
1039172
840526
1290955
1458154
1336538
1267537
261256
1449220
1369508
397583
304268
1084771
802840
17847
135256
547322
412243
1213137
434427
450172
502146
772406
844701
766894
116941
1473876
197780
718579
776961
608908
455809
242233
677292
366162
1127377
1477965
1475353
510670
100054
416428
617199
1164650
1229809
361261
210320
850696
1459854
364359
657465
625377
1139078
572087
324689
1404672
63833
1088076
644480
597730
1470880
493352
599294
1481708
670687
1059850
1314341
1125053
92792
1163755
110208
299292
1097949
1001868
1368371
917344
563123
252967
1040508
1314948
1091760
1195222
835507
1041195
104862
1334662
342978
232585
894182
311986
88144
662800
1081744
749218
820406
638376
973013
806937
1070335
951455
1311730
659037
908921
1459858
905463
892918
1370327
70346
1070324
867174
1020254
928669
38192
742908
584214
1003822
1032522
1108405
361520
784046
737717
570323
1251021
126881
1238274
1349176
721872
1015184
427952
51024
1275532
1173316
1445141
239818
1116236
1459306
51189
469086
65087
455838
995784
1069418
1441427
1183641
836533
264946
1222551
848080
959629
363149
82655
1468328
637249
213899
799772
946190
580504
766800
891310
695030
369444
1093229
1156106
912390
1444271
697516
342949
650435
1303134
1142189
105724
1083154
49329
574353
522559
748846
1407196
802218
121865
636931
751480
1382929
239671
234697
479886
1231701
115699
872088
355367
1029557
1341670
113616
119315
1344240
1322220
620118
846622
845660
106339
1304249
999549
580874
1152732
1070515
587344
919125
1179172
227546
455935
1109691
44657
820630
1051101
849518
920495
883816
139450
725234
142940
551802
799965
835916
526812
754686
1289129
258798
1443319
1045577
357219
559164
741220
538479
1111187
1251900
1029619
1423060
1176554
818462
1265459
870265
790132
1375387
1360709
144925
93249
347612
144882
733410
444980
318620
942399
507856
412367
1297830
1224594
174980
129515
525613
890034
192529
79834
1001499
1222564
1303488
875122
231071
1135724
114578
685987
1220941
1152862
1483261
1092045
695514
900444
367206
904275
91739
500159
190162
1399264
430862
1413155
1134224
249685
561444
589763
381938
488504
278819
1396980
375529
1192079
679345
935041
1101742
863538
1473550
1074613
390430
689642
1455337
1232420
541836
21224
1188416
1441315
186522
725245
343509
1206890
1377764
1128936
920068
532415
992292
36665
657684
1195675
893065
1475288
262902
616425
85609
1218264
369961
1180824
549212
1469634
280700
205162
1219731
1343103
166404
1140270
825783
1264063
503564
472967
1322280
727955
1004993
588733
612154
666127
96029
604828
214357
765262
115888
991318
997081
98772
1047943
526998
88030
638888
529586
750660
424421
768922
1353094
987232
665850
712213
867590
921398
391502
920059
772601
1198597
1406215
701595
785343
1226884
246310
883039
1257687
944702
940336
676361
568546
930396
1416443
70988
326145
1125723
491407
1320109
1469628
871168
1098491
884156
549453
646061
990102
1132941
1315797
975563
208661
467778
151914
757577
1182182
1447946
777924
1221701
317924
27481
1389855
1431391
987308
254459
150003
224561
1294622
892566
315300
1046564
943247
1367705
1213933
37998
823136
685154
291081
636460
295533
604866
1048717
372600
1465783
770829
1144537
60761
1050944
874492
1102189
424986
414006
1335579
806783
237538
211372
669846
94105
755707
1083971
345835
715796
1385301
1202789
1157444
1030473
1330585
1348310
472121
1353031
912167
1282045
528971
1298552
112865
205031
1436326
422368
501665
575457
222709
760691
184092
1438842
1164609
409533
110452
1104465
433907
299407
1334619
1129006
826104
433907
515751
203815
617489
1484888
380777
1492484
57564
1271185
1077221
1384353
1235320
592737
643561
665653
868128
836152
246204
1146438
1419923
630550
652270
766121
1389395
371053
549115
405236
615053
1499934
886985
1110546
412475
935419
919476
1476859
113650
283735
1284358
1349163
437869
702607
19332
359149
159497
1357320
590932
616762
64475
1179234
1455935
707309
24322
1068730
501817
430977
938118
258416
120871
1165528
299968
179797
407956
1172848
999371
434742
672893
279549
120320
596515
71395
1433337
285166
748583
651333
82685
948240
1336799
113587
180414
93187
690388
697608
19453
251187
140748
1467324
638058
1138258
1116488
624153
1208724
811326
295949
614263
891987
1325432
525694
327884
572202
1077158
1139201
1018723
533854
883091
1065680
665831
80604
358127
1223881
1440345
625964
984404
1290694
976226
1342015
552868
530252
608826
23270
617509
304172
1130236
913175
1422387
1122946
1413325
634188
563151
1246578
1133211
555293
622780
884304
1233470
1366872
72935
637969
213993

105031
114106
329592
452510
590690
1394636
799314
630338
1222293
962431
461052
552468
1331292
1477053
708695
853870
736889
1086465
772558
1376868
1066682
344671
1450718
380545
624749
1001211
85794
1181778
754228
916351
162921
182646
55207
1193898
840645
233600
149641
815128
1469411
1324882
1345144
728211
819784
1235117
1327800
1059857
146189
762817
524215
1431805
704373
253282
823524
404453
247874
555814
207276
740585
792226
909102
120046
452438
36960
613959
203729
637918
582622
425562
235292
567854
938515
82469
1058913
671928
257093
93704
527628
281160
1174931
120938
1069123
110049
1423552
69796
420904
30373
1316660
846859
572105
89656
1090481
935362
995873
742886
864101
278410
962683
571405
1448196
727495
1192766
396020
216161
1015538
743607
866566
841729
463436
958876
568895
159318
572960
975614
258442
769029
248134
517583
1123154
60770
1345979
1284830
1362033
454354
647914
1095205
927602
1304687
1002245
440694
621310
13937
940272
1215084
107451
562863
789018
788500
870320
1235848
1482695
849968
1090227
642727
1300190
74546
1022385
940630
1476707
50695
1102963
1243920
424925
32655
616090
861034
767393
1004237
775863
1155065
1301807
767814
890103
468560
772868
1427343
103597
1340351
1327636
1301394
702282
270400
63027
984605
411065
136955
229760
696348
1229597
455253
394727
1159328
350043
288144
627452
1179550
461979
1174275
1224400
730138
1356010
1282031
1497150
160608
772417
1109671
279966
1331862
1316402
1120927
82566
634341
1240709
968336
139680
1425721
1258274
871631
1011584
335642
1405529
271993
327769
1334458
408010
916518
346523
90741
583192
162077
758172
621436
825587
397994
13169
1034936
1255127
982992
521232
614824
1047363
590389
1416183
1263855
1002613
638349
615160
343947
711524
699983
1488194
582945
795532
708626
1463132
22680
844173
683404
698873
465869
81708
694387
1096743
778777
216844
518433
587443
535381
703367
1317282
572579
267538
473773
1162586
345362
521787
292214
1358951
922216
1022983
1231218
80817
530204
436549
752141
401691
179004
280508
494371
52374
109798
809847
1475794
946786
1448076
277683
1404683
290726
1057840
356768
794818
990470
922906
907289
1128519
1487863
618880
1416491
1049411
676211
580943
250189
609257
545985
932353
420132
863601
226621
929893
1174575
324693
366037
959687
485315
53471
1181689
880297
857860
413392
590929
951348
74177
1039437
747349
348548
727353
356358
1499237
1156887
1095785
854740
336828
735519
1420380
287657
1484872
463926
1190139
1448624
1033700
787078
1434177
1499675
1008389
14994
665866
1147278
647759
77575
298484
1449367
836198
76028
431689
1420094
216019
1457719
63344
972222
254743
1229824
568607
960650
369610
205351
836290
844041
1123356
1191579
1128642
1452729
635531
871091
406583
777201
568095
100277
251110
1349022
279790
446461
1402158
33403
1029756
470330
536933
365764
1180482
445874
482601
1059055
296520
552271
140774
100667
703270
348140
871335
747404
1392585
307226
1192827
375541
344856
132586
1203275
1254803
117759
1276591
17591
1099628
381104
485074
1000469
340863
1476905
270059
964980
995798
170344
1202732
595393
1396575
1249138
760651
485526
1315835
870646
951899
15001
290311
923242
180128
178889
433294
633714
1434134
1268451
262009
1002955
669345
417594
172442
281834
1037576
1342537
361085
38081
564329
573930
860493
469670
1362762
750300
206217
143965
1144582
1341594
460305
384983
708826
1382419
806859
622129
1286033
692777
1412451
878762
796861
1480528
643487
775127
1056331
1138735
1258521
1037246
851394
10912
759953
357436
407673
1268247
1236533
1217135
1117909
54350
1310472
972620
844193
570778
598491
531451
17335
656570
326624
586391
50622
224765
1159231
394653
585699
359220
220014
1413490
627620
383364
562220
1323618
864984
608750
519685
251934
1314052
783040
914019
150989
898111
218813
1380508
644095
241226
321781
1130781
10764
968569
744803
1448857
788033
734193
211796
599543
746655
434731
834218
1000000000000000000
999999999999999999
*/
