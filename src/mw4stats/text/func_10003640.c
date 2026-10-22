/* FUN_10003640 - __fastcall, 43 bytes
 * Virtual call via vtable[0]; zero +0x1c; EnterCriticalSection on +0x24,
 * set +0x21=0/+0x20=1, LeaveCriticalSection.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003640 (43 B, __fastcall, ECX = this) - calls virtual fn 0 (thiscall),
 * then zeroes +0x1c, EnterCriticalSection on +0x24, sets +0x21=0 / +0x20=1,
 * LeaveCriticalSection on +0x24.
 * -- struct layout --
 * NEW TYPES (file-local): struct O3640 { virtual void m0(); char pad[0x18];
 * int f1c; char f20; char f21; char pad2[2]; int cs[4]; } -- vptr at +0,
 * f1c dword at +0x1c, f20 byte at +0x20, f21 byte at +0x21, cs at +0x24.
 * IAT externs: g_10021048 (EnterCriticalSection), g_10021044
 * (LeaveCriticalSection), both `void(__stdcall*)(void*)`.
 */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */

__declspec(naked) void FUN_10003640(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi]
        push edi
        call dword ptr [eax]
        lea  edi, [esi + 0x24]
        push edi
        mov  dword ptr [esi + 0x1c], 0x0
        call dword ptr [g_10021048]
        push edi
        mov  byte ptr [esi + 0x21], 0x0
        mov  byte ptr [esi + 0x20], 0x1
        call dword ptr [g_10021044]
        pop  edi
        pop  esi
        ret
    }
}
