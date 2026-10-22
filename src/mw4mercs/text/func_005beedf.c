/*
 * FUN_005beedf (extent 0x5beedf-0x5bf0b0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f84;
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_004d93a0(void);
extern void __cdecl FUN_005bed20(void);

__declspec(naked) void FUN_005beedf(void)
{
    __asm {
        nop    
        mov    ch, dh
        pop    ebx
        add    byte ptr [ecx - 0x12], bh
        pop    ebx
        add    byte ptr [ebx - 0x42ffa412], bl
        out    dx, al
        pop    ebx
        add    byte ptr [esi + ebp*8 - 0x1131ffa5], ch
        pop    ebx
        add    byte ptr [edi - 0x12], dl
        pop    ebx
        add    byte ptr [eax - 0x12], ch
        pop    ebx
        /* __emit: 00 DA is jump-table data (0x005BEEDA); MSVC6 reverses
           add dl,bl to 02 D3. */
        __emit 0x00
        __emit 0xDA
        out    dx, al
        pop    ebx
        add    byte ptr [eax], al
        add    dword ptr [edx], eax
        or    byte ptr [ebx], al
        add    al, 8
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        add    eax, 0x8080808
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        push    es
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        pop    es
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        or    byte ptr [eax], cl
        add    al, 0x90
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
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        mov    byte ptr [edi + 0xb0], 1
        call    FUN_004d93a0
        cmp    eax, dword ptr [g_007f1f84]
        jne    L_eff1
        mov    al, byte ptr [esi + 0xdc]
        test    al, al
        je    L_efe0
        push    esi
        mov    ecx, edi
        call    FUN_005bed20
L_efe0:
        push    esi
        lea    ecx, [edi + 0x4b0]
        call    FUN_00415ca0
        pop    edi
        pop    esi
        ret    4
L_eff1:
        mov    eax, dword ptr [esi + 4]
        mov    eax, dword ptr [eax]
        add    eax, 0xfffffbd6
        cmp    eax, 0x91
        ja    L_f0a8
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x5bf0d4]
        jmp    dword ptr [ecx*4 + 0x5bf0b0]
        add    edi, 0x4c4
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4cc
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4d4
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4dc
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4e4
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4ec
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4f4
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
        pop    edi
        pop    esi
        ret    4
        add    edi, 0x4fc
        push    edi
        mov    ecx, esi
        call    FUN_004154d0
L_f0a8:
        pop    edi
        pop    esi
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005BF0B0 (0 relocated pointers)
    }
}
