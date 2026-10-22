/*
 * FUN_004f841e (extent 0x4f841e-0x4f8478) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004dad70(void);

__declspec(naked) void FUN_004f841e(void)
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    edi
        mov    esi, ecx
        push    ebx
        call    FUN_004dad70
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 1
        je    L_8472
        mov    eax, dword ptr [esi + 0xbc]
        test    eax, eax
        je    L_8472
        mov    esi, eax
L_845c:
        test    esi, esi
        je    L_8472
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_8472
        mov    edx, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [edx + 0x40]
        jmp    L_845c
L_8472:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
