/*
 * FUN_00599d37 (extent 0x599d37-0x599e14) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f1fe4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_00599dd0(void);
extern void __cdecl FUN_005ecef0(void);
extern void __cdecl FUN_005ed0e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00599d37(void)
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
        push    edi
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        lea    edx, [edi + 0x54]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004d62e0
        test    eax, eax
        je    L_9d8d
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, eax
        mov    esi, eax
        call    FUN_005ed0e0
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_9d8d:
        push    0x260
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9dc0
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f1fe4]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_00599dd0
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_9dc0:
        xor    esi, esi
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
        nop    
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
        call    FUN_005ecef0
        mov    eax, dword ptr [edi + 0xb4]
        mov    ecx, dword ptr [edi + 0xb8]
        mov    dword ptr [esi + 0x258], eax
        pop    edi
        mov    dword ptr [esi], 0x783464
        mov    dword ptr [esi + 0x25c], ecx
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
