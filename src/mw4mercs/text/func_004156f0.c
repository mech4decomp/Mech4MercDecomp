/*
 * FUN_004156f0 (25 B) — __stdcall (RET 4, 1 stack arg): calls
 * FUN_004158e0(arg); if non-null returns [result+0xc], else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004158e0(void);

__declspec(naked) int FUN_004156f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    eax
        call    FUN_004158e0
        test    eax, eax
        jz      L1
        mov     eax, dword ptr [eax+0xc]
        ret     4
    L1:
        xor     eax, eax
        ret     4
    }
}
