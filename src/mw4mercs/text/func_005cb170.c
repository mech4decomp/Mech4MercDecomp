/*
 * FUN_005cb170 (extent 0x5cb170-0x5cb1ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f25c0;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_005cb170(void)
{
    __asm {
        mov    al, byte ptr [ecx + 0x51c]
        test    al, al
        push    esi
        je    L_b19b
        mov    esi, dword ptr [ecx + 0x170]
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_b19b
        test    esi, esi
        je    L_b19b
        mov    al, 1
        pop    esi
        ret    
L_b19b:
        xor    al, al
        pop    esi
        ret    
        nop    
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        ret    4
    }
}
