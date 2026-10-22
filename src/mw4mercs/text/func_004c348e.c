/*
 * FUN_004c348e (extent 0x4c348e-0x4c35a4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9ec;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b99a0(void);
extern void __cdecl FUN_004c3070(void);
extern void __cdecl FUN_004c4510(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004c348e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007da9ec]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2ec
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_34ce
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004c3070
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_34ce:
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
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c4510
        mov    ecx, dword ptr [esi + 0x2c4]
        push    edi
        call    FUN_004b99a0
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x20c]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x210]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x214]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x218]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x21c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x220]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x268]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        add    esi, 0x269
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
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
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 1
        mov    edx, dword ptr [eax*4 + 0x7b3908]
        mov    dword ptr [ecx + 0x1c], edx
        ret    
    }
}
