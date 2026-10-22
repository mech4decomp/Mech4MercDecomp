/*
 * FUN_0069fc40 (18 B) — __stdcall (RET 0x8): delete the object passed as
 * arg0 (if non-null) via FUN_004084e0 (operator delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0069fc40(void)
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
