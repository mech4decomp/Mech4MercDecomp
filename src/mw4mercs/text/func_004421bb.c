/*
 * FUN_004421bb (extent 0x4421bb-0x44222c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b986c;
extern int    g_007b9870;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004420c0(void);
extern void __cdecl FUN_00458610(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004421bb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9870]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x88
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2200
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007b986c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004420c0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_2200:
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00458610
        push    edi
        lea    ecx, [esi + 0x6c]
        call    FUN_00491340
        pop    edi
        pop    esi
        ret    4
    }
}
