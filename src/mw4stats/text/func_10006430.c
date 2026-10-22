/*
 * MW4Stats.dll - FUN_10006430 (0x10006430, 59 B, __cdecl, RET 0, THREE args)
 * arg1 [esp+4] = object whose vtable is dispatched; arg2 [esp+8] = value;
 * arg3 [esp+0xc] = forwarded tail.
 * Vtable dispatch: (arg1->vtable+0x1c)(arg2, 1); if null return 0(false);
 * then (v+8)() thiscall-on-returned, (v+4)(&DAT_100252f0, 1) thiscall, then
 * FUN_10006470(arg3, result) where result = the (v+4) return (this).
 * CORRECTED 2026-08: prior header mislabeled this as 2 params and
 * "FUN_10006470(1, result)" - the 3rd arg [esp+0x10] is arg3, and the
 * tail call is FUN_10006470(arg3, result) (twin of 0x100064B0's
 * FUN_100064f0(p3, result)).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006430 (59 B, __cdecl, 3 params) -- stats-record string-field writer.
 * Dispatches p1->vtable[7](p2, 1); if null returns false. Otherwise runs
 * result->vtable[2](), result->vtable[1](0x100252f0, 1), then returns
 * FUN_10006470(p3, result). (Sibling of FUN_100064b0 / FUN_10006470.)
 */
extern void __cdecl FUN_10006470(void);

__declspec(naked) void FUN_10006430(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x4]
        mov edx, dword ptr [esp+0x8]
        mov eax, dword ptr [ecx]
        push 0x1
        push edx
        call dword ptr [eax+0x1c]
        test eax, eax
        jnz L1
        xor al, al
        ret
L1:
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+0x8]
        mov edx, dword ptr [eax]
        push 0x1
        push 0x100252f0
        mov ecx, eax
        call dword ptr [edx+0x4]
        push eax
        mov eax, dword ptr [esp+0x10]
        push eax
        call FUN_10006470
        add esp, 0x8
        ret
    }
}
