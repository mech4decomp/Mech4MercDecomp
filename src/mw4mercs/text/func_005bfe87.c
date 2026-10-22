/*
 * FUN_005bfe87 (extent 0x5bfe87-0x5bff83) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f22b8;
extern int    g_007f2450;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005bfef0(void);
extern void __cdecl FUN_005c0570(void);
extern void __cdecl FUN_005c0a30(void);
extern void __cdecl FUN_005c0a70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005bfe87(void)
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
        mov    eax, dword ptr [g_007f2450]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x6b4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fedb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f22b8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005bfef0
        mov    esi, eax
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_fedb:
        xor    esi, esi
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
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
        call    FUN_005c0570
        mov    eax, 0x4b
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], eax
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi], 0x7872e8
        mov    byte ptr [esi + 0x6ac], 0
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c0a30
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c0a70
        ret    4
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
        ret    4
    }
}
