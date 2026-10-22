/*
 * FUN_0074aa20 (51 B) — __cdecl. Walks a linked list rooted at g_8b7a1c.
 * For each node, calls FUN_0074a8f0(node, node->[0x10], node->[0x15],
 * node->[0x4]) (4 args, __stdcall), sets node->[0x17] = 1, advances to
 * node->[0x8], and loops until the next pointer is NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8b7a1c;
extern void __stdcall FUN_0074a8f0(void *a, void *b, void *c, void *d);

__declspec(naked) void __cdecl FUN_0074aa20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_8b7a1c]
        test    esi, esi
        jz      L_51
        push    edi
    L_2c:
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [esi + 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x15]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0074a8f0
        test    edi, edi
        mov     byte ptr [esi + 0x17], 0x1
        mov     dword ptr [esi + 0x8], edi
        mov     esi, edi
        jnz     L_2c
        pop     edi
    L_51:
        pop     esi
        ret
    }
}
