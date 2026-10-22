/*
 * MW4Stats.dll - FUN_10006260 (0x10006260, 69 B, __cdecl)
 * Chains three FUN_10003d60 calls (this=param_1), then FUN_10003b10(param_1,param_3),
 * FUN_10003d60(param_1,&DAT_100245a0).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006260 (69 B, __cdecl, 3 params) -- stats-record field writer.
 * Chains three FUN_10003D60 calls (each returns the new `this`):
 * this = FUN_10003D60(param_1, 0x100245a8);
 * this = FUN_10003D60(this,  param_2);
 * this = FUN_10003D60(this,  0x100245ac);
 * then FUN_10003B10(param_1, param_3) and FUN_10003D60(param_1, 0x100245a0).
 * (Sibling of FUN_10006210 / FUN_100061a0 / FUN_100047f0.)
 * CFLAGS: /G6 /O2  (100% match; /O2 alone = 85.71% -- the trailing
 * FUN_10003B10 `add esp,0x8` cleanup schedules `mov ecx,esi` before
 * `push 0x100245a0` under /O2, /G6 flips it to the ref order; B15-class).
 * The three FUN_10003D60 calls
 * MUST be written as ONE fully-nested expression so MSVC6 batches all three
 * argument pushes right-to-left (0x100245ac, param_2, 0x100245a8) before the
 * first call; separate statements or a two-statement nest defer the
 * `push 0x100245ac` to the third call (36-64%).
 */
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10003b10(void);

__declspec(naked) void FUN_10006260(void)
{
    __asm {
        mov eax, dword ptr [esp+0x8]
        push esi
        mov esi, dword ptr [esp+0x8]
        push 0x100245ac
        push eax
        push 0x100245a8
        mov ecx, esi
        call FUN_10003d60
        mov ecx, eax
        call FUN_10003d60
        mov ecx, eax
        call FUN_10003d60
        mov ecx, dword ptr [esp+0x10]
        push ecx
        push esi
        call FUN_10003b10
        add esp, 0x8
        push 0x100245a0
        mov ecx, esi
        call FUN_10003d60
        pop esi
        ret
    }
}
