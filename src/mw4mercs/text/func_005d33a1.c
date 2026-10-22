/*
 * FUN_005d33a1 (extent 0x5d33a1-0x5d3738) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077431c;
extern int    g_007b220c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_005d2920(void);
extern void __cdecl FUN_005d4de0(void);
extern void __cdecl FUN_005d5820(void);
extern void __cdecl FUN_005d5ea0(void);
extern void __cdecl FUN_0068c640(void);
extern void __cdecl FUN_0068c6c0(void);
extern void __cdecl FUN_0068c880(void);

__declspec(naked) void FUN_005d33a1(void)
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
        nop    
        nop    
        nop    
        nop    
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
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x14
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x41c]
        test    eax, eax
        push    edi
        je    L_3417
        fld    qword ptr [ebp + 8]
        sub    esp, 8
        fsub    qword ptr [esi + 0xe4]
        fstp    qword ptr [esp]
        call    FUN_005d5820
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x150]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_3417:
        mov    eax, dword ptr [esi + 0x450]
        test    eax, eax
        je    L_3452
        fld    qword ptr [ebp + 8]
        sub    esp, 8
        fsub    qword ptr [esi + 0xe4]
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005d5ea0
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x150]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_3452:
        mov    al, byte ptr [esi + 0x30a]
        test    al, al
        je    L_363d
        mov    eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        je    L_35d6
        mov    eax, dword ptr [esi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        lea    edi, [esi + 0x36c]
        push    edi
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_34cc
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [edi + 4]
        lea    eax, [esi + 0x384]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi + 8]
        mov    dword ptr [eax + 4], edx
        jmp    L_34fe
L_34cc:
        mov    edx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00419480
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        lea    eax, [esi + 0x384]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 4], edx
L_34fe:
        push    0x40a00000
        lea    ebx, [esi + 0x390]
        push    ebx
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, esi
        call    FUN_005d4de0
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx + 8]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [edi + 4], eax
        mov    eax, dword ptr [g_007b220c]
        mov    dword ptr [edi + 8], ecx
        push    eax
        lea    ecx, [esp + 0x18]
        mov    dword ptr [edi], edx
        mov    edx, dword ptr [esi + 0x3ac]
        push    ecx
        push    edi
        mov    dword ptr [esi + 0x3a8], edx
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_364f
        fld    qword ptr [ebp + 8]
        mov    eax, dword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xe4]
        mov    ebx, dword ptr [esi + 0x3d4]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [eax + 0x2bc]
        mov    edx, dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x3a8]
        push    edx
        push    ecx
        sub    esp, 0xc
        fmul    dword ptr [g_0077431c]
        mov    ecx, esp
        fstp    dword ptr [esp + 0xc]
        push    edi
        call    FUN_00551870
        mov    ecx, ebx
        call    FUN_0068c6c0
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [edi + 4]
        sub    esp, 0xc
        mov    eax, esp
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi + 8]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esi + 0x35c]
        mov    dword ptr [eax + 8], ecx
        push    edx
        mov    ecx, ebx
        call    FUN_0068c880
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_35d6:
        mov    edi, dword ptr [esi + 0x35c]
        test    edi, edi
        je    L_364f
        push    0x2c
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        test    ebx, ebx
        je    L_362c
        mov    ecx, edi
        call    FUN_005d2920
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_005d2900
        mov    edx, dword ptr [eax]
        sub    esp, 0xc
        mov    ecx, esp
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        mov    ecx, ebx
        call    FUN_0068c640
        mov    dword ptr [esi + 0x3d4], eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_362c:
        xor    eax, eax
        mov    dword ptr [esi + 0x3d4], eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_363d:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x150]
L_364f:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x1c4]
        mov    ecx, dword ptr [esp + 0x28]
        mov    ebx, dword ptr [ecx + 0x14]
        mov    edi, dword ptr [esi + 0x360]
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        mov    dword ptr [esi + 0x364], ebx
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0xd8]
        fld    dword ptr [ecx + 0x8c]
        add    ecx, 0x80
        mov    ecx, dword ptr [ecx + 0x2c]
        fstp    dword ptr [esp + 0xc]
        mov    edx, ecx
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [esi + 0x35c]
        test    ecx, ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x10], 0
        je    L_3717
        mov    eax, dword ptr [eax + 0x50]
        cmp    eax, 9
        ja    L_3708
        jmp    dword ptr [eax*4 + 0x5d3738]
        mov    eax, 0x10
        jmp    L_370a
        mov    eax, 0x11
        jmp    L_370a
        mov    eax, 2
        jmp    L_370a
        mov    eax, 8
        jmp    L_370a
        mov    eax, 4
        jmp    L_370a
        mov    eax, 0x20
        jmp    L_370a
        mov    eax, 0x40
        jmp    L_370a
        mov    eax, 0x100
        jmp    L_370a
L_3708:
        xor    eax, eax
L_370a:
        mov    edx, dword ptr [ebx]
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x20]
L_3717:
        mov    edx, dword ptr [ebx]
        mov    edi, dword ptr [esi]
        mov    ecx, ebx
        call    dword ptr [edx + 0x34]
        push    ecx
        mov    ecx, esi
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0xFF
        call    dword ptr [edi + 0x140]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x18
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0xD0
        // jump-table data @ 0x005D3738 (0 relocated pointers)
    }
}
