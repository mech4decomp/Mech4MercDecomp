/*
 * FUN_004aa43e (extent 0x4aa43e-0x4aa4c9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004aa3e0(void);
extern void __cdecl FUN_004ab5c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004ab750(void);

__declspec(naked) void FUN_004aa43e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004ab5c0
        mov    dword ptr [esi], 0x770464
        mov    dword ptr [esi + 0x26c], 0x4c
        mov    dword ptr [esi + 0x270], 0x30
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x770464
        jmp    FUN_004ab750
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x274
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a4be
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x522
        mov    ecx, eax
        call    FUN_004aa3e0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a4be:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
    }
}
