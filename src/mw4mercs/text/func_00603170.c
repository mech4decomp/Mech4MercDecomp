/*
 * FUN_00603170 (48 B) — __stdcall (RET 8, two params).
 *
 * Walks a singly-linked list from *param_1, freeing each node via
 * FUN_004084e0 until reaching param_2, then stores param_2 back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_00603170(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        cmp     esi, edi
        jz      L_done
L_loop:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L_cont
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_cont:
        cmp     esi, edi
        jnz     L_loop
L_done:
        mov     dword ptr [ebx], edi
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
