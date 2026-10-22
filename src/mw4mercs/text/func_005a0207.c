/*
 * FUN_005a0207 (extent 0x5a0207-0x5a02b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2024;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005a0280(void);
extern void __cdecl FUN_005a0320(void);
extern void __cdecl FUN_005a0dd0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a0207(void)
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
        push    0x574
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_024b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2024]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a0280
        mov    esi, eax
        jmp    L_024d
L_024b:
        xor    esi, esi
L_024d:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 4]
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
        call    FUN_005a0dd0
        push    edi
        mov    ecx, esi
        mov    dword ptr [esi], 0x783ae0
        call    FUN_005a0320
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
