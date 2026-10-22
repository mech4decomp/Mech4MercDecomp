/*
 * FUN_005acf3e (extent 0x5acf3e-0x5acf9c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6e0;
extern void __cdecl FUN_004c4140(void);
extern void __cdecl FUN_005ad080(void);
extern void __cdecl FUN_005ae3c0(void);

__declspec(naked) void FUN_005acf3e(void)
{
    __asm {
        nop    
        nop    
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x30]
        push    eax
        lea    ecx, [edi + 0x2c]
        push    ecx
        mov    ecx, dword ptr [g_007dc6e0]
        lea    edx, [edi + 0x28]
        push    edx
        mov    edx, dword ptr [ecx + 0x4c]
        mov    ecx, dword ptr [edx + 0x24]
        lea    eax, [edi + 0x24]
        push    eax
        call    FUN_004c4140
        push    0
        mov    ecx, edi
        call    FUN_005ad080
        mov    esi, dword ptr [edi + 0x10]
L_cf81:
        test    esi, esi
        je    L_cf95
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_cf95
        call    FUN_005ae3c0
        mov    esi, dword ptr [esi + 4]
        jmp    L_cf81
L_cf95:
        mov    byte ptr [edi + 0x20], 1
        pop    edi
        pop    esi
        ret    
    }
}
