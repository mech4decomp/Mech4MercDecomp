/*
 * FUN_004e0e94 (extent 0x4e0e94-0x4e0f64) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6dc;
extern int    g_007dc6e4;
extern int    g_007dc6e8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_004d5d20(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004e0e94(void)
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
        nop    
        nop    
        mov    ecx, dword ptr [g_007dc6e8]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007dc6e8]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007dc6e8]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007dc6e8], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007dc6e8], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007dc6e8], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_0f25
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007dc6e8]
        push    ecx
        push    0x773b00
        mov    ecx, eax
        call    FUN_00411d10
L_0f25:
        push    esi
        mov    esi, dword ptr [g_007dc6dc]
        test    esi, esi
        je    L_0f40
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0f40:
        mov    edx, dword ptr [g_007dc6e4]
        push    1
        push    edx
        mov    dword ptr [g_007dc6dc], 0
        call    FUN_006f4850
        mov    dword ptr [g_007dc6e4], 0
        pop    esi
        ret    
    }
}
