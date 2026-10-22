/*
 * FUN_0074ab00 (99 B) — Linked-list teardown helper.
 *
 * Walks a singly-linked list rooted at global 0x008b7a1c (each node:
 * +0x08 = next, +0x0C = child ptr, +0x10 = vertex count). If param_1
 * is zero, asserts the node's vertex count is zero (INT3 breakpoint),
 * frees the child via FUN_00740db0, and deletes the node via
 * FUN_006f4230. Clears the global root to NULL.
 *
 * __stdcall (RET 4), one char param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(char *fmt, int arg);
extern void __stdcall FUN_00740db0(void *p);
extern void __stdcall FUN_006f4230(void *p);
extern int g_008b7a1c;

__declspec(naked) void __stdcall FUN_0074ab00(char param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [g_008b7a1c]
        test    esi, esi
        jz      label_ab54
        push    edi
label_ab0f:
        mov     al, byte ptr [ebp + 8]
        test    al, al
        jnz     label_ab2c
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        push    0x7aa97c
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      label_ab2c
        int     3
label_ab2c:
        mov     edi, esi
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x8]
        jz      label_ab3e
        push    eax
        call    FUN_00740db0
label_ab3e:
        push    edi
        call    FUN_006f4230
        test    esi, esi
        jnz     label_ab0f
        pop     edi
        mov     dword ptr [g_008b7a1c], esi
        pop     esi
        pop     ebp
        ret     4
label_ab54:
        mov     dword ptr [g_008b7a1c], 0
        pop     esi
        pop     ebp
        ret     4
    }
}
