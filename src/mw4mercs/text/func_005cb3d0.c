/*
 * FUN_005cb3d0 (14 B) — If *this != 0, free it via FUN_004084E0.
 *
 * __fastcall (ECX = this), plain ret.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005cb3d0(void *this)
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
