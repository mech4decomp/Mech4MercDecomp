/*
 * FUN_00738D20 (145 B) — __fastcall (ECX = this). RET (no stack params).
 *
 * Calls function pointer at 0x008AACA0 (3 args) and stores result in
 * this+0x20. If != -1, sets this+0x24=1 and retries a call through
 * 0x008AACAC until it succeeds or this+0x24 becomes 0. Returns 1 on
 * success, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* Indirect function pointers in .data */
extern void *g_8aaca0;
extern void *g_8aaca4;
extern void *g_8aacac;

__declspec(naked) void func_00738d20(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        push    0x11
        push    0x2
        push    0x2
        mov     esi, ecx
        xor     ebx, ebx
        call    dword ptr [g_8aaca0]
        mov     edi, eax
        cmp     edi, -1
        mov     dword ptr [esi + 0x20], edi
        jz      L_da8
        push    0x7080
        mov     dword ptr [esi + 0x24], 0x1
        call    dword ptr [g_8aaca4]
        mov     word ptr [esp + 0xe], ax
        push    0x10
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        mov     word ptr [esp + 0x18], 0x2
        mov     dword ptr [esp + 0x1c], ebx
        call    dword ptr [g_8aacac]
        cmp     eax, -1
        jnz     L_d9c
L_d75:
        cmp     dword ptr [esi + 0x24], ebx
        jz      L_da8
        push    ebx
        mov     dword ptr [esi + 0x24], ebx
        call    dword ptr [g_8aaca4]
        push    0x10
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edi
        mov     word ptr [esp + 0x1a], ax
        call    dword ptr [g_8aacac]
        cmp     eax, -1
        jz      L_d75
L_d9c:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x10
        ret
L_da8:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x10
        ret
    }
}
