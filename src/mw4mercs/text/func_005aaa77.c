/*
 * FUN_005aaa77 (extent 0x5aaa77-0x5aab0b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f20a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005aaad0(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005aaa77(void)
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
        push    0x184
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_aac2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20a8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005aaad0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_aac2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_005f0740
        mov    eax, dword ptr [edi + 0x6c]
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], eax
        pop    edi
        mov    dword ptr [esi], 0x7855c8
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
