/*
 * FUN_0074cd30 (60 B) — sprintf wrapper building a "From=... To=... Bytes=..."
 * diagnostic string into a global buffer, returning that buffer.
 *
 * __stdcall, RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __imp__sprintf;          /* 0x0076B420 */
extern const char g_str_7ab894[];   /* 0x007AB894: ", GUARANTEED" */
extern const char g_str_76b768[];   /* 0x0076B768: "" */
extern const char g_str_7ab874[];   /* 0x007AB874: "From=0x%x, To=0x%x, Bytes=%d %s" */
extern char g_buf_8ba8b4[];         /* 0x008BA8B4 */

__declspec(naked) void *__stdcall FUN_0074cd30(int param_1, int param_2, int param_3, int param_4)
{
    __asm {
        test    byte ptr [esp + 0xC], 0x1
        mov     eax, offset g_str_7ab894
        jnz     label
        mov     eax, offset g_str_76b768
label:
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        push    offset g_str_7ab874
        push    offset g_buf_8ba8b4
        call    dword ptr [__imp__sprintf]
        add     esp, 0x18
        mov     eax, offset g_buf_8ba8b4
        ret     0x10
    }
}
