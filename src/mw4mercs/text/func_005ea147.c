/*
 * FUN_005ea147 (extent 0x5ea147-0x5ea212) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2584;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005ea1a0(void);
extern void __cdecl FUN_005ea240(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005ea147(void)
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
        je    L_a192
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2584]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005ea1a0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a192:
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
        xor    eax, eax
        mov    dword ptr [esi + 0x1d0], eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esi + 0x1d4], eax
        mov    dword ptr [esi], 0x78992c
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], eax
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi + 0x188], eax
        mov    dword ptr [esi + 0x18c], eax
        mov    dword ptr [esi + 0x190], eax
        mov    dword ptr [esi + 0x194], eax
        mov    dword ptr [esi + 0x1c4], eax
        call    FUN_005ea240
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
