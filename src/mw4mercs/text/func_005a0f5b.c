/*
 * FUN_005a0f5b (extent 0x5a0f5b-0x5a0fdd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005a1040(void);
extern void __cdecl FUN_005f39c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a0f5b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0xb
        call    dword ptr [eax + 4]
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005f39c0
        mov    edx, dword ptr [esi + 0xe0]
        cmp    dword ptr [edx + 0x14], 0x10
        jne    L_0fd9
        push    0
        call    FUN_00707e70
        fcomp    qword ptr [esi + 0x52c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0fd9
        fld    qword ptr [esp + 8]
        push    ecx
        fsub    qword ptr [esi + 0xe4]
        mov    ecx, esi
        __emit 0xD9  // fstp dword ptr [esp] — ref uses no-disp form D9 1C 24
__emit 0x1C
__emit 0x24
        call    FUN_005a1040
L_0fd9:
        pop    esi
        ret    8
        nop    /* trailing alignment pad (ref 0x5a0fdd = 90) */
    }
}
