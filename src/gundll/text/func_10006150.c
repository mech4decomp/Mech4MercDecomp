/*
 * FUN_10006150 (29 B) - __stdcall, RET 0x8.
 * If param_1 is non-null, calls FUN_10004d90 (thiscall) on it and frees it
 * via FUN_10001d60.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10004d90(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10006150(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      L_6169
        mov     ecx, esi
        call    FUN_10004d90
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_6169:
        pop     esi
        ret     0x8
    }
}
