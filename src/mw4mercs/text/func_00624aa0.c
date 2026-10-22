/*
 * FUN_00624aa0 (18 B) — __stdcall delete-style wrapper: if the pointer arg
 * is non-zero, calls operator delete (FUN_004084e0) on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00624aa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret     0x8
    }
}
