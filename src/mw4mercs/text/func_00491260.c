/*
 * FUN_00491260 (31 B) — __thiscall, RET 8 (2 stack params).
 * Constructor: calls FUN_004911e0 then FUN_00491440.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004911e0(void);
extern void __fastcall FUN_00491440(void);

__declspec(naked) void * __fastcall FUN_00491260(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004911e0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00491440
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
