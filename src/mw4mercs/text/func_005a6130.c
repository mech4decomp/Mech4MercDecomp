/*
 * FUN_005a6130 (39 B) — Cleanup function.
 *
 * Loads global pointer from 0x007f2068, if non-null calls
 * FUN_004dd340 on it then frees it with FUN_004084e0.
 * Finally sets global to NULL.
 *
 * __stdcall, no params, no return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd340(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a6130(void)
{
    

extern int DAT_007f2068;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2068]
        test    esi, esi
        jz      skip_free
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_free:
        mov dword ptr [DAT_007f2068], 0x0
        pop     esi
        ret
    }


}
