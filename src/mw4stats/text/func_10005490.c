/*
 * MW4Stats.dll - FUN_10005490 (0x10005490, 91 B, __cdecl)
 * Two chains of three FUN_10003d60 calls around a FUN_10003b10 call.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10005490 (91 B, __cdecl, 3 params) -- stats-record field writer.
 * Two chains of three FUN_10003D60 calls (each returns the new `this`),
 * with a FUN_10003B10(param_1, param_3) call between them:
 * chain1: this = FUN_10003D60(param_1, 0x100245a8);
 * this = FUN_10003D60(this,  param_2);
 * this = FUN_10003D60(this,  0x10024ed8);
 * FUN_10003B10(param_1, param_3)
 * chain2: this = FUN_10003D60(param_1, 0x10024ed0);
 * this = FUN_10003D60(this,  param_2);
 * this = FUN_10003D60(this,  0x10024ed8);
 * (Sibling of FUN_10006210 / FUN_10006260 / FUN_100061a0 / FUN_100047f0.)
 * CFLAGS: /G6 /O2  (100% match; /O2 alone is 79.37% -- chain-2 schedules
 * `mov ecx,esi` before the pushes instead of after). Each three-call chain
 * MUST be ONE fully-nested expression so MSVC6 batches all three argument
 * pushes right-to-left before the first call.
 */
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10003b10(void);

__declspec(naked) void FUN_10005490(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    0x10024ed8
        push    edi
        push    0x100245a8
        mov     ecx, esi
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    esi
        call    FUN_10003b10
        add     esp, 0x8
        push    0x10024ed8
        push    edi
        push    0x10024ed0
        mov     ecx, esi
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        mov     ecx, eax
        call    FUN_10003d60
        pop     edi
        pop     esi
        ret
    }
}
