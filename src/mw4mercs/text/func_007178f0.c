/*
 * FUN_007178F0 (84 B) — Fills a 16-bit table at 0x0087c2d0 with a
 * repeating pattern, then zeroes two globals.
 *
 * __cdecl (no args, RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087c59c;
extern int g_0087c5a0;

__declspec(naked) void __cdecl FUN_007178F0(void)
{
    __asm {
        push    esi
        mov     eax, 0x87c2d0
        mov     ecx, 0x2
L_loop:
        lea     edx, [ecx + 1]
        add     eax, 2
        lea     esi, [edx - 2]
        mov     word ptr [eax - 2], si
        lea     esi, [ecx - 2]
        mov     word ptr [eax], si
        add     eax, 2
        mov     word ptr [eax], cx
        add     eax, 2
        mov     word ptr [eax], si
        add     eax, 2
        mov     word ptr [eax], dx
        add     eax, 2
        mov     word ptr [eax], cx
        add     ecx, 4
        lea     edx, [ecx - 2]
        add     eax, 2
        cmp     dx, 0x80
        jc      L_loop
        xor     eax, eax
        mov     [g_0087c59c], eax
        mov     [g_0087c5a0], eax
        pop     esi
        ret
    }
}
