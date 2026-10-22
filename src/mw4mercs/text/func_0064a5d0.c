/*
 * FUN_0064A5D0 (74 B) — Global state update / linked-list walk.
 *
 * If DAT_007f2ba8 is set, calls FUN_00620810(param). Stores param+0x34
 * into DAT_00805918, zeroes DAT_0080d960, then walks a linked list
 * starting at param+0x2c (next at +0xc), calling FUN_0064a370(+0x3c)
 * for each node whose +0x1c is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f2ba8;
extern int DAT_0080d960;
extern int DAT_00805918;
extern void __cdecl FUN_00620810(void *param);
extern void __cdecl FUN_0064a370(void *param);

__declspec(naked) void __cdecl FUN_0064a5d0(void *param)
{
    __asm {
        mov     ecx, dword ptr [DAT_007f2ba8]
        test    ecx, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        jz      l_skip
        push    esi
        call    FUN_00620810
    l_skip:
        mov     eax, dword ptr [esi + 0x34]
        mov     esi, dword ptr [esi + 0x2c]
        test    esi, esi
        mov     dword ptr [DAT_0080d960], 0
        mov     dword ptr [DAT_00805918], eax
        jz      l_done
    l_loop:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     l_next
        mov     ecx, dword ptr [esi + 0x3c]
        push    ecx
        call    FUN_0064a370
        add     esp, 4
    l_next:
        mov     esi, dword ptr [esi + 0xc]
        test    esi, esi
        jnz     l_loop
    l_done:
        pop     esi
        ret
    }
}
