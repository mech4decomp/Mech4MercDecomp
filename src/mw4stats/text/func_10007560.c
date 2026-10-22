/*
 * FUN_10007560 (122 B) - __thiscall linked-list lookup by wide string
 * (variant of FUN_100072c0). Walks a list (this-4), compares each node's
 * string at +0x14 against param_1 (case-sensitive or case-insensitive per
 * param_2). Returns node+0xc on match, else 0.
 *
 * __thiscall (ECX = this), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021150;   /* function pointer loaded into EBP, called via CALL EBP */
extern void *g_100210E0;   /* IAT import, called via CALL dword ptr [g_100210E0] */

__declspec(naked) void __cdecl FUN_10007560(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx - 4]
        test    edi, edi
        jz      loc_75d1
        mov     bl, byte ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [g_10021150]
loc_7579:
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     loc_75ba
        mov     eax, dword ptr [edi + 0x14]
        test    bl, bl
        jz      loc_759c
        test    eax, eax
        jnz     loc_7592
        test    esi, esi
        setz    al
        jmp     loc_75b6
loc_7592:
        test    esi, esi
        jz      loc_75c3
        push    esi
        push    eax
        call    ebp
        jmp     loc_75b3
loc_759c:
        test    eax, eax
        jnz     loc_75a7
        test    esi, esi
        setz    al
        jmp     loc_75b6
loc_75a7:
        test    esi, esi
        jz      loc_75c3
        push    esi
        push    eax
        call    dword ptr [g_100210E0]
loc_75b3:
        add     esp, 8
loc_75b6:
        test    eax, eax
        jz      loc_75c3
loc_75ba:
        mov     edi, dword ptr [edi + 8]
        test    edi, edi
        jz      loc_75d1
        jmp     loc_7579
loc_75c3:
        test    edi, edi
        jz      loc_75d1
        lea     eax, [edi + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
loc_75d1:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
