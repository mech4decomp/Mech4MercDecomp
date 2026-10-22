/*
 * FUN_10031380 (662 B) — __stdcall, RET 0x14.
 * Frame-timing / performance-counter helper. Creates a COM object if needed,
 * dispatches through vtable methods, computes elapsed time via
 * QueryPerformanceCounter/Frequency and timeGetTime, and writes results into
 * the caller's buffer.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10032ca0(void);

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

__declspec(naked) void __stdcall FUN_10031380(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x94
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x20]
        test    ebx, ebx
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x10], eax
        jnz     L_313ef
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
        jl      L_315c2
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [edx + 0x34]
        mov     edi, eax
        test    edi, edi
        jl      L_315c2
        lea     ebx, [esp + 0x1c]
    L_313ef:
        xor     eax, eax
        mov     ecx, 0x12
        lea     edi, [esp + 0x30]
        rep stosd
        mov     al, byte ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        neg     al
        mov     dword ptr [esp + 0x48], edx
        lea     edi, [esp + 0x7c]
        push    0
        mov     dword ptr [esp + 0x34], 0x48
        sbb     eax, eax
        and     eax, 0x40
        inc     eax
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0x64], ecx
        mov     dword ptr [esp + 0x58], eax
        xor     eax, eax
        mov     ecx, 9
        rep stosd
        mov     eax, dword ptr [esi + 0xc]
        lea     ecx, [esp + 0x80]
        push    ecx
        push    0x1004addc
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x88], 0x24
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x7c]
        mov     edi, eax
        test    edi, edi
        jl      L_315c2
        push    0xbb8
        mov     ecx, esi
        call    FUN_10032ca0
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        mov     edx, dword ptr [eax]
        push    0
        push    0
        push    0
        push    0
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x48]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x34]
        mov     edi, eax
        test    edi, edi
        jl      L_315c2
        lea     edx, [esp + 0x20]
        push    edx
        call    dword ptr [g_100490b4]
        mov     eax, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [g_10075478]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [g_1007547c]
        sub     eax, ebx
        sbb     ecx, edx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        fild    qword ptr [esp + 0x10]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x10]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_31596
        call    dword ptr [g_10049204]
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [g_10075490]
        mov     ebx, eax
        mov     eax, dword ptr [g_10075488]
        mov     edx, ebx
        sub     edx, eax
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], 0
        fild    qword ptr [esp + 0x28]
        fmul    qword ptr [g_1004af78]
        fsubp   st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_31549
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_3157b
    L_31549:
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
        jmp     L_3157d
    L_3157b:
        fstp    st(0)
    L_3157d:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [g_10075488], ebx
        mov     dword ptr [g_10075490], eax
        mov     dword ptr [g_10075494], ecx
    L_31596:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x44]
        mov     dword ptr [ecx + 0x8], edx
        mov     dword ptr [ecx + 0xc], eax
    L_315c2:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_315d8
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x1c], 0
    L_315d8:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_31608
        nop
    L_315e0:
        mov     edx, dword ptr [esi + 0x20]
        dec     eax
        mov     dword ptr [esi + 0x24], eax
        mov     eax, dword ptr [edx + eax*4]
        test    eax, eax
        jz      L_31601
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     edx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x20]
        mov     dword ptr [eax + edx*4], 0
    L_31601:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jnz     L_315e0
    L_31608:
        dec     dword ptr [esi + 0x24]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
