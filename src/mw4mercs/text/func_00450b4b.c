/*
 * FUN_00450b4b (extent 0x450b4b-0x450bc5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b98cc;
extern int    g_007b98d0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00450a00(void);
extern void __cdecl FUN_00458610(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00450b4b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b98d0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0b8d
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007b98cc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00450a00
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_0b8d:
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
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    esi
        call    FUN_00458610
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
