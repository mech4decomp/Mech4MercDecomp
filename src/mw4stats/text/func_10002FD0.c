/*
 * MW4Stats.dll - FUN_10002fd0 (0x10002FD0, 42 B, __fastcall)
 * Constructor: zeroes fields 0x00..0x1c, initializes sub-object at +0x20
 * with size 0x400 via FUN_10001170. Returns this (ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10002fd0 (42 B, __fastcall) -- ctor. Zeroes fields 0x00,0x08..0x1c
 * (skips 0x04), inits sub-object at +0x20 with size 0x400 via FUN_10001170,
 * -- struct layout --
 * NEW TYPES: Obj2fd0 { int f00,f04,f08,f0c,f10,f14,f18,f1c; Sub2fd0 sub@+0x20; }
 * Sub2fd0 { int f00,f04,f08,f0c,f10,f14; void init(int); } (FUN_10001170)
 * File-local only; not header-worthy.
 */
extern void __cdecl FUN_10001170(void);

__declspec(naked) void FUN_10002fd0(void)
{
    __asm {
        xor eax, eax
        push esi
        mov esi, ecx
        push 0x400
        lea ecx, [esi+0x20]
        mov dword ptr [esi], eax
        mov dword ptr [esi+0x8], eax
        mov dword ptr [esi+0xc], eax
        mov dword ptr [esi+0x10], eax
        mov dword ptr [esi+0x14], eax
        mov dword ptr [esi+0x18], eax
        mov dword ptr [esi+0x1c], eax
        call FUN_10001170
        mov eax, esi
        pop esi
        ret
    }
}
