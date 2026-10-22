/*
 * FUN_004a8915 (extent 0x4a8915-0x4a8d46) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076df00;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004a8810(void);
extern void __cdecl FUN_004a99c0(void);
extern void __cdecl FUN_004ac970(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a8915(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xbc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8959
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a8810
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_8959:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    eax
        mov    esi, ecx
        push    edi
        call    FUN_004a99c0
        fld    dword ptr [esi + 0x90]
        mov    ecx, dword ptr [esi + 0xb0]
        mov    edx, dword ptr [ecx + 0x18]
        mov    bl, byte ptr [edx + edi]
        lea    eax, [edx + edi]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [edx + 0x270]
        imul    ecx, edi
        mov    edi, dword ptr [esi + 0xa8]
        or    bl, 2
        add    ecx, edi
        mov    edi, dword ptr [edx + 0x2c0]
        mov    byte ptr [eax], bl
        mov    eax, dword ptr [ecx + 0x18]
        xor    esi, esi
        test    edi, edi
        mov    dword ptr [esp + 0x14], eax
        jbe    L_89dc
        mov    ebx, dword ptr [edx + 0x2bc]
L_89cb:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_89dc
        inc    esi
        add    ebx, 0xc
        cmp    esi, edi
        jb    L_89cb
L_89dc:
        lea    eax, [esi + esi*2]
        mov    esi, dword ptr [edx + 0x2bc]
        fsub    dword ptr [esi + eax*4 - 0xc]
        lea    eax, [esi + eax*4 - 0xc]
        pop    edi
        pop    esi
        fmul    dword ptr [eax + 4]
        pop    ebx
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edx + 0x2d8]
        test    al, al
        je    L_8a26
        fld    dword ptr [esp + 8]
        fmul    dword ptr [edx + 0x2d0]
        fadd    dword ptr [edx + 0x2d4]
        fmul    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0x2cc]
        fmul    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0x2c8]
        fmulp st(1), st(0)
L_8a26:
        mov    eax, dword ptr [ecx + 0x18]
        fstp    dword ptr [ecx + 0x68]
        fld    dword ptr [edx + 0x2e4]
        mov    dword ptr [esp + 8], eax
        mov    al, byte ptr [edx + 0x2fc]
        test    al, al
        je    L_8a66
        fld    dword ptr [esp + 8]
        fmul    dword ptr [edx + 0x2f4]
        fadd    dword ptr [edx + 0x2f8]
        fmul    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0x2f0]
        fmul    dword ptr [esp + 8]
        fadd    dword ptr [edx + 0x2ec]
        fmulp st(1), st(0)
L_8a66:
        fsin    
        fstp    dword ptr [ecx + 0x70]
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xb0]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x18]
        push    ebx
        mov    bl, byte ptr [eax + edx]
        add    eax, edx
        and    bl, 0xfd
        push    edx
        mov    byte ptr [eax], bl
        call    FUN_004ac970
        pop    ebx
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
        nop    
        sub    esp, 0x18
        push    ebx
        mov    ebx, dword ptr [esp + 0x20]
        push    ebp
        push    esi
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 0xa8]
        mov    ecx, dword ptr [esp + 0x2c]
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [edi + 0x270]
        imul    esi, ebx
        fld    dword ptr [esi + eax + 0x68]
        fmul    dword ptr [esi + eax + 0x6c]
        fmul    dword ptr [g_0076df00]
        add    esi, eax
        mov    eax, dword ptr [ebp + 0xb4]
        push    ecx
        lea    ebx, [ebx + ebx*2]
        lea    edx, [esp + 0x20]
        lea    ecx, [ebx + ebx*2]
        push    edx
        lea    ecx, [eax + ecx*4]
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x2c], 0
        call    FUN_0041c7d0
        fld    dword ptr [esi + 0x68]
        mov    edx, dword ptr [esp + 0x30]
        fmul    dword ptr [esi + 0x70]
        lea    eax, [ebx + 1]
        push    edx
        lea    edx, [eax + eax*2]
        fmul    dword ptr [esi + 0x6c]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [ebp + 0xb4]
        lea    ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esi + 0x68]
        push    ecx
        fmul    dword ptr [esi + 0x6c]
        lea    ecx, [eax + edx*4]
        mov    dword ptr [esp + 0x2c], 0
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041c7d0
        fld    dword ptr [esi + 0x68]
        fmul    dword ptr [esi + 0x70]
        mov    ecx, dword ptr [esp + 0x30]
        lea    eax, [ebx + 2]
        push    ecx
        fmul    dword ptr [esi + 0x6c]
        lea    ecx, [eax + eax*2]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [ebp + 0xb4]
        fchs    
        lea    edx, [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esi + 0x68]
        push    edx
        fmul    dword ptr [esi + 0x6c]
        lea    ecx, [eax + ecx*4]
        mov    dword ptr [esp + 0x2c], 0
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041c7d0
        mov    edx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [esi + 0x1c]
        mov    dword ptr [esp + 0x2c], edx
        mov    edx, eax
        lea    ecx, [edi + 0x1ec]
        push    edx
        mov    dword ptr [esp + 0x34], eax
        call    FUN_00495e30
        mov    ecx, dword ptr [edi + 0x1f0]
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*4]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x204]
        test    al, al
        je    L_8be1
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp st(1), st(0)
L_8be1:
        mov    ebp, dword ptr [ebp + 0xb8]
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [esi + 0x18]
        shl    ebx, 4
        mov    ecx, eax
        fstp    dword ptr [ebx + ebp]
        add    ebx, ebp
        mov    dword ptr [esp + 0x14], ebp
        lea    ebp, [edi + 0x20c]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x30], edx
        mov    dword ptr [esp + 0x34], eax
        call    FUN_00495e30
        fld    dword ptr [esp + 0x30]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebp + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x224]
        test    al, al
        je    L_8c43
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp st(1), st(0)
L_8c43:
        mov    edx, dword ptr [esi + 0x1c]
        fstp    dword ptr [ebx + 4]
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, edx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ebp, [edi + 0x22c]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x34], edx
        call    FUN_00495e30
        fld    dword ptr [esp + 0x30]
        mov    edx, dword ptr [ebp + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x244]
        test    al, al
        je    L_8c96
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp st(1), st(0)
L_8c96:
        mov    ecx, dword ptr [esi + 0x1c]
        fstp    dword ptr [ebx + 8]
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, ecx
        mov    dword ptr [esp + 0x30], ecx
        lea    esi, [edi + 0x24c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x30], eax
        call    FUN_00495e30
        fld    dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x264]
        test    al, al
        je    L_8ce9
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x260]
        fadd    dword ptr [edi + 0x25c]
        fmulp st(1), st(0)
L_8ce9:
        mov    ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [ebx + 0xc]
        mov    eax, dword ptr [esp + 0x10]
        fld    dword ptr [ebx]
        shl    eax, 4
        fst    dword ptr [eax + ecx]
        add    eax, ecx
        fld    dword ptr [ebx + 4]
        pop    edi
        fst    dword ptr [esp + 0x2c]
        pop    esi
        mov    edx, dword ptr [esp + 0x28]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebx + 8]
        pop    ebp
        fst    dword ptr [esp + 0x20]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [ebx + 0xc]
        pop    ebx
        fst    dword ptr [esp + 4]
        fstp    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 8]
        shl    eax, 4
        add    eax, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], edx
        add    esp, 0x18
        ret    8
    }
}
