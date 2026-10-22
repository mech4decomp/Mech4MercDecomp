/*
 * FUN_0041ef30 (46 B) — __thiscall bit-buffer constructor (non-owning
 * variant). Sets up the buffer object (vtable 0x76d7f4) over an
 * externally-provided block; does not allocate.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);

__declspec(naked) void FUN_0041ef30(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x10]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_0041e690
        mov     dword ptr [esi+0x20], edi
        pop     edi
        mov     dword ptr [esi], 0x76d7f4
        mov     byte ptr [esi+0x24], 0
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
