/*
 * FUN_007182d0 (extent 0x7182d0-0x71840d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085b4a0;
extern char   g_0087bc35;
extern int    g_0087c6c1;
extern char   g_008aaac1;
extern int    g_008aab18;
extern int    g_008aab1c;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e1d0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_0070e230(void);
extern void __cdecl FUN_007426f0(void);

__declspec(naked) void FUN_007182d0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aab18]
        test    ecx, ecx
        je    L_82f1
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_82e8
L_82e0:
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        test    eax, eax
        jne    L_82e0
L_82e8:
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    4
L_82f1:
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [g_008aab18], ecx
        ret    4
        nop    
        nop    
        mov    al, byte ptr [g_008aaac1]
        push    esi
        push    edi
        xor    edi, edi
        test    al, al
        je    L_83a3
        mov    esi, dword ptr [g_0085b4a0]
        cmp    esi, 1
        je    L_83ac
        mov    eax, dword ptr [g_008aab1c]
        test    eax, eax
        je    L_838a
        cmp    byte ptr [eax + 0x18], 0xf1
        jne    L_837a
        mov    eax, dword ptr [eax + 4]
        push    ebx
        mov    bl, byte ptr [g_0087bc35]
        push    eax
        push    edi
        push    edi
        push    eax
        push    9
        mov    byte ptr [g_0087bc35], 1
        mov    dword ptr [g_0085b4a0], 2
        call    FUN_00701f20
        push    eax
        push    7
        call    FUN_00701f20
        push    eax
        push    0x8aab0c
        call    FUN_007426f0
        mov    eax, dword ptr [g_008aab1c]
        mov    byte ptr [g_0087bc35], bl
        mov    dword ptr [g_0085b4a0], esi
        pop    ebx
L_837a:
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_008aab1c], 0
L_838a:
        mov    eax, dword ptr [g_008aab18]
        test    eax, eax
        je    L_83a3
        mov    ecx, dword ptr [eax]
        mov    dword ptr [g_008aab1c], eax
        mov    dword ptr [g_008aab18], ecx
        lea    edi, [eax + 4]
L_83a3:
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_83e5
L_83ac:
        push    9
        push    0x10
        call    FUN_0070e220
        test    eax, eax
        je    L_83e0
        push    eax
        push    0x87c6ac
        call    FUN_0070e230
        mov    ecx, dword ptr [g_0087c6c1]
        test    ecx, ecx
        mov    eax, 0x87c6ac
        je    L_840a
        pop    edi
        mov    dword ptr [g_0087c6c1], 0x87c6c5
        pop    esi
        ret    
L_83e0:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
L_83e5:
        test    edi, edi
        jne    L_83f8
        push    9
        push    0x10
        push    edi
        call    FUN_0070e1b0
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
L_83f8:
        xor    edx, edx
        mov    dx, word ptr [edi + 0x12]
        add    edx, 0x19
        push    edx
        push    edi
        call    FUN_0070e1d0
        mov    eax, edi
L_840a:
        pop    edi
        pop    esi
        ret    
    }
}
