/*
 * FUN_005635a0 (136 B) — get local IP address as "a.b.c.d" string.
 * Calls gethostname/gethostbyname, formats result into a global buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_buf_7de6b8[0x100];
extern char g_buf_7de638[];
extern char g_str_77e804[];
extern char g_str_77e7e8[];
extern char g_str_77b744[];
extern int (__cdecl *g_sprintf)(const char *, ...);
extern int __cdecl gethostname(char *, int);
extern void *__cdecl gethostbyname(const char *);

__declspec(naked) void FUN_005635a0(void)
{
    __asm {
        push    0x100
        push    offset g_buf_7de6b8
        call    gethostname
        test    eax, eax
        jz      L_cc
        push    offset g_str_77e804
        push    offset g_buf_7de638
        call    dword ptr [g_sprintf]
        add     esp, 0x8
        mov     eax, offset g_buf_7de638
        ret
L_cc:
        push    offset g_buf_7de6b8
        call    gethostbyname
        test    eax, eax
        jnz     L_f3
        push    offset g_str_77e7e8
        push    offset g_buf_7de638
        call    dword ptr [g_sprintf]
        add     esp, 0x8
        mov     eax, offset g_buf_7de638
        ret
L_f3:
        mov     eax, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x3]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x2]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x1]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [eax]
        push    ecx
        push    edx
        push    offset g_str_77b744
        push    offset g_buf_7de638
        call    dword ptr [g_sprintf]
        add     esp, 0x18
        mov     eax, offset g_buf_7de638
        ret
    }
}
