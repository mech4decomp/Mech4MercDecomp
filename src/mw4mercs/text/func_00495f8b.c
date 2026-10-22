/*
 * FUN_00495f8b (extent 0x495f8b-0x4960a7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00495ea0(void);
extern void __cdecl FUN_004a2570(void);
extern void __cdecl FUN_004a2640(void);
extern void __cdecl FUN_004a26e0(void);
extern void __cdecl FUN_004a2840(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00495f8b(void)
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
        push    0x1b0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5fc9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00495ea0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_5fc9:
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a2570
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x1a4]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x1a8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    esi, 0x1ac
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004a2640
        mov    eax, 0x40800000
        mov    dword ptr [esi + 0x1a4], eax
        mov    dword ptr [esi + 0x1a8], eax
        mov    dword ptr [esi + 0x1ac], 0x3e800000
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004a26e0
        ret    4
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a2840
        mov    eax, dword ptr [edi + 0x1a4]
        mov    ecx, dword ptr [edi + 0x1a8]
        mov    edx, dword ptr [edi + 0x1ac]
        pop    edi
        mov    dword ptr [esi + 0x1a4], eax
        mov    dword ptr [esi + 0x1a8], ecx
        mov    dword ptr [esi + 0x1ac], edx
        pop    esi
        ret    4
    }
}
