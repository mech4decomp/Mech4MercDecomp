/*
 * FUN_0074cda0 (60 B) — sprintf wrapper building a "Player/Group/Everyone"
 * diagnostic string into a global buffer, returning that buffer.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __imp__sprintf;          /* 0x0076B420 */
extern const char g_str_7ab8a4[];   /* 0x007AB8A4: "Player 0x%x" */
extern const char g_str_7ab8b0[];   /* 0x007AB8B0: "Group 0x%x" */
extern const char g_str_7ab8bc[];   /* 0x007AB8BC: "Everyone" */
extern char g_buf_8ba894[];         /* 0x008BA894 */

__declspec(naked) void *__stdcall FUN_0074cda0(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jnz     player
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jnz     group
        mov     eax, offset g_str_7ab8bc
        ret     8
player:
        push    eax
        push    offset g_str_7ab8a4
        jmp     common
group:
        push    eax
        push    offset g_str_7ab8b0
common:
        push    offset g_buf_8ba894
        call    dword ptr [__imp__sprintf]
        add     esp, 0xC
        mov     eax, offset g_buf_8ba894
        ret     8
    }
}
