/*
 * FUN_00723b40 (extent 0x723b40-0x723c8f) - gen via tools/gen_bigfunc.py.
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
extern void __cdecl FUN_00723a30(void);

__declspec(naked) void FUN_00723b40(void)
{
    __asm {
        cmp    dword ptr [g_0085b4a0], 1
        mov    al, byte ptr [g_0087bc35]
        jne    L_3b6b
        test    al, al
        je    L_3b5f
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00723a30
        ret    4
L_3b5f:
        push    6
        push    2
        call    FUN_0070e220
        ret    4
L_3b6b:
        test    al, al
        je    L_3b7c
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        call    FUN_00723a30
        ret    4
L_3b7c:
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edx
        call    FUN_00723a30
        mov    esi, eax
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        mov    al, byte ptr [g_0087bc35]
        je    L_3bb6
        test    al, al
        jne    L_3bc4
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        jne    L_3bba
        push    6
        xor    esi, esi
        push    2
        push    esi
        call    FUN_0070e1b0
        mov    eax, esi
        pop    esi
        ret    4
L_3bb6:
        test    al, al
        jne    L_3bc4
L_3bba:
        push    6
        push    2
        push    esi
        call    FUN_0070e1b0
L_3bc4:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
    }
}
