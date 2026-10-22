/*
 * FUN_0071df50 (180 B) — Formats a time value into the global buffer at
 * 0x0087d814 as "%dh %dm %.2fs" (or with "(on frame %d)" when param==0).
 * Uses FPU math + _ftol (FUN_0075db4a) + sprintf (IAT 0x0076b420).
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_dbl_7a4670;
extern double g_dbl_7a4668;
extern double g_dbl_77eca8;
extern double g_dbl_78b358;
extern char g_buf_87d814[];
extern char g_str_7a4658[];   /* "%dh %dm %.2fs" */
extern char g_str_7a463c[];   /* "%dh %dm %.2fs (on frame %d)" */
extern int g_int_858afc;
extern int (__cdecl *g_pfn_76b420)(char *, const char *, ...);  /* sprintf IAT */

extern void __cdecl FUN_00707e70(int);
extern int __cdecl FUN_0075db4a(void);   /* _ftol */

__declspec(naked) char *__stdcall FUN_0071df50(int param)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_00707e70
        fld     st(0)
        fmul    qword ptr [g_dbl_7a4670]
        call    FUN_0075db4a
        mov     esi, eax
        mov     dword ptr [esp + 0x14], esi
        fild    dword ptr [esp + 0x14]
        fmul    qword ptr [g_dbl_7a4668]
        fsubp   st(1), st(0)
        fld     st(0)
        fmul    qword ptr [g_dbl_77eca8]
        call    FUN_0075db4a
        test    edi, edi
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        fmul    qword ptr [g_dbl_78b358]
        fsubr   st(0), st(1)
        fstp    qword ptr [esp + 8]
        fstp    st(0)
        jz      L1
        mov     ecx, dword ptr [esp + 0xC]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    eax
        push    esi
        push    offset g_str_7a4658
        push    offset g_buf_87d814
        call    dword ptr [g_pfn_76b420]
        add     esp, 0x18
        pop     edi
        mov     eax, offset g_buf_87d814
        pop     esi
        add     esp, 8
        ret     4
L1:
        mov     ecx, dword ptr [g_int_858afc]
        mov     edx, dword ptr [esp + 0xC]
        push    ecx
        mov     ecx, dword ptr [esp + 0xC]
        push    edx
        push    ecx
        push    eax
        push    esi
        push    offset g_str_7a463c
        push    offset g_buf_87d814
        call    dword ptr [g_pfn_76b420]
        add     esp, 0x1C
        pop     edi
        mov     eax, offset g_buf_87d814
        pop     esi
        add     esp, 8
        ret     4
    }
}
