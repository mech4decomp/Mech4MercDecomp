/*
 * FUN_0065b490 (21 B) — __fastcall (ECX=this) helper: calls FUN_005c1720
 * (thiscall on [this+4], arg 1), then dispatches virtual method 0 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c1720(void);

__declspec(naked) void FUN_0065b490(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+4]
        push    1
        call    FUN_005c1720
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax]
        pop     esi
        ret
    }
}
