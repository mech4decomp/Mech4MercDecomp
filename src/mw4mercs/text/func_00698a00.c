/*
 * FUN_00698a00 (18 B) — __stdcall helper: if the passed pointer is
 * non-null, free it via FUN_004084e0 (operator delete). Vector element
 * cleanup helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00698a00(void)
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
