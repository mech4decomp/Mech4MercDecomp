/*
 * FUN_005a6cd7 (extent 0x5a6cd7-0x5a6d5a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2070;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005a6d30(void);
extern void __cdecl FUN_005e6cf0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a6cd7(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x220
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6d22
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2070]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a6d30
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_6d22:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005e6cf0
        mov    dword ptr [esi], 0x784b14
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
