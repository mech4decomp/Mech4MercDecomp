/*
 * FUN_0061c920 (53 B) — Recursively walk a linked list (next at +0x8),
 * recursing on the head pointer (+0x0), and call FUN_00562f40(0x46)
 * when a node has type 9 (+0x18) and subtype 2 (+0x1C).
 *
 * __cdecl, one stack arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061c920(void *node);
extern void __cdecl FUN_00562f40(int code);

__declspec(naked) void __cdecl FUN_0061c920(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      L_done
L_loop:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_0061c920
        mov     eax, dword ptr [esi + 0x18]
        add     esp, 0x4
        cmp     eax, 0x9
        jnz     L_next
        cmp     dword ptr [esi + 0x1C], 0x2
        jnz     L_next
        push    0x46
        call    FUN_00562f40
        add     esp, 0x4
L_next:
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jnz     L_loop
L_done:
        pop     esi
        ret
    }
}
