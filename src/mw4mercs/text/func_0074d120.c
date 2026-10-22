/*
 * FUN_0074d120 (52 B) — Accessor (__stdcall, RET 4).
 *
 * If param is NULL, returns &DAT_007741dc. Otherwise asserts the size
 * field (*param) is 0x10 (via FUN_006fab90 + INT3) and returns
 * param[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7741dc;                /* DAT_007741dc */
extern char g_7abb04[];              /* "Invalid size" */
extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void *__stdcall FUN_0074d120(int *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        jnz     notnull
        mov     eax, offset g_7741dc
        pop     esi
        pop     ebp
        ret     4
notnull:
        cmp     dword ptr [esi], 0x10
        jz      ok
        push    offset g_7abb04
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      ok
        int     3
ok:
        mov     eax, dword ptr [esi + 8]
        pop     esi
        pop     ebp
        ret     4
    }
}
