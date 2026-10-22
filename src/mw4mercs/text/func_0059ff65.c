/*
 * FUN_0059ff65 (extent 0x59ff65-0x5a004d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00783a64;
extern float  g_00783a68;
extern float  g_00783a6c;
extern float  g_007f201c;
extern int    g_007f2020;
extern int    g_007f2028;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_0059ff65(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_ff87
        xor    eax, eax
        ret    8
L_ff87:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_ffb6
        xor    eax, eax
        ret    8
L_ffb6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* __emit: MSVC6 collapses near-jmp E9 0B 00 00 00 to short EB 0B; force 5-byte form */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_ffe0:
        fld    dword ptr [g_00783a68]
        fdiv    dword ptr [g_00783a6c]
        fdivr    dword ptr [g_00783a64]
        fstp    dword ptr [g_007f201c]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0041
        mov    eax, dword ptr [g_007f2028]
        push    0x5052a0
        push    0x5a0080
        push    0x783a70
        push    2
        push    eax
        push    0x783aa0
        push    0x4c6
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f2020], esi
        pop    esi
        ret    
L_0041:
        mov    dword ptr [g_007f2020], 0
        pop    esi
        ret    
    }
}
