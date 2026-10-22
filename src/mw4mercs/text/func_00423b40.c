/*
 * FUN_00423b40 (14 B) — __thiscall MLR object dtor stub: if this->[0]
 * (owned buffer pointer) is non-null, free it via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00423b40(void)
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
