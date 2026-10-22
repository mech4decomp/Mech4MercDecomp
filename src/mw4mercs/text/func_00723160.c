/*
 * FUN_00723160 (extent 0x723160-0x723359) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085b490;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_0087dd1c;
extern int    g_0087dd20;
extern int    g_0087dd28;
extern int    g_0087dd38;
extern int    g_0087dd3c;
extern int    g_0087dd44;
extern int    g_0087dd48;
extern int    g_0087dd4c;
extern int    g_0087dd54;
extern int    g_0087dd58;
extern int    g_0087dd5c;
extern char   g_0087dd60;
extern int    g_008aaea4;

__declspec(naked) void FUN_00723160(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [g_0087dd60], 1
        mov    dword ptr [g_0087dd20], eax
        mov    dword ptr [g_0087dd1c], ecx
        ret    8
        nop    
        nop    
        nop    
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_3259
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_31fd
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_31a6
        mov    ecx, dword ptr [g_0087dd3c]
        mov    dword ptr [eax], ecx
L_31a6:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_31b6
        mov    edx, dword ptr [g_0087dd38]
        mov    dword ptr [eax], edx
L_31b6:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_31c6
        mov    ecx, dword ptr [g_0087dd4c]
        mov    dword ptr [eax], ecx
L_31c6:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_31d6
        mov    edx, dword ptr [g_0087dd48]
        mov    dword ptr [eax], edx
L_31d6:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_31e6
        mov    ecx, dword ptr [g_0087dd44]
        mov    dword ptr [eax], ecx
L_31e6:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_3356
        mov    edx, dword ptr [g_0087dd28]
        mov    dword ptr [eax], edx
        ret    0x18
L_31fd:
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        mov    eax, dword ptr [g_0085b490]
        je    L_320f
        mov    edx, dword ptr [eax + 0x10]
        mov    dword ptr [ecx], edx
L_320f:
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        je    L_321c
        mov    edx, dword ptr [eax + 0x14]
        mov    dword ptr [ecx], edx
L_321c:
        mov    ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        je    L_3229
        mov    edx, dword ptr [eax + 0x18]
        mov    dword ptr [ecx], edx
L_3229:
        mov    ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        je    L_3236
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [ecx], edx
L_3236:
        mov    ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        je    L_3243
        mov    edx, dword ptr [eax + 0x20]
        mov    dword ptr [ecx], edx
L_3243:
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        je    L_3356
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x24]
        mov    dword ptr [ecx], edx
        ret    0x18
L_3259:
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        mov    dl, byte ptr [g_0087bc35]
        je    L_32d6
        test    dl, dl
        jne    L_32d6
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        jne    L_32d6
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_3285
        mov    ecx, dword ptr [g_0087dd54]
        mov    dword ptr [eax], ecx
L_3285:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_3295
        mov    edx, dword ptr [g_0087dd58]
        mov    dword ptr [eax], edx
L_3295:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_32a3
        mov    dword ptr [eax], 0
L_32a3:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_32b1
        mov    dword ptr [eax], 0
L_32b1:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_32bf
        mov    dword ptr [eax], 0
L_32bf:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_3356
        mov    ecx, dword ptr [g_0087dd5c]
        mov    dword ptr [eax], ecx
        ret    0x18
L_32d6:
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_32e6
        mov    ecx, dword ptr [g_0087dd3c]
        mov    dword ptr [eax], ecx
L_32e6:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_32f6
        mov    ecx, dword ptr [g_0087dd38]
        mov    dword ptr [eax], ecx
L_32f6:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_3306
        mov    ecx, dword ptr [g_0087dd4c]
        mov    dword ptr [eax], ecx
L_3306:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_3316
        mov    ecx, dword ptr [g_0087dd48]
        mov    dword ptr [eax], ecx
L_3316:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_3326
        mov    ecx, dword ptr [g_0087dd44]
        mov    dword ptr [eax], ecx
L_3326:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    ecx, dword ptr [g_0087dd28]
        je    L_3336
        mov    dword ptr [eax], ecx
L_3336:
        test    dl, dl
        jne    L_3356
        mov    edx, dword ptr [g_0087dd3c]
        mov    eax, dword ptr [g_0087dd38]
        mov    dword ptr [g_0087dd54], edx
        mov    dword ptr [g_0087dd58], eax
        mov    dword ptr [g_0087dd5c], ecx
L_3356:
        ret    0x18
    }
}
