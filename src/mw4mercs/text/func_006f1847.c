/*
 * FUN_006f1847 (extent 0x6f1847-0x6f18b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f84;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_006f1650(void);

__declspec(naked) void FUN_006f1847(void)
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        je    L_1869
        mov    ecx, esi
        call    FUN_006f1650
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1869:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_18ae
        add    esi, 0x20
        mov    ecx, esi
        call    FUN_0041fd80
        cmp    eax, edi
        je    L_18ae
        mov    ecx, esi
        call    FUN_0041fcb0
        push    edi
        mov    ecx, esi
        call    FUN_0041fcd0
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
L_18ae:
        pop    edi
        xor    al, al
        pop    esi
        ret    4
    }
}
