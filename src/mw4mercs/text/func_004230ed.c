/*
 * FUN_004230ed (extent 0x4230ed-0x42352c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076de10;
extern int    g_007b94a0;
extern int    g_007b95e4;
extern int    g_007b95e8;
extern int    g_007b95ec;
extern int    g_007b95f0;
extern int    g_007b95f4;
extern int    g_007b95f8;
extern int    g_007b9600;
extern int    g_007b9604;
extern int    g_007b960c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00423b60(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_004919c0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004230ed(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b95f8]
        mov    ecx, dword ptr [eax + 4]
        sub    ecx, dword ptr [g_007b9600]
        cmp    ecx, dword ptr [esp + 4]
        sbb    eax, eax
        neg    eax
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x78
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        call    dword ptr [eax + 4]
        mov    ebx, eax
        xor    edi, edi
        lea    ecx, [ebp - 0x78]
        mov    dword ptr [ebp - 0x30], ebx
        mov    dword ptr [ebp - 0x1c], edi
        mov    dword ptr [ebp - 4], edi
        call    FUN_00491280
        lea    ecx, [ebp - 0x48]
        call    FUN_00491280
        mov    esi, dword ptr [g_007b960c]
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esi + 8], 0xffffffec
        call    dword ptr [eax + 4]
        cmp    eax, ebx
        mov    dword ptr [g_007b95e8], edi
        jae    L_344f
L_316f:
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        lea    eax, [ebp - 0x18]
        push    eax
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebp - 0x18]
        cmp    eax, 3
        ja    L_342a
        jmp    dword ptr [eax*4 + 0x42352c]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        lea    eax, [ebp - 0x14]
        push    eax
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0x1c], ecx
        jmp    L_343c
        mov    edx, dword ptr [g_007b960c]
        push    edx
        lea    ecx, [ebp - 4]
        call    FUN_004919c0
        jmp    L_343c
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        push    4
        lea    edx, [ebp - 0x20]
        push    edx
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_31f9
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
L_31f9:
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0x48], eax
        mov    dword ptr [ebp - 0x44], ecx
        jmp    L_343c
        lea    ecx, [ebp - 0x60]
        call    FUN_00491280
        mov    edx, dword ptr [g_007b960c]
        push    0x12
        push    edx
        lea    ecx, [ebp - 0x60]
        call    FUN_00491440
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx + 0x14]
        test    al, 3
        je    L_3241
        mov    edx, dword ptr [ecx]
        neg    eax
        and    eax, 3
        push    eax
        call    dword ptr [edx + 0x18]
        mov    ecx, dword ptr [g_007b960c]
L_3241:
        mov    eax, dword ptr [ecx]
        push    4
        lea    edx, [ebp - 0xc]
        push    edx
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        push    4
        lea    eax, [ebp - 0x28]
        push    eax
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebp - 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        jle    L_343c
        mov    ecx, dword ptr [ebp - 0x10]
        test    ecx, ecx
        jle    L_343c
        mov    edx, dword ptr [g_007b95e4]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [g_007b95f8]
        mov    edx, dword ptr [g_007b95e8]
        mov    esi, dword ptr [esi]
        mov    ecx, dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [ebp - 0xc]
        lea    eax, [eax + eax*2]
        lea    eax, [esi + eax*4]
        push    eax
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        mov    ecx, dword ptr [edx + eax*4]
        mov    eax, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [g_007b95f4]
        mov    eax, dword ptr [eax]
        lea    eax, [eax + esi*8]
        push    eax
        call    dword ptr [edx + 0x2c]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        mov    ecx, dword ptr [edx + eax*4]
        mov    eax, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [g_007b95ec]
        mov    eax, dword ptr [eax]
        lea    eax, [eax + esi*4]
        push    eax
        call    dword ptr [edx + 0xa4]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        mov    ecx, dword ptr [edx + eax*4]
        mov    eax, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [g_007b95f0]
        mov    eax, dword ptr [eax]
        add    eax, edi
        push    eax
        call    dword ptr [edx + 0x88]
        fild    dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        fmul    dword ptr [g_0076de10]
        mov    esi, dword ptr [edx + eax*4]
        mov    edi, dword ptr [esi]
        push    0
        call    FUN_0075db4a
        push    eax
        push    0
        mov    ecx, esi
        call    dword ptr [edi + 0xc]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        mov    ecx, dword ptr [edx + eax*4]
        mov    edx, dword ptr [ecx]
        push    0
        lea    eax, [ebp - 0x60]
        push    eax
        call    dword ptr [edx + 0x14]
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007b95e8]
        mov    ecx, dword ptr [edx + eax*4]
        mov    edx, dword ptr [ecx]
        lea    eax, [ebp - 0x48]
        push    eax
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007b95e8]
        mov    edx, dword ptr [g_007b95e4]
        mov    eax, dword ptr [edx + 4]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [g_007b95e8], ecx
        jb    L_343c
        lea    esi, [eax + eax]
        mov    edi, edx
        cmp    esi, dword ptr [edi + 4]
        je    L_343c
        test    esi, esi
        jbe    L_3414
        lea    ecx, [esi*4]
        push    ecx
        call    FUN_004084d0
        mov    edx, dword ptr [edi]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        mov    dword ptr [ebp - 0x2c], ebx
        je    L_340a
        mov    ecx, dword ptr [edi + 4]
        cmp    esi, ecx
        jae    L_33e2
        mov    ecx, esi
L_33e2:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_33ff
        lea    eax, [ebx + ecx*4]
        sub    edx, ebx
        inc    ecx
L_33ef:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_33ef
        mov    ebx, dword ptr [ebp - 0x2c]
L_33ff:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_340a:
        mov    dword ptr [edi], ebx
        mov    ebx, dword ptr [ebp - 0x30]
        mov    dword ptr [edi + 4], esi
        jmp    L_343c
L_3414:
        mov    ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi], 0
        mov    dword ptr [edi + 4], esi
        jmp    L_343c
L_342a:
        push    0x76ddf0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_343c
        int 3    
L_343c:
        mov    ecx, dword ptr [g_007b960c]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        cmp    eax, ebx
        jb    L_316f
L_344f:
        mov    eax, dword ptr [g_007b95e8]
        xor    esi, esi
        test    eax, eax
        jle    L_3523
        mov    edi, dword ptr [ebp + 8]
L_3461:
        mov    eax, dword ptr [g_007b95e4]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx + esi*4]
        mov    edx, dword ptr [ecx]
        push    1
        push    1
        call    dword ptr [edx + 0x40]
        mov    eax, dword ptr [g_007b95e4]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx + esi*4]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
        test    byte ptr [ebp - 4], 0x3f
        je    L_34c7
        mov    ecx, dword ptr [g_007b95e4]
        push    esi
        call    FUN_00423b60
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [g_007b9604]
        mov    ebx, dword ptr [edi]
        push    1
        push    eax
        push    0
        push    ecx
        push    ecx
        lea    edx, [ebp - 4]
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    eax, dword ptr [ebp - 0x1c]
        push    eax
        mov    ecx, edi
        call    dword ptr [ebx + 0x64]
        mov    edi, dword ptr [ebp + 8]
        jmp    L_34ed
L_34c7:
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ecx]
        push    1
        push    edx
        mov    edx, dword ptr [g_007b9604]
        push    0
        push    edx
        mov    edx, dword ptr [ebp - 0x1c]
        push    edx
        call    dword ptr [eax + 0x68]
L_34ed:
        mov    eax, dword ptr [g_007b95e4]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx + esi*4]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x44]
        test    eax, eax
        je    L_3515
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edx + esi*4]
        mov    eax, dword ptr [edi]
        push    0
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x18]
L_3515:
        mov    eax, dword ptr [g_007b95e8]
        inc    esi
        cmp    esi, eax
        jl    L_3461
L_3523:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        mov    edi, edi
        // jump-table data @ 0x0042352C (0 relocated pointers)
    }
}
