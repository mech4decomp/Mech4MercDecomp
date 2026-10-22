/*
 * FUN_004a251b (extent 0x4a251b-0x4a263b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004a2160(void);
extern void __cdecl FUN_004a3660(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a251b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1a4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_255e
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x52a
        mov    ecx, eax
        call    FUN_004a2160
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_255e:
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_004a3660
        push    esi
        lea    ecx, [edi + 0x124]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x12c]
        call    FUN_004ae560
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [edi + 0x138]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea    ecx, [edi + 0x140]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x148]
        call    FUN_004ae560
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x154]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x15c]
        call    FUN_004ae560
        push    esi
        lea    ecx, [edi + 0x168]
        call    FUN_004adf40
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x17c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea    ecx, [edi + 0x180]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x188]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x190]
        call    FUN_004add70
        push    esi
        lea    ecx, [edi + 0x198]
        call    FUN_004add70
        mov    edx, dword ptr [esi]
        push    1
        add    edi, 0x1a0
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
