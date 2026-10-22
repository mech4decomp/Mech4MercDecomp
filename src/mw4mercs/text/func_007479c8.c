/*
 * FUN_007479c8 (extent 0x7479c8-0x747a50) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b2804;
extern int    g_008b2838;
extern int    g_008b287c;
extern void __cdecl FUN_00735e30(void);
extern void __cdecl FUN_00749190(void);
extern void __cdecl FUN_007492a0(void);
extern void __cdecl FUN_0075c060(void);

__declspec(naked) void FUN_007479c8(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008b287c]
        test    esi, esi
        je    L_7a20
        mov    bl, byte ptr [esp + 0xc]
L_79e0:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_79ee
        mov    ecx, esi
        call    FUN_00749190
L_79ee:
        test    bl, bl
        je    L_7a00
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_7a00
        mov    ecx, esi
        call    FUN_00735e30
L_7a00:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_7a20
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_79e0
L_7a20:
        call    FUN_007492a0
        mov    eax, dword ptr [g_008b2838]
        test    eax, eax
        pop    esi
        pop    ebx
        je    L_7a3a
        mov    ecx, 0x8b2830
        call    FUN_0075c060
L_7a3a:
        mov    eax, dword ptr [g_008b2804]
        test    eax, eax
        je    L_7a4d
        mov    ecx, 0x8b27f8
        call    FUN_00735e30
L_7a4d:
        ret    4
    }
}
