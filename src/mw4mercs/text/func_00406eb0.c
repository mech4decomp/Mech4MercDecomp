/*
 * FUN_00406eb0 (39 B) — option-loading wrapper. Calls FUN_00406e60, then
 * FUN_006fc4d0 and FUN_00406b80 on a shared string. __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_76c6cc[];          /* 0x76c6cc */
extern int  __cdecl FUN_00406e60(void);
extern int  __cdecl FUN_006fc4d0(char *);
extern int  __cdecl FUN_00406b80(char *);

__declspec(naked) int __cdecl FUN_00406eb0(void)
{
    __asm {
        call    FUN_00406e60
        test    al, al
        jz      L6ED4
        push    offset g_str_76c6cc
        call    FUN_006fc4d0
        test    al, al
        jz      L6ED4
        push    offset g_str_76c6cc
        call    FUN_00406b80
        add     esp, 0x4
L6ED4:
        mov     al, 0x1
        ret
    }
}
