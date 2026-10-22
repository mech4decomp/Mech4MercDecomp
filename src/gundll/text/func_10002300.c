/*
 * FUN_10002300 (91 B) - __stdcall, RET 0x8.
 * GUID-to-wide-string helper: formats a GUID via StringFromGUID2 into
 * a local wide buffer, duplicates it via FUN_10001dd0, and stores the
 * result in *param_2.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_1004923c;          /* IAT: StringFromGUID2 */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002300(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        sub     esp, 0x50
        push    0x28
        lea     eax, [esp + 0x4]
        push    eax
        push    ecx
        call    dword ptr [g_1004923c]
        test    eax, eax
        jnz     L_2335
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_2355
        jle     L_2355
        and     eax, 0xffff
        or      eax, 0x80070000
        add     esp, 0x50
        ret     0x8
    L_2335:
        __emit 0x8D                     /* __emit: MSVC6 drops the +0 disp on lea edx,[esp] (gives 8D 14 24); ref is 8D 54 24 00 */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        call    FUN_10001dd0
        mov     ecx, dword ptr [esp + 0x58]
        xor     edx, edx
        test    eax, eax
        setnz   dl
        mov     dword ptr [ecx], eax
        dec     edx
        and     edx, 0x8007000e
        mov     eax, edx
    L_2355:
        add     esp, 0x50
        ret     0x8
    }
}
