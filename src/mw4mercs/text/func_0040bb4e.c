/*
 * FUN_0040bb4e (extent 0x40bb4e-0x40bb9e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004174f0(void);
extern void __cdecl FUN_00417670(void);

__declspec(naked) void FUN_0040bb4e(void)
{
    __asm {
        nop    
        nop    
        push    esi
        push    edi
        push    0x18
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bb77
        push    edi
        mov    ecx, esi
        call    FUN_00417670
        pop    edi
        mov    dword ptr [esi], 0x76cff8
        mov    eax, esi
        pop    esi
        ret    
L_bb77:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004174f0
        test    byte ptr [esp + 8], 1
        je    L_bb98
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_bb98:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
