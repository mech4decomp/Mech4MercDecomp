/*
 * FUN_004f1470 (69 B) — Adept::Channel constructor (__thiscall, RET 0xc).
 * Calls FUN_004f21b0, zeroes fields +0x24/+0x28, sets vtable 0x774ea8,
 * calls a virtual method (slot 0x20) on the stream, then FUN_004f14f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f21b0(void);
extern void __cdecl FUN_004f14f0(void);

__declspec(naked) void FUN_004f1470(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004f21b0
        mov     edx, dword ptr [edi]
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        push    0x4
        lea     eax, [esi + 0x2c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774ea8
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_004f14f0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
