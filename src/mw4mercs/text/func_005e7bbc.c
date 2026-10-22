/*
 * FUN_005e7bbc (extent 0x5e7bbc-0x5e7c0a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005fa070(void);

__declspec(naked) void FUN_005e7bbc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, 5
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
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    eax, dword ptr [ecx + 0x14]
        test    eax, eax
        je    L_7bf5
        fld    qword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        fsub    qword ptr [esi + 0xe4]
        push    0
        push    ecx
        __emit 0xD9  // fstp dword ptr [esp] — ref uses no-disp form D9 1C 24
__emit 0x1C
__emit 0x24
        call    dword ptr [eax + 0xc]
L_7bf5:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005fa070
        pop    esi
        ret    8
        nop    /* trailing alignment pad (ref 0x5e7c0a = 90) */
    }
}
