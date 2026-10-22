/*
 * FUN_0068b1b9 (extent 0x68b1b9-0x68b37f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f244c;
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0670(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0068b1b9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0670
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_006b0680
        call    FUN_006f49a0
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_b286
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_b286:
        mov    edx, dword ptr [edi + 0x28]
        mov    eax, dword ptr [esi + 0x28]
        pop    edi
        cmp    edx, eax
        pop    esi
        sete    al
        pop    ebx
        add    esp, 0x20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x34]
        mov    edx, dword ptr [ecx + 0x38]
        sub    edx, eax
        mov    eax, 0x2aaaaaab
        imul    edx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        mov    eax, dword ptr [esp + 8]
        cmp    eax, edx
        jb    L_b2d4
        mov    eax, dword ptr [esp + 4]
        mov    ecx, 0xbf800000
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        ret    8
L_b2d4:
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ecx + 0x34]
        lea    ecx, [eax + edx*4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x34]
        mov    edx, dword ptr [ecx + 0x38]
        sub    edx, eax
        mov    eax, 0x2aaaaaab
        imul    edx
        mov    eax, edx
        sar    eax, 1
        mov    ecx, eax
        shr    ecx, 0x1f
        add    eax, ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f244c]
        sub    esp, 0xc
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x34]
        cmp    ecx, eax
        pop    esi
        jae    L_b376
L_b33c:
        mov    edx, dword ptr [ecx + 4]
        fld    dword ptr [ecx]
        mov    dword ptr [esp + 4], edx
        mov    edx, dword ptr [ecx + 8]
        sub    eax, 0xc
        mov    dword ptr [esp + 8], edx
        mov    edx, dword ptr [eax]
        fstp    dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 8]
        add    ecx, 0xc
        cmp    ecx, eax
        mov    dword ptr [eax + 8], edx
        jb    L_b33c
L_b376:
        call    FUN_006f49a0
        add    esp, 0xc
        ret    
    }
}
