/*
 * FUN_0041ee70 (68 B) — __thiscall bit-buffer constructor.
 * Initializes the buffer object (vtable 0x76d7f4), allocates a
 * 0x80-aligned block via FUN_004084d0, and sets up the buffer pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_0041ee70(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        push    0
        push    edi
        mov     esi, ecx
        push    0
        call    FUN_0041e690
        lea     eax, [edi+0x80]
        and     eax, 0xffffff80
        push    eax
        mov     dword ptr [esi], 0x76d7f4
        mov     dword ptr [esi+0x20], eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi+0x1c], edi
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x18], eax
        mov     dword ptr [esi+0x14], eax
        pop     edi
        mov     byte ptr [esi+0x24], 0x1
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
