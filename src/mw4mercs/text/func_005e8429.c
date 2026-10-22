/*
 * FUN_005e8429 (extent 0x5e8429-0x5e84a0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005e8370(void);
extern void __cdecl FUN_005f88e0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005f89d0(void);

__declspec(naked) void FUN_005e8429(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f88e0
        push    edi
        mov    ecx, esi
        call    FUN_005e8370
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x78960c
        jmp    FUN_005f89d0
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
        push    2
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
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        ret    
    }
}
