/*
 * FUN_0073AC80 (69 B) — __cdecl (RET 0). Walks a linked list from
 * g_8aa1f8; for each node without flag 0x40000000, zeroes several fields
 * and clears a 0x200-entry table at [node+0x34].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aa1f8;

__declspec(naked) void FUN_0073AC80(void)
{
    __asm {
        mov     eax, dword ptr [g_8aa1f8]
        xor     edx, edx
        cmp     eax, edx
        je      L_73acc4
        push    esi
L_73ac8c:
        test    dword ptr [eax + 4], 0x40000000
        jne     L_73acbd
        mov     ecx, dword ptr [eax + 0x34]
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x28], edx
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x20], edx
        mov     dword ptr [eax + 0x30], edx
        mov     esi, 0x200
L_73acb2:
        mov     dword ptr [ecx], edx
        add     ecx, 0x80
        dec     esi
        jne     L_73acb2
L_73acbd:
        mov     eax, dword ptr [eax]
        cmp     eax, edx
        jne     L_73ac8c
        pop     esi
L_73acc4:
        ret
    }
}
