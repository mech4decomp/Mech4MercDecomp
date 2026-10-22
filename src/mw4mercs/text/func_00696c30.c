/*
 * FUN_00696c30 (16 B) — HUD element destructor helper: frees param1
 * via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00696c30(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
