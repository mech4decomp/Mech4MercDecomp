/*
 * FUN_004d4545 (extent 0x4d4545-0x4d45e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416280(void);
extern void __cdecl FUN_00491de0(void);

__declspec(naked) void FUN_004d4545(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_4567
        xor    eax, eax
        ret    8
L_4567:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_4596
        xor    eax, eax
        ret    8
L_4596:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00491de0
        push    1
        push    0
        lea    edi, [esi + 0x5c]
        push    0x17
        mov    ecx, edi
        call    FUN_00416280
        mov    dword ptr [edi], 0x7729a0
        pop    edi
        mov    dword ptr [esi], 0x772994
        mov    eax, esi
        pop    esi
        ret    4
    }
}
