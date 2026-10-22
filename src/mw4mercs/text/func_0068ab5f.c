/*
 * FUN_0068ab5f (extent 0x68ab5f-0x68b0b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern int    g_007f244c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_005b8a20(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_0068b320(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0740(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b07a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0068ab5f(void)
{
    __asm {
        nop    
        sub    esp, 0x24
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x30]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x24]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x28]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x40]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x30]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov    dword ptr [esp + 0xc], 0
        jle    L_acff
        push    ebx
        push    ebp
L_abdb:
        mov    edx, dword ptr [edi]
        push    0xc
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esi + 0x3c]
        mov    ebx, dword ptr [esi + 0x38]
        cmp    ebx, eax
        mov    dword ptr [esp + 0x20], eax
        je    L_ac1a
        test    ebx, ebx
        je    L_ac0f
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [ebx], ecx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [esp + 0x30]
        mov    dword ptr [ebx + 8], eax
L_ac0f:
        add    ebx, 0xc
        mov    dword ptr [esi + 0x38], ebx
        jmp    L_ace8
L_ac1a:
        mov    edi, dword ptr [esi + 0x34]
        mov    ecx, ebx
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, 1
        mov    dword ptr [esp + 0x10], 1
        mov    dword ptr [esp + 0x1c], edx
        lea    eax, [esp + 0x10]
        jb    L_ac4a
        lea    eax, [esp + 0x1c]
L_ac4a:
        add    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], edx
        je    L_ac67
        lea    edx, [edx + edx*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_ac6f
L_ac67:
        mov    dword ptr [esp + 0x10], 0
L_ac6f:
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    ebx
        push    edi
        call    FUN_005b8a30
        mov    ebp, eax
        add    esp, 0x10
        test    ebp, ebp
        je    L_ac95
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, ebp
        call    FUN_0040c5d0
L_ac95:
        mov    eax, dword ptr [esp + 0x38]
        push    eax
        add    ebp, 0xc
        push    ebp
        push    ebx
        push    ebx
        call    FUN_005b8a30
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x30]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        push    edx
        push    edi
        mov    dword ptr [esp + 0x3c], edi
        call    FUN_005b8a20
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x34]
        mov    edi, dword ptr [esp + 0x50]
        lea    edx, [ecx + ecx*2]
        mov    dword ptr [esi + 0x34], eax
        lea    eax, [eax + edx*4]
        add    esp, 0x18
        mov    dword ptr [esi + 0x38], ebx
        mov    dword ptr [esi + 0x3c], eax
L_ace8:
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x14], eax
        jl    L_abdb
        pop    ebp
        pop    ebx
L_acff:
        push    edi
        mov    ecx, esi
        call    FUN_006b0520
        call    FUN_006f49a0
        pop    edi
        pop    esi
        add    esp, 0x24
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
        sub    esp, 0x14
        mov    eax, dword ptr [g_007f244c]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x14], ecx
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_006b0740
        mov    ecx, dword ptr [esi + 0x38]
        mov    ebp, dword ptr [esi + 0x34]
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        je    L_adae
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        mov    ecx, dword ptr [esi + 0x38]
        mov    ebx, ebp
        sub    ecx, ebx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        lea    ecx, [edx + edx*2]
        mov    edx, ebp
        lea    eax, [edx + ecx*4 - 0xc]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_aec1
L_adae:
        mov    eax, dword ptr [esi + 0x3c]
        mov    ebp, dword ptr [esi + 0x38]
        cmp    ebp, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_aded
        test    ebp, ebp
        je    L_add5
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ebp], edx
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebp + 4], eax
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ebp + 8], ecx
L_add5:
        add    ebp, 0xc
        mov    dword ptr [esi + 0x38], ebp
        mov    byte ptr [esi + 0x24], 1
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
L_aded:
        push    edi
        mov    edi, dword ptr [esi + 0x34]
        mov    ecx, ebp
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        cmp    edx, 1
        mov    dword ptr [esp + 0x28], 1
        mov    dword ptr [esp + 0x10], edx
        lea    eax, [esp + 0x28]
        jb    L_ae1e
        lea    eax, [esp + 0x10]
L_ae1e:
        mov    ebx, dword ptr [eax]
        add    ebx, edx
        je    L_ae39
        lea    ecx, [ebx + ebx*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x28], eax
        jmp    L_ae41
L_ae39:
        mov    dword ptr [esp + 0x28], 0
L_ae41:
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ebp
        push    edi
        call    FUN_005b8a30
        add    esp, 0x10
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_ae6d
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_0040c5d0
        mov    eax, dword ptr [esp + 0x10]
L_ae6d:
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        add    eax, 0xc
        push    eax
        push    ebp
        push    ebp
        call    FUN_005b8a30
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x24]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    esp, 0x10
        add    edx, eax
        push    edx
        push    edi
        mov    dword ptr [esp + 0x18], edi
        lea    edi, [esi + 0x3c]
        mov    ecx, edi
        call    FUN_005b8a00
        mov    eax, dword ptr [esp + 0x28]
        lea    ecx, [ebx + ebx*2]
        lea    edx, [eax + ecx*4]
        mov    dword ptr [edi], edx
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], ebp
        pop    edi
        mov    byte ptr [esi + 0x24], 1
L_aec1:
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0750
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_006b0780
        mov    eax, dword ptr [esi + 0x2c]
        mov    byte ptr [esi + 0x30], 0
        mov    dword ptr [esi + 0x40], eax
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x24
        push    ebx
        mov    ebx, dword ptr [esp + 0x38]
        push    ebp
        mov    ebp, dword ptr [esp + 0x30]
        push    esi
        push    ebx
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, esi
        call    FUN_006b07a0
        test    bl, bl
        jne    L_b0ab
        push    edi
        mov    edi, dword ptr [ebp + 0x35c]
        xor    ebx, ebx
        test    edi, edi
        je    L_af84
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [edx + 4]
        test    edi, edi
        mov    ebx, eax
        je    L_af84
        mov    eax, dword ptr [edi + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00419480
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], eax
L_af84:
        mov    edx, dword ptr [esi + 0x40]
        inc    edx
        mov    dword ptr [esi + 0x40], edx
        mov    edi, edx
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x30]
        cmp    edi, eax
        pop    edi
        jge    L_afa6
        mov    byte ptr [esi + 0x30], 0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
L_afa6:
        mov    eax, dword ptr [esi + 0x20]
        dec    eax
        je    L_b059
        dec    eax
        je    L_b041
        dec    eax
        jne    L_b0ab
        mov    ecx, esi
        mov    byte ptr [esi + 0x19], 0
        mov    dword ptr [esi + 0x2c], 0
        call    FUN_0068b320
        mov    ebx, dword ptr [ebx + 0x50]
        cmp    ebx, 9
        ja    L_b017
        jmp    dword ptr [ebx*4 + 0x68b0b4]
        mov    eax, 0x10
        jmp    L_b019
        mov    eax, 0x11
        jmp    L_b019
        mov    eax, 2
        jmp    L_b019
        mov    eax, 8
        jmp    L_b019
        mov    eax, 4
        jmp    L_b019
        mov    eax, 0x20
        jmp    L_b019
        mov    eax, 0x40
        jmp    L_b019
        mov    eax, 0x100
        jmp    L_b019
L_b017:
        xor    eax, eax
L_b019:
        mov    edx, dword ptr [esi]
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
L_b041:
        mov    ebx, dword ptr [ebx + 0x50]
        xor    eax, eax
        cmp    ebx, 9
        mov    byte ptr [esi + 0x19], 0
        mov    dword ptr [esi + 0x2c], eax
        ja    L_b019
        jmp    dword ptr [ebx*4 + 0x68b0dc]
L_b059:
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x38]
        mov    eax, dword ptr [ebp]
        push    0
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    0
        lea    edx, [esp + 0x30]
        push    edx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0xbf800000
        mov    dword ptr [esp + 0x30], 0xbf800000
        mov    dword ptr [esp + 0x34], 0xbf800000
        mov    dword ptr [esp + 0x38], 0xbf800000
        mov    dword ptr [esp + 0x3c], 0xbf800000
        call    dword ptr [eax + 0x1d0]
L_b0ab:
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    0x10
        // jump-table data @ 0x0068B0B4 (10 relocated pointers)
        __emit 0xDF
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xE6
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xED
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xF4
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xFB
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0x02
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x09
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x17
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x17
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x10
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        // jump-table data @ 0x0068B0DC (13 relocated pointers)
        __emit 0xDF
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xE6
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xED
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xF4
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0xFB
        __emit 0xAF
        __emit 0x68
        __emit 0x00
        __emit 0x02
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x09
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x19
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x19
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x10
        __emit 0xB0
        __emit 0x68
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
