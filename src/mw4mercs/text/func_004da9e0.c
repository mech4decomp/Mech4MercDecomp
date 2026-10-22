/*
 * FUN_004da9e0 (64 B) — __thiscall. Unregisters a node from a list
 * (this+0xbc) via FUN_004154d0, sets flags, and forwards a stream
 * object through a virtual call (vtable+0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);

__declspec(naked) void FUN_004da9e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        lea     eax, [edi+0xbc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi+0xc4], 0x0
        call    FUN_004154d0
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [edi+0xd8]
        mov     edx, dword ptr [ecx]
        or      eax, 0x20
        mov     dword ptr [esi+0x10], eax
        mov     eax, dword ptr [esi+0xd8]
        push    eax
        call    dword ptr [edx+0xc]
        pop     edi
        pop     esi
        ret     0x4
    }
}
