/*
 * FUN_005fb70c (extent 0x5fb70c-0x5fb752) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005fd1c0(void);

__declspec(naked) void FUN_005fb70c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005fd1c0
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        je    L_b731
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0xd8]
L_b731:
        pop    edi
        pop    esi
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
        mov    ecx, dword ptr [ecx + 0x3b0]
        test    ecx, ecx
        je    L_b751
        push    0xd
        call    FUN_00559be0
L_b751:
        ret    
    }
}
