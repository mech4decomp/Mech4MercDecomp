/*
 * FUN_0069fc30 (14 B) — __thiscall: delete the object pointed to by *this
 * (if non-null) via FUN_004084e0 (operator delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0069fc30(void)
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
