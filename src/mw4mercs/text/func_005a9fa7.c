/*
 * FUN_005a9fa7 (extent 0x5a9fa7-0x5aa071) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f209c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_005aa040(void);
extern void __cdecl FUN_005bb170(void);
extern void __cdecl FUN_005ed0e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a9fa7(void)
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
        je    L_9ffd
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
L_9ffd:
        push    0x278
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a030
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f209c]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_005aa040
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_a030:
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
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005bb170
        mov    dword ptr [esi], 0x785340
        mov    byte ptr [esi + 0x274], 0
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
