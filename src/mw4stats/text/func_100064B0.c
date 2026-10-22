/*
 * MW4Stats.dll - FUN_100064b0 (0x100064B0, 59 B, __cdecl)
 * Vtable dispatch: (*param_1+0x1c)(param_2); if null return false; then
 * (*v+8)(), (*v+4)(&DAT_100252f0,1), FUN_100064f0(1, result).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100064b0 (59 B, __cdecl, 3 params) -- stats-record string-field writer.
 * Dispatches p1->vtable[7](p2, 1); if null returns false. Otherwise runs
 * result->vtable[2](), result->vtable[1](0x100252f0, 1), then returns
 * FUN_100064f0(p3, result). (Sibling of FUN_10006430 / FUN_10006470.)
 * CFLAGS: /G6 /O2  (needs /G6 Pentium-Pro scheduling to hoist the vptr load
 * `mov eax,[ecx]` BEFORE the arg pushes in the first call; plain /O2 defers
 * it after the pushes -> 92.73%)
 */
extern void __cdecl FUN_100064f0(void);

__declspec(naked) void FUN_100064b0(void)
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
        call FUN_100064f0
        add esp, 0x8
        ret
    }
}
