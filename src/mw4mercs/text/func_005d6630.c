/*
 * FUN_005d6630 (14 B) — __thiscall (ECX = this).
 *
 * Destructor: if this[0] != 0, free it via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void FUN_005d6630(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084E0
        pop     ecx
done:
        ret
    }
}
