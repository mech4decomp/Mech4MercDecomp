/*
 * FUN_005da4b0 (14 B) — If *this != 0, call FUN_004084e0(*this).
 *
 * __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005da4b0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
