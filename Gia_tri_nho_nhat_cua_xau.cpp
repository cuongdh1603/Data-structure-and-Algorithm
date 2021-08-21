#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        ll ans = 0;
        string s;
        cin>>k>>s;
        map<char,ll> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        vector<ll> a;
        for(auto[x,y]:mp) a.push_back(y);
        int len = a.size(),check = 1;
        while(k&&check){
            ll dif = 0;
            check = 0;
            int p;
            for(int i=0;i<len;i++){
                if(a[i]){
                    check = 1;
                    if(a[i]*a[i]-(a[i]-1)*(a[i]-1)>dif){
                        dif = a[i]*a[i]-(a[i]-1)*(a[i]-1);
                        p = i;
                    }
                }
            }
            if(dif>0){
                a[p]--;
                k--;
            }
        }
        for(int i=0;i<a.size();i++) ans += a[i]*a[i];
        cout<<ans<<endl;
    }
}
/*
100
4
BEAGFCBACE
2
BACCF
2
BEGCGGB
11
DBDAHFGFEBG
7
EDCCGAEEHACC
3
HBGH
11
DBDCHFFCAEDC
6
GFBDCE
8
BBBDGEECGECD
4
CFEE
4
ABBEGH
3
GFHBC
3
BAEFDBA
2
EGECEFGHDA
11
FABCGDECDGDC
2
BHCGCCAHHA
10
FAHBHDEHFHCA
7
CEBEAFEFA
2
FCAFBEGAAE
6
DHDCGFC
5
CCFEA
3
FBGD
11
BDDFECHBGCH
8
FFFEEADF
5
GDDBBFHBFFAH
3
GAGAFBEH
4
GCACC
4
GDCF
11
BEFAHEEDHEHA
4
DHGBCGHDACE
2
EBBHGAG
7
GEEEAHDG
5
FBHEHA
8
GBABDGHAD
2
BEEF
4
DBGAADC
6
AAGGDDECDCHF
4
BEHHDBGF
5
GFEFC
3
BCBDADBAHHBH
3
FGHHEG
2
HEDFCD
4
AAAEA
3
BDGGA
2
EEAGHHDD
4
AGHCG
2
GCDGHDBEEF
5
FDABB
7
ADEACFCD
8
HFEDEBDFDBFB
2
BDEFEFGHD
5
BEBGCECAHC
7
FFCHBDGB
2
DBCHB
8
GADGCCAC
3
ADFBEAGD
5
CBBCEADDG
7
FAGDFAFBDDFG
3
FFDADBCDHFAC
3
BAAA
5
EBFDBHHHDEEE
3
GFEEH
9
DAGGCGFGAE
10
BGDGCGAHAGAH
2
AGHC
4
HBDCD
6
DEHDHCEH
2
EABEBHGG
8
HAHDCHGC
7
EEDFBBAAD
2
FADHEE
2
CHDGFHA
2
ADDA
2
HHEAG
8
CDDADADA
4
CABHGEBGAFC
2
GCHBFD
3
GDEA
4
BDBGCEBHFC
4
ADDB
8
EHGHGBHABCE
2
BDHHFB
4
AGGEFDFC
8
DFFGABHCD
8
GGADHHGAECDH
2
EBCEFGFCHF
5
CCBDFF
3
DDDG
4
FBGD
4
BCHCGADH
6
BBGGBEGDEAAD
5
AAGAG
6
BFACDGAG
8
DCHBBCECCCD
9
HGHDDDHHFBEC
3
HHBBEHCBCEB
4
EGDAGH
5
GEFFEBCDDC
5
EHHHBH
7
FAEAEBABDCA
========================================================
100
4
DBHEAHECHB
10
EECCEGAACEC
4
HBAH
3
EFFBGA
3
EHHC
4
HGFCCA
3
GHHEGC
4
FCCCB
3
EEEDEA
3
GCBFHH
5
FHDGFFCHADH
5
CDBCDEEHG
10
DGDEDEGCCGAE
2
EGBEH
4
GHFEH
9
ECHEDFBDFBCC
5
BGAEC
5
DEDAFEHEH
3
EFEF
6
GAHAAF
2
CDBAH
5
CHHEDDBHCCA
3
DGFB
9
GGGHGGFFG
2
DAAFHHC
4
CDAAA
4
DGGF
8
HDCCBEAA
7
HEGBCFF
8
CCGDCHGFA
5
FEBHHFCAGCB
5
HBAEAGABA
8
BGFGEEDBDCC
4
EFBDHF
4
EEBH
10
FGDEHCFHHEGC
7
CGDDECCCDA
8
ACFEHEAGEB
4
GFCHFAF
2
GGDBADAAB
3
DEEDFFAFHAC
3
CAGF
3
AACF
11
FGHBAEHCDBH
4
CDGG
7
AGAHHHBFAAD
8
BDGGACDGGH
9
DBBGGCDBBHG
7
FADGFBBDEEDA
4
HDDHDCBDB
3
GCABDGC
3
GDAABE
4
EGGE
2
BHEEFAFEDE
5
ADEEBE
4
AEHE
9
FHCBAAHCACG
4
DBFGBG
3
AGFHFA
9
FBFDHEHGC
4
BFFCEDCB
3
BBHGCBGGD
3
DFFBGAC
2
AGAB
6
BBHFEECCAB
6
GHEEHFDBHDDG
11
DDHBBHHAGBAH
6
CEBFDB
5
EBDCBF
3
GCACGG
6
HHGCCGA
9
FDAAHBCBEEDB
2
HFABH
4
FAGBFBECB
7
DFACEEFDDB
7
GHFFFAEEHEGH
7
GAACHCEEFCCA
8
HHCAECBH
8
FECDDFBE
3
CCBHD
2
CECFFACDAD
5
DBDEDBH
4
ABDCFGDEG
11
BCDGBHDEEDAH
2
BDFFCBHH
2
HAAD
6
EGHHBACBE
5
BGFFDF
12
BEHCEBCGDCCB
7
DACHCAAA
4
DEHCAHB
4
AFDAH
10
AGFAAHBEAAC
9
FHHDECAABGCG
2
AGDDFG
5
GAEAGGAF
5
DAEBFBBAHAB
2
CHBF
2
CDEAADGCA
2
DGBBGD
========================================================
100
3
FEEEBEB
2
GDCC
5
DHDFG
8
CGABFGFBDB
5
DBGDHADBH
8
DECBEBGFB
6
GFEGAFCDDD
5
EBEGGHFEE
4
GDCAEGDA
7
ACFHGFBA
2
EBBHD
3
EBCHAG
2
CCHCEH
4
EACCAG
8
GAGDHCGEGGA
10
ACHACAGCDBAH
3
BCGH
9
CABBFHDHAGFA
4
DAEB
2
CDHACG
9
HBEEBBFEDE
6
GCCCGGBE
2
GFDCGFCFAD
7
HFCHHBHGE
8
GHDFECCDFA
4
HDGAAD
6
GADDHF
3
DHAGHD
5
HHEBDC
7
DDGAABEECDE
2
FAHHAG
3
GGHCEFEHAC
2
ACGGB
3
AFGEE
6
HAFFFDF
4
FBBCDGBC
5
HFFDFGB
6
ECCGAGBBFGEE
8
AGBFDBGD
6
AFHDBHGC
4
EDDB
6
CECCDAEBED
2
FBGDHEABE
5
BBCEAHGFHGEA
2
FFDABCBD
2
BAHGGGCAH
2
EEFEFE
8
CFBCHFFE
8
AAHGEHDCA
2
FEBBB
3
AAAEFHHA
3
HEBGHDEG
5
GEAGAH
3
EAGB
5
BGCAG
4
BCBBDB
4
EBAHHADGFEE
5
EAFDE
3
AGFCFE
4
FBHHCBF
2
GHHD
3
BBFCD
3
EEGECGDAE
7
BCDEFFG
7
FBGGBGBA
3
GCHDEE
8
EFFHGDAH
3
ADFDH
7
DHEEACEEF
4
DFFHACBDEB
7
BBBAGDG
6
HGDADGAD
6
GDHFEFFDD
2
DEHEH
3
HGBHBA
2
ADDEH
2
CAGBHBH
3
HBEADC
7
DHBHGACEFAC
4
EAGA
4
FHFBB
4
AEFACDCEHEBA
2
GCAAHD
8
GCEFBFBCDAF
5
CBGFCFFD
3
FFFGHABFF
2
DEFDCFG
3
HEGADCFFF
7
CHCEFEFGEDH
3
AFEA
7
GCHGDFED
3
FDGF
2
FAAAADB
6
FBHGBHHA
7
DHAFCAEHA
2
BCGE
8
GDFCEDEBE
2
GHDGABFAEAHD
5
GHEAEEFF
6
BGDDAAE
========================================================
100
10
CDBAHEGHFCC
8
EFGBEBBBEEED
5
DDABEG
4
AGFFFCCB
4
CFDGAFECEG
9
AFADGAAAGB
6
FCCBBDEEBAG
4
HFBHDEDAECE
6
ABBACCH
3
EFCAGH
4
HFEHG
5
BEDHECHGEFC
5
HHEAB
3
BHEBCC
3
HDEF
7
GECEAHEF
3
HGEAGAAD
4
EEHFAGDHGEEE
5
GBAHEBF
3
DDFFH
4
AEGFGG
2
BEBBHB
10
FABGEFDBDB
10
BFAGFAAHAEG
10
BAGEDBBGDCD
2
FFCH
11
GFFAFGCACEEC
6
HHDGAHHBHF
3
BGABB
2
CDHCE
2
DFFCCDGB
5
EDGCA
4
EHADDE
2
FCCHEGCB
5
DEEBEG
7
CECCGFD
6
GHCGBFFFC
2
FEDFFF
7
DBBBDBD
4
CECC
4
ADCAD
4
FCHD
4
CFHH
3
FEAC
5
CABAHAG
4
CABGGFHBC
6
FACGCF
3
GHHBAB
10
CDEHACBEHCHH
4
GGBHEH
12
DGHCCBDEDEEE
5
FHEBB
3
CAEAHBEED
6
DEECEE
4
BCGHBHBDCAF
3
AGGCGH
7
DGAHGDEHH
4
HHAA
4
FCBFHHA
4
HFCF
4
CCAGFFAHCHDD
8
EAAGEHFCF
3
DABF
8
HCDFCDDD
3
HEEDBD
5
BEEGCEFB
2
BBDC
6
GADBCCADGFG
2
AGGADGCBGCF
5
BFGDDBA
2
AEBDGF
2
CBDHGHFG
9
DDCDCDEFAH
4
AGACAD
5
GDFDE
3
FFHFE
10
CGBBAHEFFEGH
8
HEAFEGFE
4
FGGEDEBF
2
BFADCDECEDC
8
HBFGEADECEH
5
HEABAGCBDBC
4
HFBAEDCAH
5
DDGCHBDGGA
8
EGAHEADBBH
4
HDEBAADGF
9
HGBGGAGEGF
11
FGCFABBBFBAC
5
EDHHBDGGBFH
9
HFDFGGEFCBB
2
DBGAH
4
FCCGHACD
5
CEFBGHHDF
6
FEAEFGD
2
GBDBECE
3
DHAAGD
9
CHCBFGEAFDBH
4
CBCC
8
BDCGHHGB
6
BBEGEGBDEAE
========================================================
100
10
CAECEFBAEGAG
4
GCEADG
4
HCAFDG
6
HHCEHB
3
FBHF
6
GECADB
6
BFGABDHBA
2
HCCE
4
FAGCAF
3
BGBE
3
BAADEFAH
4
BAAGHB
2
CDBBGHBFCG
2
FECFCAF
6
BAFBGD
6
EGHCBAEGCE
11
ABBHDGFDEAE
3
HFDGADGCBFBF
4
EAEE
11
CBGHGBDEGED
2
DBBEGEHHE
3
AFAACG
5
EEAAEAHABFF
8
DEGDBFED
2
GGAAAH
3
BFEB
6
DCFCHGEB
9
HCBFGBFEGAG
2
BGGFEFBBCCGD
2
FFCHGF
10
BBEFFHGGAE
5
CBAEB
4
HGCGFF
5
DHCHGED
4
FEFCB
6
CADBHFBEHD
4
CHDBEC
9
FHBAHCFEFA
2
AFABEEG
2
FACA
2
HCBCH
6
FDADBA
2
DCBEEEC
2
ADDD
3
EAGAEH
7
GADGGBHECHHG
3
AHBAHCFG
7
EFEFBECGDEB
2
BCAHACDCBFE
11
ACECGBCDHEGG
4
CHBB
5
CABGAC
8
CEGHBAHBCEBF
5
CHHFE
3
FCFGA
8
HAAHFBDHFED
7
FDGDABGGFH
5
FGGHEA
4
HBAFGHGADBC
4
EDAB
7
EHDAHHAB
2
GGEFEDCDH
6
ACDDCHDF
7
HCCDCHBC
8
DEAHFACDE
5
BGCFCECB
2
ABHBGAABE
4
ABADD
7
CCGABDF
7
DAHBHEBAG
6
BAFCEEBA
4
BBGDAFFA
3
HAGGG
10
GFDFBBFECE
11
BHGADGABHCHD
3
DFFFC
3
EAHGDBB
3
AEGF
4
EFGGFFA
6
ADFGFDB
10
GDFHEFDGAFH
2
FHBCGGE
5
FDEBABDBF
9
BHABHABFA
4
EDDDD
2
CBFAG
6
FFDEAA
10
CACCAHBDAD
6
GHGBBG
5
HAHFF
5
EGDEH
6
EABCGAHDFFA
2
DEHGAGC
9
AFEDFEAHGD
5
DFCFDHFB
2
HAHAGAE
2
FBFAAACCFDG
7
EEHDACB
8
HBABBAEGCC
7
BHAAHCFHA
========================================================
100
3
EBAEGHAFCBHB
4
HFADB
6
CHCDGFCECBBF
2
HFFBBCCCBA
2
CHDCDAG
4
GFFGBC
3
EBAHH
4
BBBDA
10
ECABGDDCDD
3
HFCE
4
EBAEG
11
EFCBAADCGFDE
6
AHDCCGE
2
BCHE
6
BHCEBDH
5
AEEHD
3
GGBGDBADDGDD
4
HDGDFCBB
2
AFECHCG
3
CGDBC
4
EBGD
2
EDAHHADE
4
GEFAADGGCFF
6
CDBFBFACG
2
EFGA
3
GCDHCDFDGGG
3
EGEBGEG
4
AHEDFEBBBAD
4
BCCCCFDH
7
FGFDCGEDDC
5
DBDBG
5
DEGGFGBHB
6
EBCEAEBBDD
2
AHGAHE
3
HCFAGFACHH
10
ABDHHFBAEGF
4
GCFBGA
2
EGDHHDADDH
5
HHCGEEGGDF
2
CHAHECHBCADE
10
HFDEDFDGHHAF
7
BHCEDDBDFB
6
DCGCGD
2
AFACBDGCD
2
DDDDDCACC
2
GAEHGECC
9
BBHEDEFBECC
2
EFHCFA
2
FHCDAABGBBHA
4
EDHH
2
FAFFCFC
7
ABEFCBCEG
2
GDEAFGGAGGEE
9
HBABHFAEAGGC
8
EBCBFEHEH
2
FEHCBEDFFD
5
EDAADCD
5
BFBEGDCGGGE
2
AFAACDGHEHGF
6
GDDBGHCBBD
7
HACBGAFAHAH
4
CFCEA
8
CCDAGGAED
4
DFBBHABEHDCF
4
EDGEH
4
EDGACBBBGFD
4
AHBEFEDAEAB
9
CCBDAGFHDEGF
10
FAAGGHFEEEG
4
FHFC
5
HGDGGFEHHGEH
8
HGBGEAHCH
10
AEBCCFEDDA
6
HHDFGCGBFF
10
HFGCGCAAEDD
2
BFGADDEHBB
5
DGBADH
2
FHCEBHBG
4
EAADDE
9
AHGEHAAGCF
2
AFCCBHBHHAG
3
GDAC
2
BHDACFFFFGD
3
CDGHAGBBB
9
DDHBGEGFCEC
8
CHACDEDFADAC
10
BFBCGAHEDE
3
EAABAADFD
6
HBFABEGECC
9
EABAHFCEEC
3
EGDDCFGB
4
GFFBGHBFEH
3
CEFBGBCCHE
6
GBHDADGABDE
5
BGEGHDBEF
2
ADGDEF
3
HEHD
4
AHECD
2
HAEBHFC
7
HBDDBHBC
========================================================
100
3
DFGE
2
CGGEFCBDHHB
8
HHAHHBDBHE
2
ADAAG
3
FFDF
9
HHDHGCGEFGB
4
FBGEDG
4
FCHHGGE
3
BECDBAD
3
DHADEGHAE
2
FGEBCBF
8
BGAHBGDGBB
3
GDDCHFFA
7
AHGGDBAAEE
3
HCAAECF
2
DBCCCFEEF
2
ADACHGF
4
EGAEDHBEAB
3
BDHEACDCBEEC
4
EFAGFA
5
BEACC
7
FACDGDGDH
4
GDEGC
12
EFCGEFCCCDAD
10
GAGBCBGDAF
7
DFEEDEEGDF
7
CDFHAAD
2
ADDG
9
BHBDADADE
5
DHCBEBDEEF
3
FDFEACD
2
HFAG
3
EDCHDGEDDGA
2
EBGACGGDDCC
4
DCAG
4
CFDDGAEA
5
FCGGAGHE
4
DDFGGGEHAA
2
BAGGG
5
GEAHG
7
EADCHEG
2
HAFC
4
CFHABG
4
GBBF
6
ECDAFFBGBEA
2
CFCAEEGCEEA
6
HFDBCH
4
BCEGEGAE
4
HHFDAGDBB
4
HHHF
5
FGCFF
4
ECADC
4
EDEFCHFB
4
EAHC
5
ACBCHAHAE
2
GEFDHABGA
7
HGDBEAC
4
EHAFD
5
GGEECBCHBCEE
8
BHCAGBDECBC
3
DCBC
11
DHFCFAAEDCH
4
EHBHEFHH
10
CBFAFEBCCCE
6
BCFDGD
10
EAFGGBFHCB
2
CAFACGF
3
GDFEECGEFGHD
4
FEBDGFED
9
FADEHEGGA
5
BGHHHDF
4
FCEHEBGHEFB
6
CHBDHB
2
AHCF
4
EHCDAEEA
4
ADEB
5
GEBFG
5
EEAGAFABBFD
7
BHGEHFBAGGEF
9
GDAFDBFGE
11
EADCAEADCHF
4
GBFD
3
AADDCFD
4
FCED
2
FGAA
4
FHDCD
4
FDHGDD
7
GFGBFDAHDGCB
2
BBGCDBDEDF
4
GDBE
8
FEGCEECC
2
HDGF
4
EBBGGAHBDFF
4
CAHFDEF
5
HEHEBECHGF
5
FABCBDCDBAB
3
HEHDDDCGCD
5
CEHFBD
11
BEHEBECCBAGD
4
CFDG
========================================================
100
3
CGEFGFB
7
HHEBFGBGFDGE
4
HEHG
2
ABAA
7
DGCGBBAH
4
GFBAEDHGF
3
BBHA
4
CADGDBBAFDH
2
FBBFABBFHCHH
4
GEABEADEF
8
CABGDFDABF
2
FDAACHBGA
11
ADHEECBDFBGC
7
EEHDHGFCD
2
EBFB
6
ABEADDD
7
BCFHGCBGGB
5
BDHCFEGAB
6
FGHDCB
2
BHEDC
3
ACAD
7
EAFDDDA
4
CDDEDC
9
HHGADGGHGDE
3
BGHFDHGAEF
2
AAEBEHBGC
7
GDBDDHFA
11
EBABCEAEFEBC
2
BHDHBDFB
3
FAFGACFBF
5
AFADGADCFH
3
FACDD
2
AEGACAA
8
GFBBCCEFDFD
3
GGADBDGFB
6
CGFHHCGEEHFA
8
FGFECCBCC
9
HCGEEEDED
8
BDAEFGCAAGG
2
CHAG
3
GAFA
6
CBGHCF
9
GCEHGADEA
3
EGEAAFEHFBAB
7
GGDEEAA
4
GDGFFGFDF
9
GBAGADDDE
4
GDBD
5
EEGCCAAEEE
3
EHGBDCH
5
GCHDBHBF
5
ADGFCHEED
2
AFAEE
6
FHDCDH
3
EBDF
6
FGGAEC
5
HCEFE
3
FHHCBEDGEDC
5
BBFDCCEFADG
7
ACAHHHGEH
4
CDBAC
4
EDADB
4
CEGDECGBBBGH
5
BAFGF
2
GBBEAEFBBHHF
3
CEDHCD
8
HFCACEHEFHAE
7
HFAGBAD
11
ACHBHBHGGEBB
6
CGBDBBGHHDFD
2
DHEGBCD
4
FDEAH
2
BCHED
8
DDGCADFDGGA
3
EGEHBGGG
6
FHAFDHH
4
CDCHEBFBGCBD
6
CDCBCDHEE
4
BEHFCCAEGGEE
2
ECFH
5
AEDGFEGH
4
EADBG
6
BFACGBF
2
GHEFDFBGC
2
EBGFDBBB
7
BEDGFHDA
3
GAAFH
4
HADHA
9
BCBAFCHCCCCD
2
HHDACAD
9
BGFBEEDHGAFB
2
ACEFAF
5
GGFHCGDFGA
10
CBCDFCDGCBBC
5
FCDGHDH
3
BBCEDDAD
2
DEAACDDEB
2
DCCFDA
3
FEGDC
4
AECG
========================================================
100
2
EBDFBAG
7
GBDEHECFFG
7
CGBFBGAHACEH
2
DGDACGCEF
7
DDFFBHEDDBE
4
DCCBB
2
FEEAEB
12
FDHACEDGBABE
2
EDEBGHH
5
BADHF
2
HHAAHE
9
CDBGEDBCB
2
ACGEAACACA
2
FEHAHA
5
CAECGADC
2
EACCDAC
10
GACGEBFHEAH
6
HHCCEAHDHFCD
8
DEFGAECBHEDD
3
HHGAFGAEG
6
EAFHFBBEFEH
4
FBBH
3
BGCFHDAHC
2
CAEDCAGAHHCH
5
DAAHCFDH
4
FCCGE
4
BFCDEA
6
FGDHGBF
6
EGGADF
7
DCDFBDDHEFA
2
HFFABB
3
ADGGFAFH
6
AGCEFDD
2
FACHCEB
5
AABFGDAB
7
ABDCFDEEHEBF
2
AAAGEGBEHAE
6
FAAEABCBGEA
3
CBBCBCFHHH
4
GDEB
7
HCABCFF
9
GEDDEBEECF
8
HBBDGCHAF
4
EAAHFBH
6
EFHBEBFBCA
3
ABHGDHCGAFG
2
FADGD
4
AFECBG
3
FHGAGCABH
6
BFBDFABHD
6
CFBFBCD
4
DGACCABH
3
DCADFCFGE
8
BEACDACC
8
CCDCECHACGG
9
BCBBFHAHCCH
5
GCGFGCGHG
2
GGGBG
6
CCFDCH
4
BACEF
4
FDCD
5
HCAHCAEEED
4
HBFB
2
FBFA
5
AEHBEABGHFFG
3
HBGB
2
CCBC
10
EGAGCHHGFE
5
AGGGG
2
ECCEC
8
EGEHBADAH
3
EDFE
3
ACEH
4
GGCAH
3
HHDF
3
EBEEGGCDBHF
5
HCDCEBGC
5
CBBBH
5
DGDAEBCCFAA
5
AFHFCEAEEH
4
BEEHH
4
FDEAB
5
HCDAADHEFGD
5
AAACFEDCED
9
DAGABCEFEAC
4
FGBBFFA
10
FAFEFEDBFFGD
3
ABFGE
2
CGDEEHFF
8
CFACBFGEDADC
3
BADAHC
6
ECHCDB
3
BAAC
4
BDDBFCDG
7
BHFDBFBADDFG
8
DFEEECEF
2
EHEDCEAH
4
HDEB
2
BHHECB
5
EGDDEFH
========================================================
100
3
GFEE
5
FBFBD
7
BHEGHADCG
6
BEFAEG
3
CFAF
6
ACBBGD
11
FCGBFDEEEEG
4
BBDCEHA
4
BECFE
5
HDCAGFBHE
2
EHGF
3
CAFAEC
2
HCAF
9
BBHFAADBFHB
7
GHGFCCHC
5
GDCAH
11
GHACCFEAFGDE
2
FHAF
6
HECGEHAB
5
HDGFDE
5
GEFGAFFFFEDB
5
DGHBEE
7
CEEBGAH
2
CEAGBG
5
FADBG
11
CCFFHEFEFBF
4
ADDE
6
FABAEGAD
3
GBGD
4
AHFEECDGCAGA
2
AFHH
4
AGEF
4
HHFECGCAADC
3
BHFBACGF
4
BCDDHAD
2
EHBCHDCF
4
HGHC
4
EAFGE
2
BCEAA
5
FBAFHD
4
CBHG
5
GACGH
5
HAAFAB
10
HCHDGHFACFF
6
DEAHABHDH
6
GHDGAFCDAH
7
FAFBFHGECFEC
4
EDCE
7
DCDDBGGEFBBB
2
GHHC
3
DCBHF
7
GGFDDAD
6
FHDAEEEBCBHB
10
AHDCBAEEDCFG
9
GFGEBHFBF
3
CABCAHDHH
5
DGDFDCE
3
DHHHBDGEEDG
5
AGBDB
7
FBFDECA
9
CGEFBCBBEE
5
HFCEHBEHC
2
DAFAAGB
5
FHHEFFFE
7
HCCBAHBG
3
BCAGCGABDC
2
GGHDG
7
EDFBHECGCDAH
3
GCACGGCCD
7
HHAGHGGEC
11
HBHBHGEDFFDA
6
BEFFEFCBBHE
6
AHBCFAD
3
CGCAD
5
EDDFG
2
FGEEB
3
HAHGH
2
FFDE
4
EAHGGFACHHH
6
ABHFBA
7
CFBCFGFG
4
CHGHEH
3
BFHFFF
8
HHHDBBGHABD
9
ECGEDFDDDHDC
4
BDGCAAH
5
AEAAGDB
4
BHBDHDAHAFAA
5
GGDCD
3
FHBAA
4
GCFA
3
FCFGBH
2
EECBG
8
FEFFBEDB
4
FGHCEHHB
4
GFECH
6
ADBAFHBAC
7
CDDAAFGH
7
GGAFDECAHHDA
2
BFDHBCHDCA
========================================================
100
4
BBDCFFHCG
5
FECBEFF
3
FBFECF
5
FEEAGGHFH
3
CEDADCC
5
HEGGBAHFEHF
5
CFFBDABGHB
3
EDGBHE
5
BHGEA
8
BDHCHECABA
3
BFAFB
4
HCHGEGB
4
AFEGHH
4
HHGGGGF
2
AHHA
7
AFGCGFCABGEC
2
HFGFABBD
5
DBEGHDHGBEB
2
GCDFE
2
DGBHGBB
10
ABHGABHEGAFA
5
BAEAGBAFEC
4
BADGA
7
EHFEFGGFG
2
CFHC
4
CCBGEDHAGF
6
EHEGADD
6
HCFCHCF
4
GFEDFG
3
EFCFBG
4
EHDBG
11
BCEBBGCDDAC
8
BDDGBHEHFEAF
3
HEFCFAFBDAA
2
BAAA
5
FHAAAAC
2
HEDAD
2
AFFHEFFHA
4
CFBE
3
DEEGHFEAAC
10
GBBBAAHHGAD
3
CHEFAAHCBGC
2
DGCDGAGHCHBC
4
EGDAGDDB
6
GCHGGCFAGG
2
CCBEABEA
9
BEGBCGEEGFHB
8
EDDAEAEEGCG
8
BEFHEFHGG
8
EEHGGCHABD
5
FDEHA
3
EHCHH
3
BACD
5
HEAFD
5
DCFAGHHGCBE
8
HFCEHDHA
3
EAFC
3
FDFHEBCB
3
HFBGEEHFBC
4
HDAEF
2
FDDAAA
3
BGCFBGEDB
4
CBGHCE
7
ABBGGFDEGE
5
HFCDGB
4
AAEDHD
5
HEHHBDBC
5
BAGBACCH
3
AEGDA
4
CBFGEBD
5
CEEAA
3
FHBD
2
FAGAFH
9
DFDEGFCCAC
9
CGCBEFEDAFCE
12
DHCBCEDCAHBH
7
FABGEGBDD
2
CGFA
3
EFGCBAGHE
3
FCGABBE
2
FHGGGGF
3
BDAE
12
ACDDBGEGCGFC
6
CEDHDHC
3
AFEFHG
3
FBGFCAHFCHD
2
HGCB
2
BBADE
2
DDBF
4
BFBHFEH
10
FEAFGCBHBCD
2
HHEGEHFGFEAF
2
DCADHDAHCCFE
2
GDBHDG
11
CEAGADEAGGFB
11
FDCCEGCHEHG
3
AAGFCGDCD
4
GEHHA
4
CBHACF
3
DCFFAGF
========================================================
100
5
BCHCGCACC
10
HBCFEEEABFDA
3
CHAHBDCAHBDA
7
DBGHCFBGCCDC
7
BFCGEBEHGB
3
DBBHEGE
8
BCCEGGHCHH
2
HBACGADEGA
4
FAEBACA
8
DCADGDAH
8
HGEHHFBA
2
DDDHFCBDAF
12
CBCDEHDAFGDG
9
HDBFBBCDF
3
EEFCEBFD
5
CBBECH
8
AAHEEHCEHHE
8
FFDAHBDFACAC
4
GEBGB
3
BCGBGDF
6
CCAFHFD
5
CBCECCFC
2
EBHEB
4
BBEEFGBBADCB
4
FFCACDEDAGC
2
HGBG
11
CEGBAHEFBDH
4
EBFBAHHF
2
CDCEHHHDB
11
DFAEGCDDGAB
3
CEHCD
5
DEHABH
4
HACCBG
9
BHBEDGHAGED
2
DDGBADDFE
2
HFDGFAD
2
EEFH
10
HBEHBBADHCG
4
ABBEC
4
DDHE
9
HHCDEDFHD
4
HHEEEBAAAG
6
DBEGEABDDAG
4
DFAHF
4
ADHC
6
BEGGCAE
10
GCCBAGEBBGD
5
EABDACHECAC
4
AHAF
6
BFEFCEAEGAHF
4
HCFGHFB
3
BAHFGEFAG
2
CGAEAB
6
ADGFBH
4
DHAEDGFDHGF
6
HCAGEFFEC
2
AHDBDGCB
5
DEGFEDDF
2
GDCEA
9
HAHEHCHEFBFF
2
GEBBCCGFB
2
FCAHF
4
FDCCC
7
DBFBFGHAHD
4
GHCE
8
FDBGHBBFFA
10
BFBBBGHFFCA
5
GBEAAHGB
3
DBHCHC
5
ACDAHBAFGC
3
DHECHCGHFEEF
2
BFGFAF
5
DDFDFF
5
BBEADHGDF
2
HCGF
10
BBEDDCEBHDGF
5
CADBE
9
BABFHAHGHGG
10
AGADHCEGAEDC
9
CAAGFCFGHFHG
6
HEAHHABDH
4
DFACDB
4
EGBCGF
3
AHEAA
2
CAFGDC
2
ABHGE
7
DBAAHDFCFCD
7
DHEAEDF
8
AAHEFCECC
3
DBCABAGGBB
3
BEFBCE
3
BDAAG
6
HDHCHAEF
5
DBDGDGBG
4
GAAEGFDFCB
5
CEBFD
6
HEGHBHF
10
HBHHCBDDEDCE
2
AFCGG
7
GCABGEDGDH
========================================================
100
6
ABFFFF
12
ADEGEGGCAFAA
8
DGFAEECEE
4
GABAH
4
BDHFECHCHGBG
8
CDFEHBGACBH
8
EGAAABAFFHE
4
AHGAE
4
DGEHEBH
7
ACBBECFGEH
2
BBHA
3
GCEA
3
AHEEH
5
DAEEF
3
ACFAADF
3
DCGCFGBD
3
ACBCDDBFECG
4
CGBHAGECB
3
DFBHE
4
CDGDCHHB
5
DFAAHGEBHDAB
3
HBEAG
7
HAHDCHACF
3
DEFFC
8
GFGGFDFAA
7
DBBDFDHGFE
4
CGGF
2
BECD
2
BEDDBCA
3
BABCBG
4
DBFC
6
HFCBEABDH
6
AEGHBF
12
CCEDFBGABFBB
2
FABEA
3
EFAB
7
HCACGHG
3
HCEAGA
4
EDDBFCCG
9
DEABAFCDH
10
FECAHBHDCA
7
HHCBBCHFE
2
DAAE
2
ABAAFCDHE
7
DDCGFFB
5
HDCADCCDEE
6
ACAFABGE
7
ACHGCDAD
4
HFBGGFBH
2
DHCD
9
FAABGDBCCF
2
EADA
7
AABCDFE
11
HCCAHHDBEBG
10
GDCFBFEDFBCC
5
CHFBBG
8
CFCEAECB
4
HHEFG
5
FDACDG
8
BBDBFEGD
5
GEGHHHCECEBC
6
BCDEFG
6
CDEDHE
5
ECCEDGF
3
CFFCHDB
6
GGECEGHHA
10
BEDFAFBCDFG
4
EEAFEBHDDAH
3
EBACGGG
9
BAFCBFEGG
5
HAHDBGHEFGD
4
HAADBBC
6
DDGGGHCGE
5
DAGHB
4
DFEBDGEH
3
GEFFGFH
3
GAGEEB
8
HBGBHHAG
7
FFAAGAB
4
EDGEFBFABA
2
FAEEAD
5
HCFAF
8
EGDDHCFAG
6
HAFDHGCF
4
CGHE
5
FHGCAFD
5
GFBBHGHBCBFH
2
BCFEHCHHCBB
2
FGFAGBA
4
DBEDFGAD
4
HHHH
6
BAFHHBCBEE
4
AEAGD
5
HHGCE
7
GDFDDHF
2
DGDB
9
AEHAFHDEHAH
5
CFFFGEBACAE
3
CEBBF
4
CAECFF
========================================================
100
7
DGFACAHFC
5
CFFGACB
4
ADFH
9
AHBBECFAEGDD
2
HGHFFDE
8
FFAHFCFB
3
AFDGG
3
DFGD
7
FBDBFDDH
2
GECACCB
6
BCHDHFAGBGG
6
FHBACFDGGEG
6
BDFCEEGBH
8
BBEAHGFFGEB
7
GFEDDBFAGCC
4
CBBDGBAADBE
9
BGGGBGDBAG
8
HAABEEGC
6
CCDEFE
3
GHGBBF
6
DGCDDFHAGG
6
DFAEDBH
5
HBFEBAHCB
6
GFBHCH
2
GHFDDCCD
8
BHBBGAHADG
8
HGACGCDHGD
3
ECGGHG
4
AAHF
6
DFBGGBCGBHB
4
BGBBC
4
GCBDBHAFCFA
7
DEDGCCHED
5
BHCACA
6
AGDCEA
2
GEBFHF
6
AHFEHBGFD
3
FCCEEC
10
ECCGHACEHD
9
BDGECBBHBGD
6
DBEAGE
2
EGHGGDFCBCBD
6
HAEBGCHC
5
ADCAFGE
8
DHCEFEEAF
5
DEGGGD
4
BHDE
3
BAEHDDDFFBD
4
HDCCACG
6
HCGGAHCDCDF
4
DEEDFAG
4
AFCHGH
4
EFAHEHHA
4
BACDGFEFGH
3
EFAE
8
CGCCDFGAACGG
9
ACHDBBBDA
4
FEHAADEDBA
7
ABBDHBHEH
2
CDDBAECD
6
ECFEFFDCHEG
3
CGAE
5
AFDCFCDCH
4
EDHF
3
FCDBFE
7
EAAEHHC
7
ACFCCAFDCH
5
CAABDBC
2
AGFBHCC
3
GBBFHDBAHB
6
DFADFHGFBCD
2
HGDCADABADCG
8
HGEDGHADFGEB
5
AFDBGGDBAHAE
4
GAGDCACCFC
6
EGDBDGEFB
10
EAECGEDAFDHG
6
FAACDGGD
4
EHAGCGFCB
5
HAGBGBE
5
GCECCG
2
AEACDAB
5
BGDCFDFE
2
CFDADHBGDGAC
7
BCEFAFCEDABD
9
EHFHDABDCHA
8
BGGDBGGAEHC
5
CEDFEHH
11
DCHEBEHBDFH
6
BGFFBB
3
CDECB
4
DCGGDCAAACBF
4
AACCFD
3
DCBECADGHDA
4
ECDDGCEG
3
EEFCGAH
4
HAEBBCEBCHBH
9
CHFCBEGDDGC
6
BHEBDHCAFB
2
HFHCCGHCBHA
========================================================
100
2
GFCD
5
AGAEEEB
5
AFGEB
5
GDDHEGDF
8
HDEGFFDDGBHA
8
BHBBHAEAH
6
GBAADDGGECD
11
FADFHDAAGBCD
2
GAGDCGB
5
EHCCHEBAFBBB
8
AEEGFDGDCD
6
CFFHEBAA
2
CHGAFAG
6
FGHHDGBEBFDF
3
FDEDH
4
GAEC
9
DAEAEGABFGB
7
CGCADCAHHD
8
HDEADGFEHF
4
HEAH
4
FDEGCD
11
EBDHABCHDFH
10
EDFBDDAGCAG
3
BGECGG
5
HDHHDDCEBDE
10
FHDDGDHDFG
3
EAFDDAF
5
GBDGGAH
8
BGDDFDDBCFAG
5
EDGHCGFFBBG
8
BEHFDDEF
2
HHGCF
4
ADHA
2
FGAG
8
GHBDEHBB
6
HHFADBC
2
GBCC
3
BGDBAH
6
GFGAGBDAAHA
6
DFCCBHG
9
BBCBEDCDBAD
2
AGAFEG
3
GCCGFBFD
3
HGBGHHCCD
2
DGCFC
4
FCCFDCACHHFC
10
FEDBGEGFCA
7
EFBGAFFBHFCH
7
GAFBAFH
9
CCCAGHEBH
5
EEEDBEFEGFG
9
DHGFHGAGBD
4
CFAD
2
HCFCABHBE
3
FGBDFDHA
3
HACGHABAAC
2
FDEAAHH
5
FGEGC
5
FBAHEG
3
DDEADHF
7
EEBFBEB
2
HCBBFEBEH
9
HFFCGGEBF
2
FCAEGHDDCDC
6
DCABFAGAFGD
8
ACCEHHEHA
5
DFEDGEAHAFGB
6
FGCBBFHD
3
EDDACEDGHHCG
2
BFECGEGAA
6
FHAGEHDEHHFG
6
FEADEFAFCC
4
BBHDFEEE
2
CBEAE
5
BCFGB
2
FDHAGFDCCCB
3
GBGA
5
CGBACEGF
2
ACCCFGGEHDHB
3
DEEG
2
GGGEDHF
3
GBBA
2
ABEAEED
4
CHDB
7
BDFDCEEC
10
EBFHFCCGDD
3
CECACDA
4
FGGBGAGC
7
CFDAEBD
5
EEAAGBBBEBH
3
GHAEFFGF
2
CCBHC
5
DCECA
9
BFDBAFHBHF
5
GGBAG
5
EABECGF
2
EAFEF
6
CCDFCH
6
CDCHEBDG
6
FHGHDFHHCG
========================================================
*/