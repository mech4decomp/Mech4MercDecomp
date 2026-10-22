/*
 * FUN_0072DB60 (25 B) — Walks a singly-linked list starting at
 * 0x008bc00c, clearing byte [node+0x204c] on each node and following
 * [node+0x24] to the next node.
 *
 * Match: target 100%
 */

extern char *g_8bc00c;   /* 0x008bc00c list head */

__declspec(naked) void FUN_0072DB60(void)
{
    __asm {
        mov     eax, dword ptr [g_8bc00c]
        xor     ecx, ecx
        cmp     eax, ecx
        jz      L_db78
    L_db6b:
        mov     byte ptr [eax + 0x204c], cl
        mov     eax, dword ptr [eax + 0x24]
        cmp     eax, ecx
        jnz     L_db6b
    L_db78:
        ret
    }
}
