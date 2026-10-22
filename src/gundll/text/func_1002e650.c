/*
 * FUN_1002e650 (77 B) - __fastcall. Looks up a table entry by a ushort
 * index; returns 0xb with various state writes.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10075068[];   /* dword table at 0x10075068 */

__declspec(naked) void __fastcall FUN_1002e650(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 8]
        mov     ax, word ptr [edx]
        cmp     ax, 0x7f
        ja      L_68e
        push    esi
        xor     esi, esi
        mov     si, ax
        push    edi
        mov     edi, dword ptr [g_10075068 + esi*4]
        test    edi, edi
        pop     edi
        pop     esi
        jnz     L_67c
        mov     dword ptr [ecx], 0
        mov     eax, 0xb
        ret
L_67c:
        cmp     ax, 0x3c
        jnz     L_68e
        mov     dword ptr [ecx], 7
        mov     eax, 0xb
        ret
L_68e:
        mov     dword ptr [ecx + 0x2c], edx
        mov     dword ptr [ecx], 3
        mov     eax, 0xb
        ret
    }
}
