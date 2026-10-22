/*
 * FUN_005bb0d7 (extent 0x5bb0d7-0x5bb1e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2150;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_005bb170(void);
extern void __cdecl FUN_005ecef0(void);
extern void __cdecl FUN_005ed0e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005bb0d7(void)
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
        je    L_b12d
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
L_b12d:
        push    0x274
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b160
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f2150]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_005bb170
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_b160:
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
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005ecef0
        lea    edi, [esi + 0x258]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        lea    edi, [esi + 0x26c]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        pop    edi
        mov    dword ptr [esi], 0x787018
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
        nop    
        nop    
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
        nop    
        nop    
        nop    
        ret    
    }
}
