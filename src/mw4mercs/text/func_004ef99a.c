/*
 * FUN_004ef99a (extent 0x4ef99a-0x4efaab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc134;
extern int    g_007dc81c;
extern int    g_007dc83c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004f2350(void);

__declspec(naked) void FUN_004ef99a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc134]
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebp, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_fa49
        mov    eax, dword ptr [esi]
        push    ebx
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ax, word ptr [eax]
        mov    edi, dword ptr [ebp + 0x24]
        cmp    word ptr [edi + 0x150], ax
        je    L_fa33
        mov    esi, eax
        mov    word ptr [edi + 0x150], ax
        mov    ebx, dword ptr [edi + 0x148]
        and    esi, 0xffff
        cmp    esi, ebx
        jae    L_f9fa
        mov    ecx, dword ptr [edi + 0x144]
        mov    ecx, dword ptr [ecx + esi*4]
        jmp    L_fa30
L_f9fa:
        test    al, 0xf0
        je    L_fa33
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, ebx
        jae    L_fa19
        mov    edx, dword ptr [edi + 0x144]
        mov    eax, dword ptr [edx + eax*4]
        test    eax, eax
        je    L_fa19
        mov    ecx, eax
        call    dword ptr [eax + 0x1c]
L_fa19:
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, ebx
        jae    L_fa33
        mov    eax, dword ptr [edi + 0x144]
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        je    L_fa33
L_fa30:
        call    dword ptr [ecx + 0x1c]
L_fa33:
        mov    ecx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ecx + 0x4c]
        mov    ecx, dword ptr [eax + 0x10]
        pop    edi
        pop    ebx
        or    ecx, 0x20
        pop    esi
        mov    dword ptr [eax + 0x10], ecx
        pop    ebp
        ret    4
L_fa49:
        push    esi
        mov    ecx, ebp
        call    FUN_004f2350
        pop    esi
        pop    ebp
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_faa0
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774ca0
        push    0x21d
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc81c], eax
        ret    
L_faa0:
        mov    dword ptr [g_007dc81c], 0
        ret    
    }
}
