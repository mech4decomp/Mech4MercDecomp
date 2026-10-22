/*
 * FUN_00565615 (extent 0x565615-0x565a62) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b308;
extern int    g_0076b3e8;
extern float  g_0076c5b0;
extern float  g_0077eca8;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007eebd4;
extern int    g_007eebe4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_00622910(void);
extern void __cdecl FUN_006234b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00565615(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        push    esi
        push    ebp
        push    esi
        add    byte ptr [edi + 0x55], bl
        push    esi
        add    byte ptr [eax + 0x55], ch
        push    esi
        add    byte ptr [ecx + 0x55], dh
        push    esi
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x468
        mov    eax, dword ptr [g_007eebd4]
        push    esi
        push    edi
        xor    edi, edi
        cmp    eax, edi
        je    L_5a5c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        je    L_5a5c
        mov    ecx, dword ptr [eax + 0x20]
        mov    esi, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        xor    esi, 0x85739531
        mov    dword ptr [ebp - 0x1c], ecx
        je    L_5a5c
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        cmp    eax, edi
        mov    dword ptr [ebp - 0xc], eax
        jne    L_56a6
        push    0x77ec8c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_56a6
        int 3    
L_56a6:
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    eax, ebx
        imul    eax, eax, 0x22ac
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x20], edi
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp - 0x34], edi
        mov    dword ptr [ebp - 0x2c], edi
        mov    dword ptr [ebp - 0x38], edi
        mov    dword ptr [ebp - 0x24], edi
        mov    dword ptr [ebp - 0x30], edi
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0x60], edi
        lea    edi, [eax + esi]
        push    0x100
        lea    ecx, [edi + 0x205d34]
        push    ecx
        lea    edx, [ebp - 0x468]
        push    edx
        mov    dword ptr [ebp - 0x40], 0
        mov    dword ptr [ebp - 0x3c], 0
        mov    dword ptr [ebp - 0x48], 0
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 0x58], 0
        mov    dword ptr [ebp - 0x54], 0
        mov    dword ptr [ebp + 8], edi
        call    dword ptr [g_0076b3e8]
        mov    eax, dword ptr [edi + 0x205d30]
        mov    ecx, dword ptr [eax + 0x5c]
        push    0x5c
        push    ecx
        call    dword ptr [g_0076b308]
        mov    edi, eax
        add    esp, 0x14
        test    edi, edi
        je    L_577b
        inc    edi
        push    0x5c
        push    edi
        call    dword ptr [g_0076b308]
        add    esp, 8
        test    edi, edi
        je    L_577b
        test    eax, eax
        je    L_577b
        sub    eax, edi
        test    eax, eax
        mov    dword ptr [ebp - 8], eax
        jle    L_577b
        cmp    eax, 0x1e
        jge    L_577b
        push    eax
        lea    edx, [ebp - 0x268]
        push    edi
        push    edx
        call    dword ptr [g_0076b3e8]
        mov    eax, dword ptr [ebp - 8]
        add    esp, 0xc
        mov    word ptr [ebp + eax*2 - 0x268], 0
        jmp    L_5784
L_577b:
        mov    word ptr [ebp - 0x268], 0
L_5784:
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi + 0x205d30]
        mov    ecx, dword ptr [eax + 0x3b8]
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [edi + 0x206070]
        test    eax, eax
        mov    dword ptr [ebp - 0x68], ecx
        jne    L_57af
        cmp    dword ptr [edi + 0x206074], 0xbff00000
        je    L_57ef
L_57af:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jne    L_57d3
        fld    dword ptr [g_0076c5b0]
        fsub    qword ptr [edi + 0x206070]
        fmul    qword ptr [g_0077eca8]
        fstp    qword ptr [ebp - 0x50]
        jmp    L_57fd
L_57d3:
        lea    ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fsub    qword ptr [edi + 0x206070]
        fmul    qword ptr [g_0077eca8]
        fstp    qword ptr [ebp - 0x50]
        jmp    L_57fd
L_57ef:
        mov    dword ptr [ebp - 0x50], 0
        mov    dword ptr [ebp - 0x4c], 0
L_57fd:
        mov    ecx, dword ptr [edi + 0x205f38]
        fld    qword ptr [ebp - 0x40]
        mov    edx, dword ptr [ebp - 0xc]
        fld    qword ptr [ebp - 0x48]
        mov    eax, dword ptr [edx + 0xe4]
        mov    dword ptr [ebp - 0x64], ecx
        xor    ecx, ecx
        add    edi, 0x206e54
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0xc], edi
L_5823:
        fld    dword ptr [edi]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_586b
        mov    edx, ebx
        imul    edx, edx, 0x8ab
        lea    eax, [edx + ecx]
        fld    dword ptr [esi + eax*4 + 0x2072b0]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_586b
        lea    eax, [edx + ecx]
        cmp    dword ptr [esi + eax*4 + 0x20770c], 0
        jne    L_586b
        add    edx, ecx
        mov    eax, dword ptr [esi + edx*4 + 0x207b68]
        test    eax, eax
        je    L_58d5
L_586b:
        fld    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, ebx
        faddp st(2), st(0)
        imul    eax, eax, 0x8ab
        lea    edx, [eax + ecx]
        fadd    dword ptr [esi + edx*4 + 0x2072b0]
        lea    edx, [eax + ecx]
        mov    edx, dword ptr [esi + edx*4 + 0x20770c]
        add    edi, edx
        mov    edx, dword ptr [ebp - 0x14]
        add    eax, ecx
        mov    eax, dword ptr [esi + eax*4 + 0x207b68]
        add    edx, eax
        mov    dword ptr [ebp - 0x14], edx
        lea    edx, [ecx - 0xff]
        cmp    ebx, edx
        mov    dword ptr [ebp - 0x10], edi
        jne    L_58d5
        mov    eax, ebx
        shl    eax, 7
        add    eax, ebx
        shl    eax, 3
        sub    eax, ebx
        shl    eax, 1
        lea    edx, [eax + ecx]
        fld    dword ptr [esi + edx*4 + 0x4844]
        add    eax, ecx
        mov    eax, dword ptr [esi + eax*4 + 0x50fc]
        fstp    qword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x20], eax
L_58d5:
        mov    edi, dword ptr [ebp - 0xc]
        inc    ecx
        add    edi, 4
        cmp    ecx, 0x117
        mov    dword ptr [ebp - 0xc], edi
        jl    L_5823
        mov    eax, dword ptr [ebp - 0x5c]
        fstp    qword ptr [ebp - 0x48]
        mov    cl, byte ptr [eax + 0x14]
        mov    byte ptr [ebp - 4], cl
        fstp    qword ptr [ebp - 0x40]
        mov    dx, word ptr [eax + 0x16]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    word ptr [ebp - 2], dx
        mov    esi, dword ptr [eax + 0x225c]
        test    esi, esi
        je    L_5984
        lea    ecx, [ebp - 4]
        push    ecx
        mov    ecx, esi
        call    FUN_006234b0
        lea    edx, [ebp - 4]
        push    edx
        push    8
        mov    ecx, esi
        mov    dword ptr [ebp - 0x18], eax
        call    FUN_00622910
        mov    dword ptr [ebp - 0x34], eax
        lea    eax, [ebp - 4]
        push    eax
        push    2
        mov    ecx, esi
        call    FUN_00622910
        lea    ecx, [ebp - 4]
        push    ecx
        push    9
        mov    ecx, esi
        mov    dword ptr [ebp - 0x2c], eax
        call    FUN_00622910
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        je    L_5984
        lea    edx, [ebp - 4]
        push    edx
        push    3
        mov    ecx, esi
        call    FUN_00622910
        mov    dword ptr [ebp - 0x24], eax
        lea    eax, [ebp - 4]
        push    eax
        push    0x34
        mov    ecx, esi
        call    FUN_00622910
        lea    ecx, [ebp - 4]
        push    ecx
        push    0x35
        mov    ecx, esi
        mov    dword ptr [ebp - 0x30], eax
        call    FUN_00622910
        mov    dword ptr [ebp - 0x28], eax
L_5984:
        mov    eax, dword ptr [ebp + 8]
        mov    esi, dword ptr [eax + 0x20607c]
        sub    esi, dword ptr [eax + 0x206078]
        sar    esi, 2
        xor    edi, edi
        test    esi, esi
        jle    L_59dc
        lea    edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov    ecx, dword ptr [ebp + 8]
        mov    ebx, eax
        mov    eax, dword ptr [ecx + 0x206078]
        mov    ecx, dword ptr [ecx + 0x20607c]
        add    esp, 4
        cmp    eax, ecx
        mov    dword ptr [ebp + 8], ecx
        je    L_59df
        mov    ecx, ebx
L_59c6:
        mov    edx, dword ptr [eax]
        add    eax, 4
        mov    dword ptr [ecx], edx
        inc    edi
        add    ecx, 4
        cmp    edi, esi
        jge    L_59df
        cmp    eax, dword ptr [ebp + 8]
        jne    L_59c6
        jmp    L_59df
L_59dc:
        mov    ebx, dword ptr [ebp - 0x60]
L_59df:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x30]
        and    eax, 0xff
        push    eax
        mov    eax, dword ptr [ebp - 0x24]
        push    esi
        push    ebx
        push    ecx
        mov    ecx, dword ptr [ebp - 0x38]
        push    edx
        mov    edx, dword ptr [ebp - 0x2c]
        push    eax
        mov    eax, dword ptr [ebp - 0x34]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x18]
        push    edx
        mov    edx, dword ptr [ebp - 0x20]
        push    eax
        mov    eax, dword ptr [ebp - 0x14]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x10]
        push    edx
        mov    edx, dword ptr [ebp - 0x54]
        push    eax
        mov    eax, dword ptr [ebp - 0x58]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x44]
        push    edx
        mov    edx, dword ptr [ebp - 0x48]
        push    eax
        mov    eax, dword ptr [ebp - 0x3c]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x40]
        push    edx
        mov    edx, dword ptr [ebp - 0x64]
        push    eax
        mov    eax, dword ptr [ebp - 8]
        push    ecx
        mov    ecx, dword ptr [ebp - 0x4c]
        push    edx
        mov    edx, dword ptr [ebp - 0x50]
        push    eax
        mov    eax, dword ptr [ebp - 0x68]
        push    ecx
        push    edx
        push    eax
        lea    ecx, [ebp - 0x268]
        push    ecx
        lea    edx, [ebp - 0x468]
        push    edx
        call    dword ptr [g_007eebe4]
        push    ebx
        call    FUN_004084e0
        add    esp, 4
        pop    ebx
L_5a5c:
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
