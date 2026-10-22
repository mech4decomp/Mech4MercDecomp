/*
 * FUN_00703400 (50 B) — __stdcall, 1 param.
 *
 * Reads two globals, conditionally decrements one based on bit 8 of the
 * param, then calls FUN_006F9070 (cdecl, 6 args) with a mix of globals,
 * format strings and computed values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aab0c;
extern int g_008aaa90;
extern char g_008aaa70[];
extern char g_0085697c[];
extern char g_008569fc[];
extern void __cdecl FUN_006f9070(void);

__declspec(naked) void __stdcall FUN_00703400(unsigned int param)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    dh, 1
        mov     ecx, dword ptr [g_008aab0c]
        mov     eax, dword ptr [g_008aaa90]
        jz      skip
        dec     eax
skip:
        push    edx
        push    offset g_008aaa70
        push    offset g_0085697c
        push    eax
        add     ecx, 0x14
        push    ecx
        push    offset g_008569fc
        call    FUN_006f9070
        ret     4
    }
}
