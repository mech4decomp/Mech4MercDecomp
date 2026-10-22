/*
 * FUN_00530117 (extent 0x530117-0x530507) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007b431c;
extern int    g_007b4320;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc6b4;
extern int    g_007dc868;
extern int    g_007dd268;
extern int    g_00858948;
extern int    g_0085894c;
extern char   g_00858955;
extern char   g_00858956;
extern char   g_00858957;
extern int    g_00858a38;
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004f2970(void);
extern void __cdecl FUN_004f2990(void);
extern void __cdecl FUN_00511a20(void);
extern void __cdecl FUN_00511a80(void);
extern void __cdecl FUN_00511aa0(void);
extern void __cdecl FUN_00511ae0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_00563c80(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_00709f20(void);
extern void __cdecl FUN_00717d80(void);

__declspec(naked) void FUN_00530117(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        push    esi
        jl    L_0352
        mov    al, byte ptr [ecx + 0x17]
        test    al, al
        jne    L_02b6
        mov    ecx, dword ptr [g_007dc868]
        test    ecx, ecx
        je    L_014a
        call    FUN_004f2970
L_014a:
        or    esi, 0xffffffff
L_014d:
        mov    ecx, dword ptr [g_007dd268]
L_0153:
        call    FUN_00511aa0
        mov    eax, dword ptr [g_007dd268]
        cmp    dword ptr [eax + 0x20], 0xe
        jne    L_020d
        push    0
        push    0
        push    0
        push    0
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858957]
        xor    edx, edx
        mov    dl, byte ptr [g_00858956]
        push    0
        mov    dword ptr [eax + 0x20], esi
        xor    eax, eax
        mov    al, byte ptr [g_00858955]
        push    ecx
        mov    ecx, dword ptr [g_0085894c]
        push    edx
        mov    edx, dword ptr [g_00858948]
        push    eax
        push    ecx
        push    edx
        push    0x258
        push    0x320
        call    FUN_00709f20
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511ae0
        mov    ecx, dword ptr [g_007dd268]
        cmp    dword ptr [ecx + 0x20], 0xf
        jne    L_0153
        push    0
        push    0
        push    0
        xor    eax, eax
        mov    al, byte ptr [g_00858957]
        push    0
        mov    dword ptr [ecx + 0x20], esi
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858956]
        push    0
        xor    edx, edx
        mov    dl, byte ptr [g_00858955]
        push    eax
        mov    eax, dword ptr [g_0085894c]
        push    ecx
        mov    ecx, dword ptr [g_00858948]
        push    edx
        mov    edx, dword ptr [g_007b4320]
        push    eax
        mov    eax, dword ptr [g_007b431c]
        push    ecx
        push    edx
        push    eax
        call    FUN_00709f20
        jmp    L_014d
L_020d:
        mov    ecx, dword ptr [g_007dc868]
        test    ecx, ecx
        je    L_021c
        call    FUN_004f2990
L_021c:
        call    FUN_00717d80
        mov    ecx, dword ptr [g_007dd268]
        mov    eax, dword ptr [ecx + 0x20]
        cmp    eax, 7
        jne    L_0240
        mov    dword ptr [ecx + 0x20], esi
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_0240:
        cmp    eax, 4
        jne    L_027a
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 0x2c]
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x20], esi
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_027a:
        cmp    eax, 6
        jne    L_02a8
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [g_007dd268]
        mov    dword ptr [eax + 0x24], esi
        mov    dword ptr [eax + 0x20], esi
L_02a8:
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_02b6:
        mov    ecx, dword ptr [g_007dd268]
        cmp    dword ptr [ecx + 0x1c], 6
        je    L_030b
        call    FUN_00511a20
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x2c]
        mov    dword ptr [g_00858a38], 0x535260
        mov    cl, 1
        je    L_02fb
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0x8fc], cl
L_02fb:
        mov    eax, dword ptr [g_007dc6b4]
        test    eax, eax
        je    L_0352
        mov    byte ptr [eax + 0x2d], cl
        pop    esi
        ret    4
L_030b:
        call    FUN_00511a80
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x2c]
        mov    dword ptr [g_00858a38], 0x538000
        je    L_0345
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x8fc], 0
L_0345:
        mov    eax, dword ptr [g_007dc6b4]
        test    eax, eax
        je    L_0352
        mov    byte ptr [eax + 0x2d], 0
L_0352:
        pop    esi
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    eax, edi
        shl    eax, 7
        add    eax, edi
        shl    eax, 3
        mov    ebp, ecx
        sub    eax, edi
        mov    ecx, dword ptr [ebp + eax*8 + 0x3584]
        lea    esi, [ebp + eax*8]
        mov    eax, dword ptr [ecx + 0x170]
        mov    edx, dword ptr [eax + 0x5c]
        mov    eax, dword ptr [eax + 0x3b8]
        mov    ecx, dword ptr [g_007dab44]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    edi
        xor    ecx, 0x85739531
        mov    dword ptr [esp + 0x14], edx
        call    FUN_004cdfa0
        mov    eax, dword ptr [eax + 0x30]
        mov    cl, byte ptr [eax]
        xor    ebx, ebx
        cmp    cl, bl
        jne    L_03c6
        mov    eax, 0x77b1f0
L_03c6:
        lea    ecx, [esi + 0x4074]
        mov    edx, 0xdd
L_03d1:
        mov    dword ptr [ecx - 0x374], ebx
        mov    dword ptr [ecx], ebx
        mov    dword ptr [ecx - 0xa5c], ebx
        mov    dword ptr [ecx - 0x6e8], ebx
        add    ecx, 4
        dec    edx
        jne    L_03d1
        lea    ecx, [esi + 0x4844]
        mov    edx, 0x117
L_03f6:
        mov    dword ptr [ecx - 0x45c], ebx
        mov    dword ptr [ecx], ebx
        mov    dword ptr [ecx + 0x45c], ebx
        mov    dword ptr [ecx + 0x8b8], ebx
        add    ecx, 4
        dec    edx
        jne    L_03f6
        fld    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x35f0], 1
        mov    edx, dword ptr [esi + 0x3590]
        push    edx
        sub    esp, 8
        fstp    qword ptr [esp]
        push    ecx
        push    eax
        push    edi
        push    0x77b1d0
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    edx, dword ptr [ebp + 0x50]
        mov    eax, dword ptr [edx + 0xe4]
        add    esp, 0x20
        cmp    eax, ebx
        je    L_046d
        mov    eax, dword ptr [esi + 0x3548]
        push    eax
        push    edi
        push    0x77b1bc
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add    esp, 0x10
L_046d:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x20]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x20]
        je    L_04b9
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        cmp    byte ptr [eax + 0x2214], bl
        jne    L_04a6
        fld    dword ptr [g_0076c5b0]
        fstp    qword ptr [esi + 0x35f4]
        jmp    L_04c9
L_04a6:
        lea    ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fstp    qword ptr [esi + 0x35f4]
        jmp    L_04c9
L_04b9:
        mov    dword ptr [esi + 0x35f4], ebx
        mov    dword ptr [esi + 0x35f8], 0xbff00000
L_04c9:
        mov    dword ptr [esi + 0x3608], ebx
        mov    dword ptr [esi + 0x360c], ebx
        mov    eax, dword ptr [esi + 0x3600]
        mov    edx, dword ptr [esi + 0x35fc]
        mov    ecx, eax
        sub    ecx, eax
        sar    ecx, 2
        cmp    ecx, ebx
        jle    L_04f9
L_04ec:
        mov    edi, dword ptr [eax]
        mov    dword ptr [edx], edi
        add    eax, 4
        add    edx, 4
        dec    ecx
        jne    L_04ec
L_04f9:
        pop    edi
        mov    dword ptr [esi + 0x3600], edx
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
