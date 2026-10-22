/*
 * FUN_004220a7 (extent 0x4220a7-0x42210e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00422210(void);
extern void __cdecl FUN_004224c0(void);

__declspec(naked) void FUN_004220a7(void)
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004224c0
        xor    eax, eax
        mov    dword ptr [esi + 0x3c], eax
        mov    dword ptr [esi + 0x40], eax
        mov    dword ptr [esi + 0x4c], eax
        mov    dword ptr [esi], 0x76dd8c
        mov    dword ptr [esi + 0x38], 0x3f000000
        mov    eax, esi
        pop    esi
        ret    8
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
        mov    esi, ecx
        call    FUN_00422210
        test    byte ptr [esp + 8], 1
        je    L_2108
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2108:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
