/*
 * FUN_100072c0 (117 B) - __thiscall linked-list lookup by wide string.
 * Walks a list (this+4), comparing each node's string at +0x14 against
 * param_1 (case-sensitive or case-insensitive per param_2). Returns the
 * matching node or 0.
 *
 * __thiscall (ECX = this), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021150;   /* function pointer loaded into EBP, called via CALL EBP */
extern void *g_100210E0;   /* IAT import, called via CALL dword ptr [g_100210E0] */

__declspec(naked) void __cdecl FUN_100072c0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 4]
        test    edi, edi
        jz      loc_732c
        mov     bl, byte ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [g_10021150]
loc_72d9:
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     loc_731a
        mov     eax, dword ptr [edi + 0x14]
        test    bl, bl
        jz      loc_72fc
        test    eax, eax
        jnz     loc_72f2
        test    esi, esi
        setz    al
        jmp     loc_7316
loc_72f2:
        test    esi, esi
        jz      loc_7323
        push    esi
        push    eax
        call    ebp
        jmp     loc_7313
loc_72fc:
        test    eax, eax
        jnz     loc_7307
        test    esi, esi
        setz    al
        jmp     loc_7316
loc_7307:
        test    esi, esi
        jz      loc_7323
        push    esi
        push    eax
        call    dword ptr [g_100210E0]
loc_7313:
        add     esp, 8
loc_7316:
        test    eax, eax
        jz      loc_7323
loc_731a:
        mov     edi, dword ptr [edi + 8]
        test    edi, edi
        jz      loc_732c
        jmp     loc_72d9
loc_7323:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
loc_732c:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
