/*
 * FUN_00435e4b (extent 0x435e4b-0x435ec5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9824;
extern int    g_007b9828;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00435ce0(void);
extern void __cdecl FUN_00455560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00435e4b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9828]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xb4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5e90
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007b9824]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00435ce0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_5e90:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    esi
        call    FUN_00455560
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], 0
        call    dword ptr [eax + 0x24]
        pop    esi
        ret    4
    }
}
