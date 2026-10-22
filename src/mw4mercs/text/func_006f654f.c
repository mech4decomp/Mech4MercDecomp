/*
 * FUN_006f654f (extent 0x6f654f-0x6f65e3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern int    g_007b6ed0;
extern char   g_008493d6;
extern char   g_008493d7;
extern int    g_008aac90;
extern int    g_008aac94;
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5c30(void);
extern void __cdecl FUN_00738dc0(void);

__declspec(naked) void FUN_006f654f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    al, byte ptr [g_008493d7]
        test    al, al
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        jne    L_657a
        mov    al, byte ptr [g_008493d6]
        test    al, al
        je    L_65ad
L_657a:
        mov    eax, dword ptr [edi]
        push    0x79fa18
        push    eax
        mov    ecx, esi
        call    FUN_006f5b80
        test    eax, eax
        je    L_65ad
        push    eax
        call    dword ptr [g_008aac90]
        cmp    eax, -1
        je    L_65ad
        push    eax
        call    dword ptr [g_008aac94]
        mov    ecx, dword ptr [g_007b6ed0]
        mov    edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x10]
L_65ad:
        push    edi
        mov    ecx, esi
        call    FUN_006f5c30
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    byte ptr [g_008493d7], 1
        jne    L_65cc
        xor    al, al
        ret    
L_65cc:
        mov    eax, dword ptr [g_007b6ed0]
        push    eax
        call    FUN_00738dc0
        neg    eax
        sbb    al, al
        inc    al
        mov    byte ptr [g_008493d7], al
        ret    
    }
}
