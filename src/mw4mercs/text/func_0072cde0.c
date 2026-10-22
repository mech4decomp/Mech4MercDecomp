/*
 * FUN_0072CDE0 (125 B) — __stdcall (RET 0x4, 1 param).
 *
 * Validates a structure (magic 0xe5 at +8, size 0x100/0x104 at +4),
 * calls a function pointer (IAT 0x8aad48) on *param_1, reads key
 * state via GetKeyState (IAT 0x76b458) for 0x11/0x10, then scans a
 * table at 0x7b7139 (8-byte entries) for a matching key/button/id.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8aad48;   /* IAT: function pointer */
extern int g_76b458;     /* IAT: GetKeyState */

__declspec(naked) void __stdcall FUN_0072cde0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        push    ebx
        push    edi
        jz      L_72ce4f
        cmp     dword ptr [eax + 0x8], 0xe5
        jnz     L_72ce4f
        mov     ecx, dword ptr [eax + 0x4]
        cmp     ecx, 0x100
        jz      L_72ce06
        cmp     ecx, 0x104
        jnz     L_72ce4f
L_72ce06:
        mov     eax, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [g_8aad48]
        mov     esi, dword ptr [g_76b458]
        push    0x11
        mov     edi, eax
        call    esi
        xor     ebx, ebx
        mov     bx, ax
        push    0x10
        shr     ebx, 0xf
        and     bl, 0x1
        call    esi
        mov     ecx, 0x7b7139
        pop     esi
        shr     eax, 0xf
        and     al, 0x1
L_72ce36:
        cmp     byte ptr [ecx - 0x1], bl
        jnz     L_72ce44
        cmp     byte ptr [ecx], al
        jnz     L_72ce44
        cmp     dword ptr [ecx + 0x3], edi
        jz      L_72ce56
L_72ce44:
        add     ecx, 0x8
        cmp     ecx, 0x7b71d9
        jc      L_72ce36
L_72ce4f:
        pop     edi
        xor     al, al
        pop     ebx
        ret     0x4
L_72ce56:
        pop     edi
        mov     al, 0x1
        pop     ebx
        ret     0x4
    }
}
