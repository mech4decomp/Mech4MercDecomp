/*
 * FUN_00537f95 (extent 0x537f95-0x538498) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0077b290;
extern float  g_0077b63c;
extern float  g_0077b640;
extern float  g_0077b648;
extern float  g_0077b650;
extern int    g_007da848;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern int    g_007dc6d4;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_004d3c10(void);
extern void __cdecl FUN_004e0900(void);
extern void __cdecl FUN_005384a0(void);
extern void __cdecl FUN_0053c120(void);
extern void __cdecl FUN_0053e860(void);
extern void __cdecl FUN_005436f0(void);
extern void __cdecl FUN_005462a0(void);
extern void __cdecl FUN_00548140(void);
extern void __cdecl FUN_00565af0(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_00611a40(void);
extern void __cdecl FUN_0061b270(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004d3f50(void);
extern void __cdecl FUN_0053fa70(void);

__declspec(naked) void FUN_00537f95(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        jmp    FUN_0053fa70
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x308d]
        test    al, al
        je    L_7ff5
        push    0
        call    FUN_00707e70
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_00611a40
        add    esp, 8
L_7ff5:
        jmp    FUN_004d3f50
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0xc]
        xor    esi, 0x85739531
        mov    cl, byte ptr [esi + 0xcd]
        test    cl, cl
        push    edi
        je    L_8059
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        je    L_8059
        mov    ecx, dword ptr [g_007db094]
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x28]
        mov    ecx, dword ptr [eax + 0x14]
        push    1
        push    0
        push    0x19
        xor    ecx, 0x85739531
        push    edx
        call    FUN_004ce190
        mov    byte ptr [esi + 0xcd], 0
L_8059:
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        je    L_8412
        mov    edx, dword ptr [esi + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_80f2
        mov    edi, dword ptr [esi + 0x3064]
        cmp    edi, dword ptr [esi + 0x3068]
        je    L_80f2
L_807f:
        mov    ebx, dword ptr [edi]
        fild    dword ptr [ebx + 4]
        mov    ebp, dword ptr [ebx]
        push    0
        fadd    dword ptr [g_0077b650]
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        fcomp    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_80b7
        mov    eax, dword ptr [esi + 0x3068]
        add    edi, 4
        cmp    edi, eax
        jne    L_807f
        jmp    L_80f2
L_80b7:
        push    0
        push    ebp
        mov    ecx, esi
        call    FUN_005462a0
        mov    ebp, dword ptr [esi + 0x3068]
        lea    eax, [edi + 4]
        cmp    eax, ebp
        je    L_80e0
        mov    ecx, dword ptr [esp + 0x10]
        push    0
        push    ecx
        push    edi
        push    ebp
        push    eax
        call    FUN_00548140
        add    esp, 0x14
L_80e0:
        add    ebp, -4
        push    ebx
        mov    dword ptr [esi + 0x3068], ebp
        call    FUN_004084e0
        add    esp, 4
L_80f2:
        mov    ecx, dword ptr [esi + 0x307c]
        test    ecx, ecx
        je    L_8101
        call    FUN_0061b270
L_8101:
        mov    al, byte ptr [esi + 0x17]
        test    al, al
        je    L_810d
        call    FUN_00565af0
L_810d:
        mov    eax, dword ptr [esi + 0x3088]
        test    eax, eax
        je    L_81b8
        xor    ebx, ebx
        lea    ebp, [esi + 0x3558]
L_8123:
        mov    al, byte ptr [ebp - 0x17]
        test    al, al
        je    L_81a5
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        push    ebx
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        mov    eax, dword ptr [eax + 0x2c]
        push    0
        push    eax
        push    0x15
        call    FUN_00701f20
        cmp    eax, 3
        jae    L_81a5
        mov    edi, dword ptr [ebp]
        mov    ecx, dword ptr [esi + 0x3088]
        lea    eax, [edi + edi*4]
        lea    edx, [ecx + eax*8]
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        push    1
        push    edx
        xor    ecx, eax
        mov    ecx, dword ptr [ecx + 0x14]
        push    0x2f
        push    ebx
        xor    ecx, 0x85739531
        call    FUN_004ce190
        lea    eax, [edi + 1]
        mov    dword ptr [ebp], eax
        cmp    eax, dword ptr [esi + 0x3084]
        jl    L_81a5
        mov    dword ptr [ebp], 0
        mov    byte ptr [ebp - 0x17], 0
L_81a5:
        inc    ebx
        add    ebp, 0x2038
        cmp    ebx, 0xff
        jl    L_8123
L_81b8:
        mov    al, byte ptr [esi + 0x239df0]
        test    al, al
        je    L_820c
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        je    L_820c
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x64]
        fcomp    qword ptr [g_0077b640]
        fnstsw  ax
        test    ah, 0x41
        jne    L_820c
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x64]
        mov    ecx, esi
        mov    byte ptr [esi + 0x239df0], 0
        call    FUN_0053e860
L_820c:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x6c]
        fcomp    qword ptr [g_0077b640]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8234
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x6c]
        mov    ecx, esi
        call    FUN_005436f0
L_8234:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    edi, dword ptr [g_007dab40]
        mov    ebx, dword ptr [esi + 0x50]
        xor    eax, edi
        mov    ecx, dword ptr [eax + 0x20]
        add    eax, 0x20
        xor    ecx, 0x85739531
        mov    byte ptr [esi + 0x3520], 0
        mov    byte ptr [esi + 0x3518], 0
        mov    byte ptr [esi + 0x3528], 0
        je    L_8308
        mov    edi, dword ptr [eax]
        xor    edi, 0x85739531
        mov    al, byte ptr [edi + 0x21e4]
        test    al, al
        mov    byte ptr [esi + 0x3520], 1
        jne    L_828f
        fld    dword ptr [g_0076c5b0]
        jmp    L_82a0
L_828f:
        lea    ecx, [edi + 0x21b8]
        call    FUN_006100a0
        fsubr    dword ptr [edi + 0x2218]
L_82a0:
        mov    eax, dword ptr [ebx + 0x24]
        fstp    dword ptr [esi + 0x3524]
        test    eax, eax
        je    L_8334
        mov    al, byte ptr [edi + 0x2214]
        test    al, al
        mov    byte ptr [esi + 0x3518], 1
        jne    L_82ca
        fld    dword ptr [g_0076c5b0]
        jmp    L_82d5
L_82ca:
        lea    ecx, [edi + 0x21e8]
        call    FUN_006100a0
L_82d5:
        mov    eax, dword ptr [ebx + 0x28]
        lea    eax, [eax + eax*2]
        lea    edx, [eax + eax*4]
        shl    edx, 2
        mov    dword ptr [esp + 0x10], edx
        fisubr    dword ptr [esp + 0x10]
        fst    dword ptr [esi + 0x351c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8334
        mov    dword ptr [esi + 0x351c], 0
        jmp    L_8334
L_8308:
        mov    al, byte ptr [esi + 0x7c]
        test    al, al
        je    L_8334
        fild    dword ptr [ebx + 0x9c]
        push    0
        mov    byte ptr [esi + 0x3528], 1
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x74]
        fsubr    qword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x352c]
L_8334:
        mov    eax, dword ptr [esi + 0x4c]
        cmp    dword ptr [eax + 0x14], 5
        jne    L_8412
        xor    edi, edi
        lea    ebp, [esi + 0x3542]
L_8349:
        mov    al, byte ptr [ebp - 0xa]
        test    al, al
        je    L_83ff
        cmp    byte ptr [ebp], 0
        je    L_83ff
        cmp    byte ptr [esi + 0x17], 1
        mov    byte ptr [esp + 0x10], 0
        jne    L_83f2
        mov    eax, dword ptr [ebx + 0x38]
        test    eax, eax
        je    L_83f2
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x20]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x20]
        je    L_83f2
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x24]
        xor    eax, 0x85739531
        test    ecx, ecx
        mov    cl, byte ptr [eax + 0x2214]
        je    L_83d1
        test    cl, cl
        jne    L_83b0
        fld    dword ptr [g_0076c5b0]
        jmp    L_83bb
L_83b0:
        lea    ecx, [eax + 0x21e8]
        call    FUN_006100a0
L_83bb:
        fild    dword ptr [ebx + 0x28]
        fmul    dword ptr [g_0077b290]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_83f2
        jmp    L_83ed
L_83d1:
        test    cl, cl
        je    L_83f2
        lea    ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fcomp    dword ptr [g_0077b63c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_83f2
L_83ed:
        mov    byte ptr [esp + 0x10], 1
L_83f2:
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0053c120
L_83ff:
        inc    edi
        add    ebp, 0x2038
        cmp    edi, 0xff
        jl    L_8349
L_8412:
        mov    eax, dword ptr [esi + 0x4c]
        cmp    dword ptr [eax + 0x14], 4
        jne    L_8484
        mov    al, byte ptr [esi + 0x3530]
        test    al, al
        jne    L_8484
        mov    ecx, dword ptr [g_007dc6d4]
        push    0
        mov    bl, 1
        call    FUN_004e0900
        test    eax, eax
        je    L_843a
        xor    bl, bl
L_843a:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + 8]
        test    eax, eax
        je    L_844c
        cmp    dword ptr [eax], 0
        jne    L_8484
L_844c:
        test    bl, bl
        je    L_8484
        mov    eax, dword ptr [g_007db094]
        mov    ecx, dword ptr [g_007dab44]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x28]
        push    1
        push    0
        push    0x16
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004ce190
        mov    byte ptr [esi + 0x3530], 1
L_8484:
        mov    ecx, esi
        call    FUN_005384a0
        call    FUN_004d3c10
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    
    }
}
