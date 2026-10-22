/*
 * FUN_006F74F0 (74 B) — __thiscall (RET 0x4). Copies a string from arg0
 * into a buffer at [this+0x34] if its length (incl. NUL) is < 0x100;
 * returns 1 on success, 0 if too long.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006F74F0(void)
{
    __asm {
        mov     edx, ecx
        push    esi
        mov     esi, dword ptr [esp + 8]
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xff
        jb      L_6f7513
        pop     edi
        xor     al, al
        pop     esi
        ret     4
L_6f7513:
        or      ecx, 0xffffffff
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [edx + 0x34]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    }
}
