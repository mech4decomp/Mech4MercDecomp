/*
 * FUN_100309b0 (719 B) -- __thiscall, RET 0x4.
 * Timer/clock update: uses QueryPerformanceCounter/timeGetTime to compute
 * elapsed time, adjusts globals, and updates this->[0x30]/[0x50]/[0x48].
 * SEH prologue; dispatches on param_1[2] (1 or 2), then calls FUN_10030c80
 * and dispatches through a vtable at this->[0x14].
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075478;
extern unsigned int g_1007547c;
extern unsigned int g_10075488;
extern unsigned int g_10075490;
extern unsigned int g_10075494;
extern double g_10075470;
extern double g_10075480;
extern double g_1004af80;
extern double g_1004af78;
extern double g_1004af70;
extern double g_1004af68;
extern void *g_100490b4;
extern void *g_10049204;
extern void *g_100490b0;
extern void __cdecl FUN_10030c80(void);
extern void * __cdecl FUN_10001d50(unsigned int);
extern void __cdecl FUN_10034340(void);

__declspec(naked) void FUN_100309b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    -1
        push    0x1004898b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        movzx   eax, byte ptr [ebx + 0x2]
        dec     eax
        push    esi
        push    edi
        mov     esi, ecx
        jz      L_af4
        dec     eax
        jnz     L_c00
        lea     eax, [esp + 0x20]
        push    eax
        call    dword ptr [g_100490b4]
        mov     edx, dword ptr [g_10075478]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_1007547c]
        sub     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        sbb     edx, eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        fild    qword ptr [esp + 0x18]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x18]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_ad9
        call    dword ptr [g_10049204]
        mov     ecx, dword ptr [g_10075488]
        mov     edi, eax
        sub     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], 0
        fild    qword ptr [esp + 0x10]
        fmul    qword ptr [g_1004af78]
        fld     qword ptr [esp + 0x18]
        fsub    qword ptr [g_10075490]
        fsubrp  st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_a8b
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_abd
    L_a8b:
        fld     qword ptr [g_10075480]
        push    0x10075470
        fsub    st(0), st(1)
        fstp    qword ptr [g_10075480]
        fld     qword ptr [esp + 0x1c]
        fsub    st(0), st(1)
        fstp    qword ptr [esp + 0x1c]
        fstp    st(0)
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    dword ptr [g_100490b4]
        jmp     L_abf
    L_abd:
        fstp    st(0)
    L_abf:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [g_10075488], edi
        mov     dword ptr [g_10075490], ecx
        mov     dword ptr [g_10075494], edx
    L_ad9:
        fld     qword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x48], 0
        fsub    qword ptr [esi + 0x50]
        push    0xbb8
        fsubr   qword ptr [esi + 0x30]
        fstp    qword ptr [esi + 0x30]
        jmp     L_bf9
    L_af4:
        lea     eax, [esp + 0x20]
        push    eax
        call    dword ptr [g_100490b4]
        mov     edx, dword ptr [g_10075478]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_1007547c]
        sub     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        sbb     edx, eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        fild    qword ptr [esp + 0x18]
        fild    qword ptr [g_10075470]
        fdivp   st(1), st(0)
        fadd    qword ptr [g_10075480]
        fst     qword ptr [esp + 0x18]
        fsub    qword ptr [g_10075490]
        fcomp   qword ptr [g_1004af80]
        fnstsw ax
        test ah, 0x41
        jnz     L_be5
        call    dword ptr [g_10049204]
        mov     ecx, dword ptr [g_10075488]
        mov     edi, eax
        sub     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], 0
        fild    qword ptr [esp + 0x10]
        fmul    qword ptr [g_1004af78]
        fld     qword ptr [esp + 0x18]
        fsub    qword ptr [g_10075490]
        fsubrp  st(1), st(0)
        fcom    qword ptr [g_1004af70]
        fnstsw ax
        test ah, 0x41
        jz      L_b97
        fcom    qword ptr [g_1004af68]
        fnstsw ax
        test ah, 0x05
        jp      L_bc9
    L_b97:
        fld     qword ptr [g_10075480]
        push    0x10075470
        fsub    st(0), st(1)
        fstp    qword ptr [g_10075480]
        fld     qword ptr [esp + 0x1c]
        fsub    st(0), st(1)
        fstp    qword ptr [esp + 0x1c]
        fstp    st(0)
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    dword ptr [g_100490b4]
        jmp     L_bcb
    L_bc9:
        fstp    st(0)
    L_bcb:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [g_10075488], edi
        mov     dword ptr [g_10075490], ecx
        mov     dword ptr [g_10075494], edx
    L_be5:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0x54], ecx
        mov     byte ptr [esi + 0x48], 1
        push    -1
    L_bf9:
        mov     ecx, esi
        call    FUN_10030c80
    L_c00:
        movzx   edx, word ptr [ebx + 0x4]
        movzx   edi, word ptr [ebx + 0x6]
        test    edi, edi
        lea     eax, [edx + ebx + 0x8]
        mov     dword ptr [esp + 0x10], eax
        jbe     L_c56
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], eax
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0
        jz      L_c4a
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        lea     ecx, [esi + 0x3c]
        push    ecx
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_10034340
        mov     dword ptr [esp + 0x34], 0xffffffff
        jmp     L_c58
    L_c4a:
        xor     eax, eax
        mov     dword ptr [esp + 0x34], 0xffffffff
        jmp     L_c58
    L_c56:
        xor     eax, eax
    L_c58:
        mov     esi, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi]
        push    eax
        movzx   eax, byte ptr [ebx + 0x2]
        lea     edx, [ebx + 0x8]
        push    edx
        push    eax
        push    esi
        call    dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
