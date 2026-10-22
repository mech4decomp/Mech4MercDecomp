/*
 * FUN_004f9f30 (106 B) — text-buffer insert helper. memmove-based
 * insertion of a char (and optional DBCS lead byte) into a string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b28c;   /* IAT: memmove */

__declspec(naked) void FUN_004f9f30(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx]
        push    ebx
        mov     bl, byte ptr [esp + 0x10]
        xor     eax, eax
        test    bl, bl
        setnz   al
        push    ebp
        push    esi
        mov     esi, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        sub     ecx, esi
        inc     eax
        mov     dword ptr [esp + 0x1c], eax
        push    ecx
        add     eax, esi
        lea     ebp, [esi + edi]
        add     eax, edi
        push    ebp
        push    eax
        call    dword ptr [g_0076b28c]
        mov     cl, byte ptr [esp + 0x24]
        mov     byte ptr [ebp], cl
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        test    bl, bl
        lea     eax, [esi + 0x1]
        mov     dword ptr [ecx], eax
        jz      L_skip

        mov     byte ptr [eax + edi], bl
        inc     eax
        mov     dword ptr [ecx], eax

L_skip:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x1c]
        add     eax, ecx
        mov     byte ptr [eax + edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        pop     ebx
        ret
    }
}
