/*
 * FUN_00694FD0 (82 B) — __thiscall (1 stack arg, RET 4). Recursive string
 * lookup: walks a linked list at [this+0x18..0x1C], recursing per node; on
 * match compares the key bytes via repe cmpsb and returns this, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00694FD0(void);

__declspec(naked) void FUN_00694FD0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x18]
        push    edi
        mov     edi, dword ptr [ebp + 0x1c]
        cmp     esi, edi
        je      loc_694ff7
loc_694fe4:
        mov     ecx, dword ptr [esi]
        push    ebx
        call    FUN_00694FD0
        test    eax, eax
        jne     loc_69501b
        add     esi, 4
        cmp     esi, edi
        jne     loc_694fe4
loc_694ff7:
        mov     edi, dword ptr [ebx]
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [ebp + 4]
        mov     eax, dword ptr [ebx + 4]
        sub     ecx, esi
        sub     eax, edi
        cmp     ecx, eax
        jne     loc_695019
        xor     edx, edx
        repe cmpsb
        jne     loc_695019
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
loc_695019:
        xor     eax, eax
loc_69501b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
