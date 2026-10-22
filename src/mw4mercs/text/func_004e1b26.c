/*
 * FUN_004e1b26 (extent 0x4e1b26-0x4e1bac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4350;
extern int    g_007dc700;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00501b40(void);

__declspec(naked) void FUN_004e1b26(void)
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
        nop    
        mov    ecx, dword ptr [g_007b4350]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4350]
        mov    eax, 5
        sub    eax, ecx
        mov    dword ptr [g_007b4350], eax
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
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_1b85
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007b4350]
        push    ecx
        push    0x773ca4
        mov    ecx, eax
        call    FUN_00411d10
L_1b85:
        push    esi
        mov    esi, dword ptr [g_007dc700]
        test    esi, esi
        je    L_1ba0
        mov    ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1ba0:
        mov    dword ptr [g_007dc700], 0
        pop    esi
        ret    
    }
}
