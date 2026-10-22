/*
 * FUN_0072DB80 (149 B) — RET (no stack params).
 *
 * Walks a linked list from global 0x008BC00C (next at +0x24). For each node
 * whose +0x204C byte is 0 and whose first dword is 0, calls FUN_00758B10
 * (thiscall) + FUN_004084E0(node) and increments 0x00896C90. Zeroes a set of
 * globals first, then shifts 0x00896C98 >> 10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* .data globals */
extern void *g_8bc00c;
extern int  g_896c8c;
extern int  g_896c94;
extern int  g_896c98;
extern int  g_896c9c;
extern int  g_896ca0;
extern int  g_896ca4;
extern int  g_896ca8;
extern int  g_896cac;
extern int  g_896c90;

extern void FUN_00758b10(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void func_0072db80(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, dword ptr [g_8bc00c]
        cmp     esi, ebx
        mov     dword ptr [g_896c8c], ebx
        mov     dword ptr [g_896c94], ebx
        mov     dword ptr [g_896c98], ebx
        mov     dword ptr [g_896c9c], ebx
        mov     dword ptr [g_896ca0], ebx
        mov     dword ptr [g_896ca4], ebx
        mov     dword ptr [g_896ca8], ebx
        mov     dword ptr [g_896cac], ebx
        mov     dword ptr [g_896c90], ebx
        jz      L_dc05
        push    edi
L_dbc5:
        cmp     byte ptr [esi + 0x204c], bl
        mov     edi, dword ptr [esi + 0x24]
        jnz     L_dbee
        cmp     dword ptr [esi], ebx
        jnz     L_dbee
        cmp     esi, ebx
        jz      L_dbe8
        mov     ecx, esi
        call    FUN_00758b10
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_dbe8:
        inc     dword ptr [g_896c90]
L_dbee:
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_dbc5
        mov     eax, dword ptr [g_896c98]
        pop     edi
        shr     eax, 0xa
        pop     esi
        mov     dword ptr [g_896c98], eax
        pop     ebx
        ret
L_dc05:
        mov     eax, dword ptr [g_896c98]
        shr     eax, 0xa
        pop     esi
        mov     dword ptr [g_896c98], eax
        pop     ebx
        ret
    }
}
