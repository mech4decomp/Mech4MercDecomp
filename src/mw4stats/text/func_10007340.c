/*
 * FUN_10007340 (139 B) - __thiscall linked-list lookup by wide string with
 * an insert/update path. Walks a list (this+4), compares each node's string
 * at +0x14 against param_1 (case-sensitive or case-insensitive per param_4).
 * On no-match, calls FUN_100070e0 (ECX = node+0x1c) with (param_2, param_3,
 * 1) to insert/update. Returns the matching node or 0.
 *
 * __thiscall (ECX = this), RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021150;   /* IAT import, called via CALL dword ptr [g_10021150] */
extern void *g_100210E0;   /* IAT import, called via CALL dword ptr [g_100210E0] */
extern void __cdecl FUN_100070e0(void);

__declspec(naked) void __cdecl FUN_10007340(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 4]
        test    edi, edi
        jz      loc_73c2
        mov     bl, byte ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x14]
loc_7357:
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     loc_73b0
        mov     eax, dword ptr [edi + 0x14]
        test    bl, bl
        jz      loc_737e
        test    eax, eax
        jnz     loc_7370
        test    esi, esi
        setz    al
        jmp     loc_7398
loc_7370:
        test    esi, esi
        jz      loc_739c
        push    esi
        push    eax
        call    dword ptr [g_10021150]
        jmp     loc_7395
loc_737e:
        test    eax, eax
        jnz     loc_7389
        test    esi, esi
        setz    al
        jmp     loc_7398
loc_7389:
        test    esi, esi
        jz      loc_739c
        push    esi
        push    eax
        call    dword ptr [g_100210E0]
loc_7395:
        add     esp, 8
loc_7398:
        test    eax, eax
        jnz     loc_73b0
loc_739c:
        mov     eax, dword ptr [esp + 0x18]
        push    1
        push    ebp
        push    eax
        lea     ecx, [edi + 0x1c]
        call    FUN_100070e0
        test    eax, eax
        jnz     loc_73b9
loc_73b0:
        mov     edi, dword ptr [edi + 8]
        test    edi, edi
        jz      loc_73c2
        jmp     loc_7357
loc_73b9:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
loc_73c2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
