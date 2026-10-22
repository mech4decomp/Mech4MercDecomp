/*
 * FUN_100033E0 (43 B, __fastcall) - destructor. Calls virtual fn, then
 * LeaveCriticalSection/EnterCriticalSection on +0x20, sets flags.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100033E0 (43 B, __fastcall) - destructor. Calls virtual fn 0 (thiscall),
 * (f18=0, f1d=0, f1c=1).
 * -- struct layout --
 * NEW TYPES (file-local): struct O33e0 { virtual void m0(); char pad[0x14];
 * int f18; char f1c; char f1d; char pad2[2]; int cs[4]; } -- vptr at +0,
 * f18 dword at +0x18, f1c byte at +0x1c, f1d byte at +0x1d, cs at +0x20.
 * IAT externs: g_10021048 (LeaveCriticalSection), g_10021044
 * (EnterCriticalSection), both `void(__stdcall*)(void*)`.
 */

extern void *g_10021048; /* IAT: LeaveCriticalSection */
extern void *g_10021044; /* IAT: EnterCriticalSection */

__declspec(naked) void __cdecl FUN_100033E0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax]
        lea     edi, [esi+0x20]
        push    edi
        mov     dword ptr [esi+0x18], 0
        call    dword ptr [g_10021048]
        push    edi
        mov     byte ptr [esi+0x1d], 0
        mov     byte ptr [esi+0x1c], 1
        call    dword ptr [g_10021044]
        pop     edi
        pop     esi
        ret
    }
}
