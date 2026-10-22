/*
 * FUN_0045550b (extent 0x45550b-0x4555dc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b98e0;
extern int    g_007b98e4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00454f60(void);
extern void __cdecl FUN_00458610(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0045550b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b98e4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xa8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5550
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007b98e0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00454f60
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_5550:
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00458610
        push    edi
        lea    ecx, [esi + 0x70]
        call    FUN_00491340
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x94]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x98]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x9c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0xa0]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x88]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    esi, 0x8c
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
