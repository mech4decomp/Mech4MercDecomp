import re
import subprocess
exts = {
 'func_00424f80':(0x424F80,9972),'func_0042ca60':(0x42CA60,10564),'func_00432470':(0x432470,10288),
 'func_00436b40':(0x436B40,10264),'func_0043a770':(0x43A770,10620),'func_0043ed30':(0x43ED30,10592),
 'func_004428f0':(0x4428F0,8096),'func_00445530':(0x445530,6060),'func_00449410':(0x449410,7364),
 'func_0044b5d0':(0x44B5D0,5956),'func_0044d750':(0x44D750,8920),'func_004513b0':(0x4513B0,8808),
 'func_00455da0':(0x455DA0,7696),'func_00459210':(0x459210,6336),'func_0045e340':(0x45E340,8924),
 'func_00462000':(0x462000,8840),'func_00465820':(0x465820,6168),'func_00468560':(0x468560,9620),
 'func_0046c530':(0x46C530,9584),'func_004701a0':(0x4701A0,7080),'func_004732e0':(0x4732E0,8840),
 'func_00476d70':(0x476D70,8720),'func_0047d1f0':(0x47D1F0,5604),'func_0048ca40':(0x48CA40,4822),
 'func_004979e0':(0x4979E0,4136),'func_0049e530':(0x49E530,4136),'func_004a7270':(0x4A7270,4497),
 'func_004b8420':(0x4B8420,5443),'func_0050f560':(0x50F560,5381),'func_0054fdb0':(0x54FDB0,6804),
 'func_005816f0':(0x5816F0,7000),'func_00630fe0':(0x630FE0,25868),'func_006505a0':(0x6505A0,8116),
 'func_006b4b20':(0x6B4B20,25028),'func_00714040':(0x714040,6328),'func_00719b10':(0x719B10,16765),
 'func_0071f310':(0x71F310,4817),'func_0073e160':(0x73E160,5564),'func_007603e0':(0x7603E0,197),
}
results = {}
for f,(va,sz) in exts.items():
    obj='build\\obj\\%s.obj'%f
    r=subprocess.run(['python','tools/diff.py','--func',hex(va),'--obj',obj,'--exe','reference/MW4Mercs.exe','--size',str(sz)],capture_output=True,text=True)
    pct=None
    for l in r.stdout.splitlines():
        m=re.search(r'Match\s*:\s*(\d+) bytes \((\d+\.\d+)%\)',l)
        if m: pct=m.group(2)
    results[f]=pct
    print('%-24s %s%% %s'%(f,pct,'OK' if pct=='100.00' else '<<< NOT 100'))
print()
bad=[k for k,v in results.items() if v!='100.00']
print('TOTAL:',len(results),' 100% OK:',len(results)-len(bad),' NOT-100:',bad if bad else 'none')
