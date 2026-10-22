/*
 * FUN_00717990 (62 B) — Handle-index → object-pointer lookup. Validates the
 * index (1..0x3ff); on out-of-range it calls FUN_006fab90("Invalid handle")
 * (and INT3 if that returns non-zero), then computes
 * DAT_008b2874 + idx*0x38 - 0x38 and returns it.
 *
 * __stdcall (RET 4), one uint param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7a2554[];   /* "Invalid handle" string */
extern int g_008b2874;    /* DAT_008b2874 */
extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) int __stdcall FUN_00717990(unsigned int param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     esi, 1
        jc      L_error
        cmp     esi, 0x3ff
        jbe     L_ok
    L_error:
        push    offset g_7a2554
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_ok
        int     3
    L_ok:
        mov     ecx, dword ptr [g_008b2874]
        lea     eax, [esi*8]
        sub     eax, esi
        lea     eax, [ecx + eax*8 - 0x38]
        pop     esi
        pop     ebp
        ret     4
    }
}
