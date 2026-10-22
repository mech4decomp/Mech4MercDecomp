/*
 * FUN_00742a90 (extent 0x742a90-0x742ad6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00742a40(void);

__declspec(naked) void FUN_00742a90(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00742a40
        mov    eax, dword ptr [eax*4 + 0x7b7418]
        ret    4
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
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        test    edx, edx
        je    L_2ad3
        mov    ecx, edx
        and    ecx, 1
        test    cl, cl
        jne    L_2ad3
        push    esi
L_2ac4:
        inc    eax
        mov    esi, 1
        mov    ecx, eax
        shl    esi, cl
        test    esi, edx
        je    L_2ac4
        pop    esi
L_2ad3:
        ret    4
    }
}
