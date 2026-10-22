/*
 * FUN_006E3FC0 (64 B) — __thiscall(2) helper. If arg1 != arg2, calls
 * FUN_006E2970 then walks the buffer at [esi] (bounded by the size header
 * at [eax-8]) replacing every byte equal to arg1 with arg2, counting the
 * replacements in edi and returning that count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006E2970(void *obj);

__declspec(naked) void FUN_006E3FC0(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        push    esi
        push    edi
        xor     edi, edi
        cmp     al, bl
        mov     esi, ecx
        je      L_6e3ff3
        call    FUN_006E2970
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax - 8]
        add     ecx, eax
        cmp     eax, ecx
        jae     L_6e3ff3
L_6e3fe3:
        mov     dl, byte ptr [esp + 0x10]
        cmp     byte ptr [eax], dl
        jne     L_6e3fee
        mov     byte ptr [eax], bl
        inc     edi
L_6e3fee:
        inc     eax
        cmp     eax, ecx
        jb      L_6e3fe3
L_6e3ff3:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
