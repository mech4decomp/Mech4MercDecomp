/*
 * FUN_00749dc0 (38 B) — Walks a linked list rooted at 0x8b79f0; for each
 * node whose [0xC] field equals 1, clears it and writes 1 to the byte
 * pointed to by the node's [0x10] field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8b79f0;   /* linked-list head */

__declspec(naked) void FUN_00749dc0(void)
{
    __asm {
        mov     eax, dword ptr [g_8b79f0]
        xor     ecx, ecx
        cmp     eax, ecx
        jz      done
        push    esi
        mov     edx, 0x1
loop_start:
        cmp     dword ptr [eax + 0xc], edx
        jnz     next
        mov     esi, dword ptr [eax + 0x10]
        mov     dword ptr [eax + 0xc], ecx
        mov     byte ptr [esi], dl
next:
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        jnz     loop_start
        pop     esi
done:
        ret
    }
}
