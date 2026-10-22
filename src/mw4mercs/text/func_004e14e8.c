/*
 * FUN_004e14e8 (extent 0x4e14e8-0x4e1745) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc728;
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004f03c0(void);
extern void __cdecl FUN_004f04a0(void);
extern void __cdecl FUN_004f1a10(void);
extern void __cdecl FUN_004f1d50(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00723180(void);

__declspec(naked) void FUN_004e14e8(void)
{
    __asm {
        call    FUN_004f1d50
        mov    word ptr [esp + 0x14], 0xffff
        mov    word ptr [esp + 0x16], 0
        mov    ax, word ptr [ebx]
        mov    word ptr [esp + 0x14], ax
        mov    cx, word ptr [ebx + 2]
        mov    eax, dword ptr [esp + 0x1c]
        push    4
        lea    edx, [esp + 0x1c]
        mov    word ptr [esp + 0x1a], cx
        push    edx
        lea    ecx, [esp + 0x24]
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x18]
        or    ebx, 0xffffffff
        cmp    eax, ebx
        je    L_1559
L_1529:
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [eax + 0x24]
        mov    edx, dword ptr [ebp]
        push    eax
        mov    ecx, ebp
        call    dword ptr [edx + 8]
        mov    edx, dword ptr [esp + 0x1c]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x24]
        call    dword ptr [edx + 0x20]
        cmp    dword ptr [esp + 0x18], ebx
        jne    L_1529
L_1559:
        call    FUN_006f49a0
        lea    ecx, [esp + 0x1c]
        call    FUN_004d21c0
        mov    edx, dword ptr [edi + 0x10]
        mov    eax, dword ptr [edi]
        or    edx, 0x20
        push    1
        mov    ecx, edi
        mov    dword ptr [edi + 0x10], edx
        call    dword ptr [eax + 0x48]
        mov    ecx, esi
        call    FUN_004f1a10
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
        ret    8
        mov    eax, dword ptr [ebp + 0x18]
        mov    ebx, dword ptr [edi + 0x10]
        mov    ecx, eax
        or    ebx, 0x20
        shr    ecx, 1
        test    cl, 1
        mov    dword ptr [edi + 0x10], ebx
        jne    L_15ba
        mov    edx, dword ptr [ebp]
        and    eax, 0xffffff7f
        or    eax, 0x48
        mov    ecx, ebp
        mov    dword ptr [ebp + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 0x14]
L_15ba:
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx + 0x48]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
        ret    8
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ecx + eax*4 + 0xcc]
        test    edx, edx
        je    L_15f6
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_15f6
        int 3    
L_15f6:
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x54
        push    ebx
        push    esi
        push    edi
        push    0
        push    0
        push    0
        push    0
        lea    eax, [esp + 0x20]
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        call    FUN_00723180
        mov    edi, dword ptr [esi + 0x4c]
        mov    edx, dword ptr [edi + 0x18]
        mov    esi, dword ptr [edx + 0x4c]
        lea    ebx, [esi + 0x2b0]
        mov    ecx, ebx
        call    FUN_0041fcb0
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, edi
        call    FUN_004f03c0
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xd4]
        lea    ecx, [esp + 0x44]
        lea    eax, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], ecx
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esi + 0x2c4]
        push    eax
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0x2000
        call    FUN_004e2f40
        mov    edi, eax
        test    edi, edi
        je    L_16fe
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [edi + 0xd8]
        fld    dword ptr [esp + 0x54]
        add    ecx, 0x80
        fmul    dword ptr [esp + 0x5c]
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        fstp    dword ptr [esp + 0x20]
        lea    ecx, [esi + 0x2b8]
        fld    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x4c]
        fadd st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x30]
        call    FUN_0041c830
L_16fe:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x54
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x4c]
        push    eax
        push    edx
        call    FUN_004f04a0
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x4c]
        push    eax
        push    edx
        call    FUN_004f03c0
        ret    8
    }
}
