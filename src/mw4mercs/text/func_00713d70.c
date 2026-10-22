/*
 * FUN_00713d70 (extent 0x713d70-0x713e25) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0087bc84;
extern char   g_0087c254;
extern int    g_0087c26c;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00714040(void);

__declspec(naked) void FUN_00713d70(void)
{
    __asm {
        mov    eax, dword ptr [g_0087bc84]
        test    eax, eax
        jne    L_3d8b
        push    0x7a2368
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3d8b
        int 3    
L_3d8b:
        push    esi
        push    edi
        mov    edi, 0x20
        mov    esi, 0x84
L_3d97:
        mov    eax, dword ptr [g_0087bc84]
        mov    ecx, dword ptr [esi + eax]
        push    ecx
        push    edi
        call    FUN_00713cc0
        sub    esi, 4
        dec    edi
        cmp    esi, 4
        jne    L_3d97
        mov    eax, dword ptr [g_0087bc84]
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        mov    eax, dword ptr [g_0087c26c]
        dec    eax
        cmp    eax, 7
        pop    edi
        mov    dword ptr [g_0087bc84], edx
        mov    dword ptr [g_0087c26c], eax
        pop    esi
        jbe    L_3dd6
        push    ecx
        call    FUN_006f4230
L_3dd6:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3e24
        push    esi
        push    edi
        mov    esi, 0x20
        mov    edi, 0x87c250
L_3df5:
        mov    al, byte ptr [esi + 0x87c0d0]
        test    al, al
        je    L_3e0f
        mov    eax, dword ptr [edi]
        push    eax
        push    esi
        mov    byte ptr [esi + 0x87c0d0], 0
        call    FUN_00714040
L_3e0f:
        sub    edi, 4
        dec    esi
        cmp    edi, 0x87c1d0
        jne    L_3df5
        pop    edi
        mov    byte ptr [g_0087c254], 0
        pop    esi
L_3e24:
        ret    
    }
}
