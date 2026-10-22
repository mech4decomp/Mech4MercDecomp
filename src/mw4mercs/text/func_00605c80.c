/*
 * FUN_00605c80 (2237 B) — Animation hierarchy combine routine.
 *
 * __cdecl (3 stack params at EBP+8/+0xc/+0x10), RET 0xc.
 * Heavy FPU + keyframe interpolation across 4 type cases (0/1/2/3/4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00698d20(void);
extern void __cdecl FUN_00698d60(void);
extern void __cdecl FUN_00698f50(void);
extern void __cdecl FUN_00698f80(void);
extern void __cdecl FUN_00699a60(void);
extern void __cdecl FUN_006999b0(void);
extern void __cdecl FUN_00699940(void);
extern void __cdecl FUN_00699920(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_00699b80(void);
extern void __cdecl FUN_00699a80(void);
extern void __cdecl FUN_00699980(void);
extern void __cdecl FUN_00699960(void);
extern void __cdecl FUN_0041b720(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_00699aa0(void);
extern void __cdecl FUN_0041bd00(void);
extern void __cdecl FUN_00699cb0(void);

extern float g_76d5ec;
extern int g_7b8d8c;
extern int g_7b8d90;
extern int g_7b8d88;
extern int g_7b8cd8;
extern int g_7b8cdc;
extern int g_7b8ce0;
extern int g_7b8d6c;
extern int g_7b8ce4;
extern int g_7b8d68;
extern int g_7b8d70;
extern char g_7b556c;

__declspec(naked) void __cdecl FUN_00605c80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x170
        fld     dword ptr [ebp + 0x10]
        push    esi
        fabs
        fcomp   dword ptr [g_76d5ec]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6536
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi + 0x18]
        mov     eax, dword ptr [eax + 0x30]
        shr     eax, 4
        test    eax, eax
        mov     byte ptr [ebp - 0x60], 0
        jle     L6536
        push    ebx
        push    edi
        xor     edi, edi
L5CBC:
        mov     edx, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [edx + 0x10]
        mov     ecx, dword ptr [ecx + 0x2c]
        mov     edx, dword ptr [edx + 0x14]
        mov     eax, edi
        shl     eax, 4
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + eax + 0xf]
        add     ecx, eax
        mov     ebx, dword ptr [edx + ebx*4]
        cmp     ebx, -1
        jz      L6517
        mov     dl, byte ptr [esi + 0x24]
        test    dl, dl
        jz      L5D06
        mov     edx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [edx + 0x2c]
        cmp     byte ptr [edx + eax + 0xd], 0
        jz      L5D06
        mov     edx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [edx + 0x2c]
        cmp     byte ptr [edx + eax + 0xd], 4
        jnz     L6517
L5D06:
        mov     cl, byte ptr [ecx + 0xd]
        test    cl, cl
        jnz     L5F24
        push    edi
        mov     ecx, esi
        call    FUN_00698d20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_00698d60
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_00698f80
        mov     ecx, dword ptr [g_7b8d8c]
        mov     edx, dword ptr [g_7b8d90]
        mov     edi, eax
        mov     eax, dword ptr [g_7b8d88]
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [ebp - 8]
        test    eax, eax
        mov     dword ptr [ebp - 0x28], ecx
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        jz      L5E16
        mov     ecx, dword ptr [ebp - 4]
        fld     dword ptr [esi + 0x10]
        test    ecx, ecx
        push    ecx
        fstp    dword ptr [esp]
        jz      L5DD7
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    ecx
        push    eax
        lea     eax, [ebp - 0xe0]
        push    eax
        call    FUN_00699a60
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x14], ecx
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [eax + 8]
        mov     edx, dword ptr [ebp - 4]
        fstp    dword ptr [esp]
        push    ecx
        push    edi
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp - 8]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x104]
        push    ecx
        call    FUN_006999b0
L5DBE:
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x2c], edx
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x28], ecx
        mov     edx, dword ptr [eax + 8]
        add     esp, 0x18
        mov     dword ptr [ebp - 0x24], edx
        jmp     L5E7B
L5DD7:
        push    edi
        push    edi
        push    eax
        push    eax
        lea     eax, [ebp - 0x98]
        push    eax
        call    FUN_00699940
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x14], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [eax + 8]
        fstp    dword ptr [esp]
        push    edi
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp - 8]
        push    edi
        push    eax
        push    eax
        lea     ecx, [ebp - 0xb0]
        push    ecx
        call    FUN_00699920
        jmp     L5DBE
L5E16:
        mov     edi, dword ptr [ebp - 4]
        test    edi, edi
        jz      L5E69
        fld     dword ptr [esi + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    eax
        push    edi
        lea     eax, [ebp - 0xc8]
        push    edi
        push    eax
        call    FUN_00699940
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x14], ecx
        mov     edx, dword ptr [eax + 4]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp + 0xc]
        fstp    dword ptr [esp]
        push    eax
        push    eax
        push    edi
        lea     ecx, [ebp - 0xa4]
        push    edi
        push    ecx
        call    FUN_00699920
        jmp     L5DBE
L5E69:
        push    0x78ba04
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L5E7B
        int     3
L5E7B:
        fld     dword ptr [esi + 0x14]
        mov     ecx, dword ptr [ebp + 8]
        mov     al, byte ptr [ebx + ecx + 4]
        fld     st(0)
        test    al, 0x2
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        fstp    st(0)
        jnz     L5EC3
        mov     edx, dword ptr [ebp - 0x2c]
        or      al, 0x2
        mov     byte ptr [ebx + ecx + 4], al
        lea     eax, [ebx + ebx*2]
        lea     edi, [ecx + eax*4]
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [edi + 0x4c], edx
        mov     edx, dword ptr [ebp - 0x24]
        mov     dword ptr [edi + 0x50], eax
        mov     dword ptr [edi + 0x54], edx
        jmp     L5EDD
L5EC3:
        mov     edx, dword ptr [ebp + 0x10]
        lea     eax, [ebx + ebx*2]
        lea     edi, [ecx + eax*4]
        push    edx
        lea     eax, [ebp - 0x2c]
        lea     ecx, [edi + 0x4c]
        push    eax
        push    ecx
        call    FUN_0040cb70
        mov     ecx, dword ptr [ebp + 8]
L5EDD:
        mov     al, byte ptr [ebx + ecx + 4]
        test    al, 0x4
        jnz     L5F0B
        mov     edx, dword ptr [ebp - 0x10]
        or      al, 0x4
        mov     byte ptr [ebx + ecx + 4], al
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [edi + 0x394], ecx
        mov     dword ptr [edi + 0x398], edx
        mov     dword ptr [edi + 0x39c], eax
        jmp     L6517
L5F0B:
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        lea     eax, [ebp - 0x14]
        lea     ecx, [edi + 0x394]
        push    eax
        push    ecx
        call    FUN_0040cb70
        jmp     L6517
L5F24:
        cmp     cl, 4
        jnz     L61D0
        push    edi
        mov     ecx, esi
        call    FUN_00698d20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_00698d60
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_00698f50
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_00698f80
        mov     ecx, dword ptr [g_7b8cd8]
        mov     edx, dword ptr [g_7b8cdc]
        mov     edi, eax
        mov     eax, dword ptr [g_7b8ce0]
        mov     dword ptr [ebp - 0x44], eax
        mov     eax, dword ptr [g_7b8d6c]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     ecx, dword ptr [g_7b8ce4]
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [ebp - 4]
        test    eax, eax
        mov     dword ptr [ebp - 0x48], edx
        mov     edx, dword ptr [g_7b8d68]
        mov     dword ptr [ebp - 0x40], ecx
        mov     ecx, dword ptr [g_7b8d70]
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x18], ecx
        jz      L6055
        mov     ecx, dword ptr [ebp - 8]
        fld     dword ptr [esi + 0x10]
        test    ecx, ecx
        push    ecx
        fstp    dword ptr [esp]
        jz      L6010
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    ecx
        push    eax
        lea     eax, [ebp - 0x120]
        push    eax
        call    FUN_00699b80
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x48], edx
        mov     ecx, dword ptr [eax + 8]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x44], ecx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 8]
        fstp    dword ptr [esp]
        push    eax
        push    edi
        mov     dword ptr [ebp - 0x40], edx
        mov     edx, dword ptr [ebp - 4]
        push    ecx
        push    edx
        lea     eax, [ebp - 0x8c]
        push    eax
        call    FUN_00699a80
L5FFA:
        mov     ecx, dword ptr [eax + 4]
        fld     dword ptr [eax]
        mov     edx, dword ptr [eax + 8]
        add     esp, 0x18
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x18], edx
        jmp     L60C3
L6010:
        push    edi
        push    edi
        push    eax
        push    eax
        lea     eax, [ebp - 0x140]
        push    eax
        call    FUN_00699980
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     edx, dword ptr [eax + 4]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x48], edx
        mov     ecx, dword ptr [eax + 8]
        fstp    dword ptr [esp]
        push    edi
        mov     dword ptr [ebp - 0x44], ecx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    eax
        lea     eax, [ebp - 0xbc]
        push    eax
        mov     dword ptr [ebp - 0x40], edx
        call    FUN_00699960
        jmp     L5FFA
L6055:
        mov     edi, dword ptr [ebp - 8]
        test    edi, edi
        jz      L60AE
        fld     dword ptr [esi + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    eax
        push    edi
        lea     eax, [ebp - 0x160]
        push    edi
        push    eax
        call    FUN_00699980
        fld     dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x48], edx
        mov     ecx, dword ptr [eax + 8]
        add     esp, 0x14
        mov     dword ptr [ebp - 0x44], ecx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        fstp    dword ptr [esp]
        push    eax
        push    eax
        push    edi
        lea     eax, [ebp - 0xf8]
        push    edi
        push    eax
        mov     dword ptr [ebp - 0x40], edx
        call    FUN_00699960
        jmp     L5FFA
L60AE:
        push    0x78ba04
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L60C0
        int     3
L60C0:
        fld     dword ptr [ebp - 0x20]
L60C3:
        mov     eax, dword ptr [esi + 0x14]
        mov     edi, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x5c], eax
        fld     dword ptr [ebp - 0x5c]
        mov     al, byte ptr [ebx + edi + 4]
        test    al, 0x10
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        fstp    st(0)
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x18]
        jnz     L6123
        mov     edx, dword ptr [ebp - 0x4c]
        or      al, 0x10
        mov     byte ptr [ebx + edi + 4], al
        mov     ecx, ebx
        shl     ecx, 4
        lea     eax, [ecx + edi + 0x6dc]
        mov     ecx, dword ptr [ebp - 0x48]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebp - 0x44]
        mov     dword ptr [eax + 0xc], ecx
        lea     ecx, [ebp - 0x4c]
        mov     dword ptr [eax + 8], edx
        call    FUN_0041b720
        jmp     L6164
L6123:
        mov     edx, ebx
        shl     edx, 4
        lea     ecx, [edx + edi + 0x6dc]
        mov     eax, ecx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x80], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x7c], edx
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ebp - 0x78], edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     dword ptr [ebp - 0x74], eax
        lea     eax, [ebp - 0x4c]
        push    eax
        lea     edx, [ebp - 0x80]
        push    edx
        mov     dword ptr [ebp + 0xc], ecx
        call    FUN_0041bb80
        mov     ecx, dword ptr [ebp + 0xc]
        call    FUN_0041b680
L6164:
        mov     al, byte ptr [ebx + edi + 4]
        test    al, 0x8
        jnz     L6192
        mov     ecx, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x1c]
        or      al, 0x8
        mov     byte ptr [ebx + edi + 4], al
        lea     eax, [ebx + ebx*2]
        lea     edi, [edi + eax*4 + 0xb3c]
        mov     eax, dword ptr [ebp - 0x18]
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 4], edx
        mov     dword ptr [edi + 8], eax
        jmp     L6517
L6192:
        fld     dword ptr [ebp - 0x20]
        lea     ecx, [ebx + ebx*2]
        fsub    dword ptr [edi + ecx*4 + 0xb3c]
        lea     eax, [edi + ecx*4 + 0xb3c]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        jmp     L6517
L61D0:
        cmp     cl, 1
        jnz     L631B
        push    edi
        mov     ecx, esi
        call    FUN_00698d20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov     ecx, dword ptr [g_7b8d8c]
        mov     edx, dword ptr [g_7b8d88]
        mov     dword ptr [ebp - 0x54], ecx
        mov     ecx, dword ptr [ebp - 8]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x58], edx
        mov     edx, dword ptr [g_7b8d90]
        mov     dword ptr [ebp - 0x50], edx
        jz      L626A
        mov     edx, dword ptr [ebp + 0xc]
        fld     dword ptr [esi + 0x10]
        test    edx, edx
        push    ecx
        fstp    dword ptr [esp]
        jz      L6258
        mov     edi, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    edx
        push    ecx
        lea     eax, [ebp - 0xd4]
        push    eax
        call    FUN_006999b0
L6245:
        mov     ecx, dword ptr [eax + 4]
        fld     dword ptr [eax]
        mov     edx, dword ptr [eax + 8]
        add     esp, 0x18
        mov     dword ptr [ebp - 0x54], ecx
        mov     dword ptr [ebp - 0x50], edx
        jmp     L62A2
L6258:
        push    eax
        push    eax
        push    ecx
        push    ecx
        lea     eax, [ebp - 0x110]
        push    eax
        call    FUN_00699920
        jmp     L6245
L626A:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L628D
        fld     dword ptr [esi + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp - 4]
        fstp    dword ptr [esp]
        push    ecx
        push    ecx
        push    eax
        push    eax
        lea     eax, [ebp - 0xec]
        push    eax
        call    FUN_00699920
        jmp     L6245
L628D:
        push    0x78ba04
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L629F
        int     3
L629F:
        fld     dword ptr [ebp - 0x58]
L62A2:
        mov     ecx, dword ptr [ebp + 8]
        mov     al, byte ptr [ebx + ecx + 4]
        test    al, 0x2
        jnz     L62CD
        or      al, 0x2
        mov     byte ptr [ebx + ecx + 4], al
        lea     eax, [ebx + ebx*2]
        lea     eax, [ecx + eax*4 + 0x4c]
L62BA:
        mov     ecx, dword ptr [ebp - 0x54]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x50]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        jmp     L6517
L62CD:
        mov     dl, byte ptr [g_7b556c]
        test    dl, dl
        jz      L630C
        lea     eax, [ebx + ebx*2]
        fsub    dword ptr [ecx + eax*4 + 0x4c]
        lea     eax, [ecx + eax*4 + 0x4c]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x54]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [ebp - 0x50]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        jmp     L6517
L630C:
        or      al, 0x2
        lea     edx, [ebx + ebx*2]
        mov     byte ptr [ebx + ecx + 4], al
        lea     eax, [ecx + edx*4 + 0x4c]
        jmp     L62BA
L631B:
        cmp     cl, 2
        jnz     L647D
        push    edi
        mov     ecx, esi
        call    FUN_00698d20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov     ecx, dword ptr [g_7b8cd8]
        mov     edx, dword ptr [g_7b8cdc]
        mov     dword ptr [ebp - 0x3c], ecx
        mov     ecx, dword ptr [g_7b8ce0]
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [ebp - 8]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x38], edx
        mov     edx, dword ptr [g_7b8ce4]
        mov     dword ptr [ebp - 0x30], edx
        jz      L63C7
        mov     edx, dword ptr [ebp + 0xc]
        fld     dword ptr [esi + 0x10]
        test    edx, edx
        push    ecx
        fstp    dword ptr [esp]
        jz      L63B5
        mov     edi, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    edx
        push    ecx
        lea     eax, [ebp - 0x130]
        push    eax
        call    FUN_00699aa0
L6399:
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x3c], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x38], edx
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [ebp - 0x34], ecx
        mov     edx, dword ptr [eax + 0xc]
        add     esp, 0x18
        mov     dword ptr [ebp - 0x30], edx
        jmp     L63FC
L63B5:
        push    eax
        push    eax
        push    ecx
        push    ecx
        lea     eax, [ebp - 0x150]
        push    eax
        call    FUN_00699980
        jmp     L6399
L63C7:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L63EA
        fld     dword ptr [esi + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp - 4]
        fstp    dword ptr [esp]
        push    ecx
        push    ecx
        push    eax
        push    eax
        lea     eax, [ebp - 0x170]
        push    eax
        call    FUN_00699980
        jmp     L6399
L63EA:
        push    0x78ba04
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L63FC
        int     3
L63FC:
        mov     edi, dword ptr [ebp + 8]
        mov     al, byte ptr [ebx + edi + 4]
        test    al, 0x10
        jnz     L643B
        or      al, 0x10
        lea     ecx, [ebp - 0x3c]
        mov     byte ptr [ebx + edi + 4], al
        call    FUN_0041b720
        mov     eax, dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x34]
        shl     ebx, 4
        lea     ebx, [ebx + edi + 0x6dc]
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ebp - 0x30]
        mov     dword ptr [ebx + 4], ecx
        mov     dword ptr [ebx + 8], edx
        mov     dword ptr [ebx + 0xc], eax
        jmp     L6517
L643B:
        shl     ebx, 4
        lea     ebx, [ebx + edi + 0x6dc]
        mov     ecx, ebx
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 4]
        mov     dword ptr [ebp - 0x70], edx
        mov     edx, dword ptr [ecx + 8]
        mov     dword ptr [ebp - 0x6c], eax
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        mov     dword ptr [ebp - 0x68], edx
        lea     edx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x64], eax
        push    edx
        lea     eax, [ebp - 0x70]
        push    eax
        mov     ecx, ebx
        call    FUN_0041bd00
        mov     ecx, ebx
        call    FUN_0041b720
        jmp     L6517
L647D:
        cmp     cl, 3
        jnz     L6517
        push    edi
        mov     ecx, esi
        call    FUN_00698d20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov     edx, dword ptr [ebp - 8]
        mov     ecx, eax
        xor     eax, eax
        test    edx, edx
        jz      L64D7
        mov     eax, dword ptr [ebp + 0xc]
        fld     dword ptr [esi + 0x10]
        test    eax, eax
        push    ecx
        fstp    dword ptr [esp]
        jz      L64D1
        mov     edi, dword ptr [ebp - 4]
        push    edi
        push    ecx
        push    eax
        push    edx
        jmp     L64EC
L64D1:
        push    ecx
        push    ecx
        push    edx
        push    edx
        jmp     L64EC
L64D7:
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        jz      L64F4
        fld     dword ptr [esi + 0x10]
        mov     eax, dword ptr [ebp - 4]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    eax
        push    ecx
        push    ecx
L64EC:
        call    FUN_00699cb0
        add     esp, 0x14
L64F4:
        mov     edx, dword ptr [ebp + 8]
        mov     cl, byte ptr [ebx + edx + 4]
        test    cl, 0x20
        jnz     L6510
        or      cl, 0x20
        mov     byte ptr [ebx + edx + 4], cl
        mov     dword ptr [edx + ebx*4 + 0xe84], eax
        jmp     L6517
L6510:
        or      dword ptr [edx + ebx*4 + 0xe84], eax
L6517:
        inc     byte ptr [ebp - 0x60]
        mov     eax, dword ptr [esi + 0x18]
        mov     edi, dword ptr [ebp - 0x60]
        mov     ecx, dword ptr [eax + 0x30]
        and     edi, 0xff
        shr     ecx, 4
        cmp     edi, ecx
        jl      L5CBC
        pop     edi
        pop     ebx
L6536:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
