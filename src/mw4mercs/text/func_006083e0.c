/*
 * FUN_006083e0 (29 B) — __thiscall wrapper (RET 0xc, 3 stack args):
 * forwards (this+0x14, 1, arg1, arg2, arg3) to FUN_006089d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006089d0(void);

__declspec(naked) void FUN_006083e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x8]
        push    edx
        push    eax
        push    1
        lea     edx, [ecx + 0x14]
        push    edx
        call    FUN_006089d0
        ret     0xc
    }
}
