/*
 * MW4Stats.dll - FUN_100062b0 (0x100062B0, 59 B, __cdecl, RET 0, THREE args)
 * arg1 [esp+4] = object; arg2 [esp+8] = value; arg3 [esp+0xc] = forwarded
 * tail. Vtable dispatch: (arg1->vtable+0x1c)(arg2, 1); if null return
 * false; then (v+8)() thiscall, (v+4)(&DAT_100252f0, 1) thiscall, then
 * FUN_100062f0(arg3, result) - twin of 0x10006430/0x100064B0.
 * CORRECTED 2026-08: prior header said 2 params + "FUN_100062f0(1, result)";
 * real is 3 params -> FUN_100062f0(arg3, result).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100062b0 (59 B, __cdecl, 3 params) -- stats-record string-field writer.
 * Dispatches p1->vtable[7](p2, 1); if null returns false. Otherwise runs
 * result->vtable[2](), result->vtable[1](0x100252f0, 1), then returns
 * FUN_100062f0(p3, result). (Sibling of FUN_100064b0 / FUN_10006430.)
 * NOTE: the inline-asm scaffold header mislabels this as 2 params; the tail
 * `mov eax,[esp+0x10]` (after `push eax`) resolves to the THIRD param p3
 */
extern void __cdecl FUN_100062f0(void);

__declspec(naked) void FUN_100062b0(void)
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
        call FUN_100062f0
        add esp, 0x8
        ret
    }
}
