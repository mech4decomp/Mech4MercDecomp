/*
 * FUN_00723bd0 (extent 0x723bd0-0x723cb2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_0087dde4;
extern int    g_0087dde8;
extern int    g_0087e1ec;
extern int    g_0087e1f0;
extern int    g_008aaea4;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);

__declspec(naked) void FUN_00723bd0(void)
{
    __asm {
        mov    ecx, dword ptr [g_0085b4a0]
        xor    eax, eax
        cmp    ecx, 1
        mov    cl, byte ptr [g_0087bc35]
        jne    L_3c18
        test    cl, cl
        je    L_3c0e
        mov    ecx, dword ptr [g_0087dde8]
        cmp    ecx, dword ptr [g_0087dde4]
        je    L_3c8e
        mov    eax, dword ptr [ecx*4 + 0x87ddec]
        inc    ecx
        and    ecx, 0xff
        mov    dword ptr [g_0087dde8], ecx
        ret    
L_3c0e:
        push    7
        push    0x20
        call    FUN_0070e220
        ret    
L_3c18:
        test    cl, cl
        je    L_3c3f
        mov    ecx, dword ptr [g_0087dde8]
        cmp    ecx, dword ptr [g_0087dde4]
        je    L_3c8e
        mov    eax, dword ptr [ecx*4 + 0x87ddec]
        inc    ecx
        and    ecx, 0xff
        mov    dword ptr [g_0087dde8], ecx
        ret    
L_3c3f:
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        push    esi
        je    L_3c52
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        je    L_3c5f
L_3c52:
        mov    eax, dword ptr [g_0087e1f0]
        cmp    eax, dword ptr [g_0087e1ec]
        jne    L_3c6f
L_3c5f:
        push    7
        xor    esi, esi
        push    0x20
        push    esi
        call    FUN_0070e1b0
        mov    eax, esi
        pop    esi
        ret    
L_3c6f:
        mov    esi, dword ptr [eax*4 + 0x87e1f4]
        push    7
        inc    eax
        push    0x20
        and    eax, 0xff
        push    esi
        mov    dword ptr [g_0087e1f0], eax
        call    FUN_0070e1b0
        mov    eax, esi
        pop    esi
L_3c8e:
        ret    
        nop    
        mov    cl, byte ptr [g_0087bc35]
        xor    eax, eax
        cmp    cl, al
        je    L_3ca7
        mov    dword ptr [g_0087dde8], eax
        mov    dword ptr [g_0087dde4], eax
        ret    
L_3ca7:
        mov    dword ptr [g_0087e1f0], eax
        mov    dword ptr [g_0087e1ec], eax
        ret    
    }
}
