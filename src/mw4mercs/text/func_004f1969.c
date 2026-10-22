/*
 * FUN_004f1969 (extent 0x4f1969-0x4f19be) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f1969(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 0x1c]
        shr    eax, 1
        test    al, 1
        push    edi
        mov    edi, ecx
        je    L_199a
        push    esi
        lea    ecx, [edi + 0x30]
        call    FUN_004179b0
L_199a:
        mov    ecx, dword ptr [esi + 0x1c]
        shr    ecx, 5
        test    cl, 1
        je    L_19ae
        push    esi
        lea    ecx, [edi + 0x28]
        call    FUN_004179b0
L_19ae:
        push    esi
        lea    ecx, [edi + 0x18]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    4
    }
}
