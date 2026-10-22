/*
 * FUN_1002D090 (31 B) - __stdcall, RET 0x8 (2 args).
 * If arg2 is non-null, call FUN_10004ba0(arg2) (thiscall, this in ecx)
 * then free it via FUN_10001d60.  Returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10004ba0(void);    /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002D090(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        je      L_d0a9
        mov     ecx, esi
        call    FUN_10004ba0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_d0a9:
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
