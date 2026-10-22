/*
 * FUN_006fde60 (264 B) — Language string builder.
 *
 * If the device (0x00856860) is active in state 0x80, builds a
 * localized filename by prefixing a language tag (switch on param_1)
 * to a multibyte string, then calls into the device vtable.
 * Returns 0 on success, -1 on failure. __stdcall, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_856860;   /* DAT_00856860 (device object) */
extern int    g_85683c;   /* DAT_0085683c (state) */
extern int    g_85684c;   /* DAT_0085684c */
extern char   g_6fdf68;   /* jump table base (0x006FDF68) */
extern char   g_7a0c78;   /* L"English_" */
extern char   g_7a0c68;   /* L"French_" */
extern char   g_7a0c58;   /* L"German_" */
extern char   g_7a0c48;   /* L"Korean_" */
extern char   g_7a0c34;   /* L"Spanish_" */
extern char   g_7a0c20;   /* L"Chinese_" */
extern char   g_7a0c0c;   /* L"Japanese_" */
extern void  *g_76b3e0;   /* wcscpy (IAT) */
extern void  *g_76b3e8;   /* mbstowcs (IAT) */
extern void  *g_76b3f4;   /* wcscat (IAT) */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) void __stdcall FUN_006fde60(void)
{
    __asm {
        mov     eax, dword ptr [g_856860]
        sub     esp, 0x400
        test    eax, eax
        jz      L_fdf42
        cmp     dword ptr [g_85683c], 0x80
        jnz     L_fdf42
        mov     eax, dword ptr [esp + 0x404]
        cmp     eax, 6
        ja      L_fdee0
        jmp     dword ptr [eax*4 + g_6fdf68]
L_fde96:
        push    offset g_7a0c78
        lea     eax, [esp + 4]
        push    eax
        jmp     L_fdeea
L_fdea2:
        push    offset g_7a0c68
        jmp     L_fdee5
L_fdea9:
        push    offset g_7a0c58
        lea     edx, [esp + 4]
        push    edx
        jmp     L_fdeea
L_fdeb5:
        push    offset g_7a0c48
        lea     eax, [esp + 4]
        push    eax
        jmp     L_fdeea
L_fdec1:
        push    offset g_7a0c34
        jmp     L_fdee5
L_fdec8:
        push    offset g_7a0c20
        lea     edx, [esp + 4]
        push    edx
        jmp     L_fdeea
L_fded4:
        push    offset g_7a0c0c
        lea     eax, [esp + 4]
        push    eax
        jmp     L_fdeea
L_fdee0:
        push    offset g_7a0c78
L_fdee5:
        lea     ecx, [esp + 4]
        push    ecx
L_fdeea:
        call    dword ptr [g_76b3e0]
        mov     edx, dword ptr [esp + 0x410]
        add     esp, 8
        push    0x100
        push    edx
        lea     eax, [esp + 0x208]
        push    eax
        call    dword ptr [g_76b3e8]
        lea     ecx, [esp + 0x20C]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    dword ptr [g_76b3f4]
        mov     eax, dword ptr [g_856860]
        mov     eax, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [eax]
        add     esp, 0x14
        push    0
        lea     edx, [esp + 4]
        push    edx
        lea     edx, [esp + 8]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jge     L_fdf53
L_fdf42:
        call    FUN_006fde20
        or      eax, 0xFFFFFFFF
        add     esp, 0x400
        ret     8
L_fdf53:
        mov     dword ptr [g_85684c], 1
        xor     eax, eax
        add     esp, 0x400
        ret     8
    }
}
