/*
 * FUN_00494910 (80 B) — __fastcall (ECX = this).
 * Clears bit 1 of field_9c, sets field_94 to 0x49742400,
 * walks linked list at field_24/field_20, then walks list at
 * field_14 calling vtable[2] (offset 0x8) on each node.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00494910(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x24]
        push    esi
        mov     esi, dword ptr [ecx + 0x9c]
        and     esi, 0xfffffffd
        test    eax, eax
        _emit 0xC7  /* mov dword ptr [ecx + 0x94], 0x49742400 */
        _emit 0x81
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x24
        _emit 0x74
        _emit 0x49
        mov     dword ptr [ecx + 0x9c], esi
        jz      l_list_walk
        cmp     dword ptr [eax], 0x0
        jz      l_list_walk
        mov     eax, dword ptr [ecx + 0x20]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x24], edx
        mov     eax, edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x24], edx
    l_list_walk:
        mov     esi, dword ptr [ecx + 0x14]
    l_loop_head:
        test    esi, esi
        jz      l_done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_done
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x8]
        jmp     l_loop_head
    l_done:
        pop     esi
        ret
    }
}
