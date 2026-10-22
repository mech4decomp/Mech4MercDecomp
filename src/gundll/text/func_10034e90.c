/*
 * FUN_10034e90 (710 B) — __stdcall, RET 0x10.
 * Frame-timing / performance-counter helper (variant of FUN_10031380).
 * Creates a COM object if needed, dispatches through vtable methods,
 * computes elapsed time via QueryPerformanceCounter/Frequency and
 * timeGetTime, and writes results into the caller's buffer.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10036f40(void);

extern void *g_10049234;            /* IAT: CoCreateInstance */
extern void *g_100490b4;            /* IAT: QueryPerformanceCounter */
extern void *g_10049204;            /* IAT: timeGetTime */
extern void *g_100490b0;            /* IAT: QueryPerformanceFrequency */

extern unsigned int g_10075478;
extern unsigned int g_1007547c;
extern unsigned int g_10075488;
extern __int64 g_10075470;
extern double g_10075480;
extern double g_10075490;
extern unsigned int g_10075494;
extern double g_1004af80;
extern double g_1004af78;
extern double g_1004af70;
extern double g_1004af68;

__declspec(naked) void __stdcall FUN_10034e90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x94
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x24]
        test    ebx, ebx
        mov     eax, dword ptr [esi + 0x28]
        push    edi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x10], eax
        jnz     L_34eff
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x1004ae8c
        push    0x17
        push    ebx
        push    0x1004ae9c
        mov     dword ptr [esp + 0x24], 1
        call    dword ptr [g_10049234]
        mov     edi, eax
        test    edi, edi
        jl      L_35100
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [edx + 0x34]
        mov     edi, eax
        test    edi, edi
        jl      L_35100
        lea     ebx, [esp + 0x1c]
    L_34eff:
        xor     eax, eax
        mov     ecx, 0x12
        lea     edi, [esp + 0x30]
        rep stosd
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x60], eax
        push    0
        xor     eax, eax
        lea     edx, [esp + 0x80]
        push    edx
        mov     ecx, 9
        lea     edi, [esp + 0x84]
        rep stosd
        mov     eax, dword ptr [esi + 0xc]
        push    0x1004addc
        mov     dword ptr [esp + 0x3c], 0x48
        mov     dword ptr [esp + 0x40], 4
        mov     dword ptr [esp + 0x88], 0x24
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x84]
        mov     edi, eax
        test    edi, edi
        jl      L_35100
        mov     eax, dword ptr [esi + 0xc]
        push    0
        lea     edx, [esp + 0x80]
        push    edx
        push    0x1004addc
        mov     dword ptr [esp + 0xa8], 0
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x80]
        mov     edi, eax
        test    edi, edi
        jl      L_35100
        push    0xbb8
        mov     ecx, esi
        call    FUN_10036f40
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    0
        push    0
        push    0
        push    0
        push    edx
        push    ebx
        lea     edx, [esp + 0x48]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x24]
        mov     edi, eax
        test    edi, edi
        jl      L_35100
        lea     eax, [esp + 0x20]
        push    eax
        call    dword ptr [g_100490b4]
        mov     edx, dword ptr [g_10075478]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_1007547c]
        sub     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        sbb     edx, eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
        fild    qword ptr [esp + 0x10]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x10]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_350d4
        call    dword ptr [g_10049204]
        fld     qword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_10075488]
        fsub    qword ptr [g_10075490]
        mov     ebx, eax
        sub     eax, ecx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], 0
        fild    qword ptr [esp + 0x28]
        fmul    qword ptr [g_1004af78]
        fsubp   st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_35086
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_350b8
    L_35086:
        fld     qword ptr [g_10075480]
        push    0x10075470
        fsub    st(0), st(1)
        fstp    qword ptr [g_10075480]
        fld     qword ptr [esp + 0x14]
        fsub    st(0), st(1)
        fstp    qword ptr [esp + 0x14]
        fstp    st(0)
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    dword ptr [g_100490b4]
        jmp     L_350ba
    L_350b8:
        fstp    st(0)
    L_350ba:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [g_10075488], ebx
        mov     dword ptr [g_10075490], ecx
        mov     dword ptr [g_10075494], edx
    L_350d4:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [esi + 0x30], eax
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [esi + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [edx + 0x8], eax
        mov     dword ptr [edx + 0xc], ecx
    L_35100:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_35116
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x1c], 0
    L_35116:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_35148
        __emit 0x8D                     /* __emit: LEA ECX,[ECX+0] alignment padding */
        __emit 0x49
        __emit 0x00
    L_35120:
        mov     ecx, dword ptr [esi + 0x24]
        dec     eax
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [ecx + eax*4]
        test    eax, eax
        jz      L_35141
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x24]
        mov     dword ptr [ecx + eax*4], 0
    L_35141:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jnz     L_35120
    L_35148:
        dec     dword ptr [esi + 0x28]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
