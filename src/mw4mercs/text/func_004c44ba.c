/*
 * FUN_004c44ba (extent 0x4c44ba-0x4c4561) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab00;
extern int    g_007dab04;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004c42f0(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004c44ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab00]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x14c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4505
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007dab04]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004c42f0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4505:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c6960
        lea    ecx, [esi + 0x144]
        mov    esi, dword ptr [ecx]
        call    FUN_00417a40
        push    4
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
L_453d:
        test    esi, esi
        je    L_4552
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_4552
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        jmp    L_453d
L_4552:
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
        ret    
    }
}
