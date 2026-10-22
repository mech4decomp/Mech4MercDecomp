/*
 * FUN_005fd400 (45 B) — __thiscall. Computes (arg - this->[0xe4]) as a
 * double, passes it to FUN_005fd430, then forwards the result to
 * FUN_004facd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fd430(void);
extern void __cdecl FUN_004facd0(void);

__declspec(naked) void FUN_005fd400(void)
{
    __asm {
        fld     qword ptr [esp+4]
        push    esi
        mov     esi, ecx
        fsub    qword ptr [esi+0xe4]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    FUN_005fd430
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004facd0
        pop     esi
        ret     8
    }
}
