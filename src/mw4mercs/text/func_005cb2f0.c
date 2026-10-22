/*
 * FUN_005cb2f0 (14 B) — Destructor helper: if this[0] != 0, free it.
 *
 * __fastcall (ECX = this), plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb2f0(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      l_done
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_done:
        ret
    }
}
