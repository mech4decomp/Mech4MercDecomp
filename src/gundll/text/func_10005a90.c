/*
 * FUN_10005a90 (43 B) - __fastcall.
 * Object teardown helper: if the 0x94 pointer is non-null, calls
 * FUN_10004ba0 (thiscall) on it, frees it via FUN_10001d60, and clears 0x94.
 *
 * __fastcall (this in ECX).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10004ba0(void);   /* rel32 call (thiscall, this in ECX) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */

__declspec(naked) void __fastcall FUN_10005a90(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x94]
        test    esi, esi
        jz      L_5ab8
        mov     ecx, esi
        call    FUN_10004ba0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [edi + 0x94], 0x0
    L_5ab8:
        pop     edi
        pop     esi
        ret
    }
}
