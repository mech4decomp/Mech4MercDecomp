/*
 * FUN_004971ed (extent 0x4971ed-0x4973d3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00493940(void);
extern void __cdecl FUN_00496c80(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004971ed(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x18c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7229
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00496c80
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_7229:
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea    ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x68]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x70]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x7c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x88]
        call    FUN_004adf40
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [edi + 0x9c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea    ecx, [edi + 0xa4]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xb0]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xbc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0xc4]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xd0]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xdc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0xe4]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0xf0]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xfc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x104]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x110]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x11c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x124]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x130]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x13c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x140]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x14c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x158]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x164]
        call    FUN_004ae560
        mov    ecx, dword ptr [edi + 0x174]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x170]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x178]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        add    edi, 0x179
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
