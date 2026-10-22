/*
 * FUN_0072f0c0 (982 B) — Texture/lighting object constructor.
 *
 * __stdcall RET 8, ECX = this. Allocates a sub-object via FUN_006f3c80,
 * initializes it from a parameter block (EBP), converts floats to ints via
 * FUN_0075db4a, then dispatches on a 7-way jump table (0x72f498, outside
 * this function) that copies a 16-byte color/light table (0x7a2a40..0x7aa0)
 * and calls FUN_007556c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f3c80(void);
extern void FUN_0075db4a(void);
extern void FUN_007556c0(void);

extern float g_786dc8;
extern float g_78096c;
extern float g_770120;

extern int g_7a2a40;
extern int g_7a2a44;
extern int g_7a2a48;
extern int g_7a2a4c;
extern int g_7a2a50;
extern int g_7a2a54;
extern int g_7a2a58;
extern int g_7a2a5c;
extern int g_7a2a60;
extern int g_7a2a64;
extern int g_7a2a68;
extern int g_7a2a6c;
extern int g_7a2a70;
extern int g_7a2a74;
extern int g_7a2a78;
extern int g_7a2a7c;
extern int g_7a2a80;
extern int g_7a2a84;
extern int g_7a2a88;
extern int g_7a2a8c;
extern int g_7a2a90;
extern int g_7a2a94;
extern int g_7a2a98;
extern int g_7a2a9c;
extern int g_7a2aa0;
extern int g_7a2aa4;
extern int g_7a2aa8;
extern int g_7a2aac;

extern char g_87dd0a;
extern int g_896cc0;

__declspec(naked) void FUN_0072f0c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        push    ebx
        push    0x104
        mov     byte ptr [edi + 0x21], 0x0
        mov     byte ptr [edi + 0x20], 0x0
        mov     dword ptr [edi + 0xc], eax
        call    FUN_006f3c80
        mov     ebp, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebp]
        mov     esi, eax
        cmp     dword ptr [ebp + 0x1c], 0xbf800000
        mov     dword ptr [esi + 0x100], ebx
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esi + 0x8c], 0x14
        mov     dword ptr [esi + 0x10], 0x38
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x4], ecx
        mov     dword ptr [esi + 0x14], 0x12
        jnz     L_f129
        mov     dword ptr [esi + 0x18], 0xffffffff
        jmp     L_f13a
    L_f129:
        fld     dword ptr [ebp + 0x1c]
        fmul    dword ptr [g_786dc8]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x18], eax
    L_f13a:
        fld     dword ptr [ebp + 0x1c]
        mov     dword ptr [esi + 0x24], 0xffffffff
        mov     dword ptr [esi + 0x28], ebx
        fstp    qword ptr [edi + 0x10]
        mov     dword ptr [esi + 0x38], ebx
        lea     edx, [esi + 0xa0]
        mov     dword ptr [esi + 0x2c], ebx
        lea     eax, [esi + 0xd0]
        mov     dword ptr [esi + 0x30], edx
        mov     dword ptr [esi + 0x34], eax
        xor     eax, eax
        lea     edx, [ebp + 0x4]
    L_f167:
        cmp     byte ptr [edx], 0x0
        jz      L_f17c
        mov     ecx, dword ptr [edi]
        mov     esi, dword ptr [ecx + 0x2c]
        mov     ecx, dword ptr [ecx + 0x30]
        mov     dword ptr [ecx + esi*4], eax
        mov     ecx, dword ptr [edi]
        inc     dword ptr [ecx + 0x2c]
    L_f17c:
        add     eax, 0x4
        inc     edx
        cmp     eax, 0x30
        jl      L_f167
        fld     dword ptr [ebp + 0x10]
        mov     esi, dword ptr [edi]
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x14]
        mov     edx, dword ptr [esi + 0x34]
        mov     dword ptr [edx], eax
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x34]
        mov     ebx, dword ptr [ebp + 0x24]
        test    ebx, ebx
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [esi + 0x20], 0x2710
        jz      L_f20a
        fld     dword ptr [ebx + 0x4]
        fmul    dword ptr [g_78096c]
        call    FUN_0075db4a
        fld     dword ptr [ebx]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x94], eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0xc]
        fmul    dword ptr [g_78096c]
        mov     dword ptr [esi + 0x90], eax
        call    FUN_0075db4a
        fld     dword ptr [ebx + 0x8]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x9c], eax
        call    FUN_0075db4a
        lea     edx, [esi + 0x8c]
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x38], edx
        jmp     L_f211
    L_f20a:
        mov     dword ptr [esi + 0x38], 0x0
    L_f211:
        mov     eax, dword ptr [edi + 0x4]
        sub     eax, 0x0
        jz      L_f293
        dec     eax
        jz      L_f263
        fld     dword ptr [ebp + 0x18]
        lea     ebx, [esi + 0x4c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x3c], 0x10
        mov     dword ptr [esi + 0x40], ebx
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x2c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [ebx], eax
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x30]
        fmul    dword ptr [g_78096c]
        mov     dword ptr [esi + 0x5c], eax
        mov     eax, dword ptr [ebp + 0x28]
        mov     dword ptr [esi + 0x6c], eax
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x7c], eax
        jmp     L_f2b0
    L_f263:
        fld     dword ptr [ebp + 0x28]
        lea     ebx, [esi + 0x4c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x3c], 0x8
        mov     dword ptr [esi + 0x40], ebx
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x2c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [ebx], eax
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x5c], eax
        jmp     L_f2b0
    L_f293:
        fld     dword ptr [ebp + 0x18]
        lea     ebx, [esi + 0x4c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x3c], 0x4
        mov     dword ptr [esi + 0x40], ebx
        call    FUN_0075db4a
        mov     dword ptr [ebx], eax
    L_f2b0:
        mov     ecx, dword ptr [esp + 0x18]
        mov     al, byte ptr [ecx + 0x858128]
        test    al, al
        jz      L_f469
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, 0x6
        mov     byte ptr [g_87dd0a], 0x1
        ja      L_f462
        jmp     dword ptr [eax*4 + 0x72f498]
    L_f2dc:
        mov     eax, dword ptr [g_7a2a40]
        mov     ecx, dword ptr [g_7a2a44]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a48]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a4c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a40
        jmp     L_f452
    L_f313:
        mov     eax, dword ptr [g_7a2a50]
        mov     ecx, dword ptr [g_7a2a54]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a58]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a5c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a50
        jmp     L_f452
    L_f34a:
        mov     eax, dword ptr [g_7a2a60]
        mov     ecx, dword ptr [g_7a2a64]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a68]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a6c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a60
        jmp     L_f452
    L_f381:
        mov     eax, dword ptr [g_7a2a70]
        mov     ecx, dword ptr [g_7a2a74]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a78]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a7c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a70
        jmp     L_f452
    L_f3b8:
        mov     eax, dword ptr [g_7a2a80]
        mov     ecx, dword ptr [g_7a2a84]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a88]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a8c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a80
        jmp     L_f452
    L_f3ec:
        mov     eax, dword ptr [g_7a2a90]
        mov     ecx, dword ptr [g_7a2a94]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2a98]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2a9c]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2a90
        jmp     L_f452
    L_f420:
        mov     eax, dword ptr [g_7a2aa0]
        mov     ecx, dword ptr [g_7a2aa4]
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [g_7a2aa8]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [g_7a2aac]
        mov     dword ptr [edx + 0x8], eax
        push    0x0
        mov     dword ptr [edx + 0xc], ecx
        lea     edx, [esi + 0x48]
        push    edx
        add     esi, 0x10
        push    esi
        push    offset g_7a2aa0
    L_f452:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax*4 + 0x857f48]
        push    ecx
        call    FUN_007556c0
    L_f462:
        mov     byte ptr [g_87dd0a], 0x0
    L_f469:
        mov     eax, dword ptr [g_896cc0]
        test    eax, eax
        jnz     L_f484
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [g_896cc0], edi
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    L_f484:
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [g_896cc0], edi
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
