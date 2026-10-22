/*
 * FUN_10033350 (147 B) - __stdcall, RET 0x8.  Looks up a value via
 * FUN_100467fa; on failure retries via FUN_100467f4 and copies a
 * variable-length record (word count at +0xa, data at +0xc) into a stack
 * buffer, then writes 4 bytes to arg2.  On error paths returns an HRESULT
 * built from FUN_100467ca's result (0x80070000 | (result & 0xffff)).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100467fa(void);   /* rel32 call */
extern void __cdecl FUN_100467f4(void);   /* rel32 call */
extern void __cdecl FUN_100467ca(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10033350(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    esi
        xor     ebx, ebx
        call    FUN_100467fa
        cmp     eax, -1
        mov     dword ptr [esp + 0xc], eax
        jne     L_395
        push    esi
        call    FUN_100467f4
        test    eax, eax
        je      L_3b6
        movsx   ecx, word ptr [eax + 0xa]
        mov     eax, dword ptr [eax + 0xc]
        mov     esi, dword ptr [eax]
        mov     edx, ecx
        push    edi
        shr     ecx, 2
        lea     edi, [esp + 0x10]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
    L_395:
        mov     ecx, dword ptr [esp + 0x20]
        mov     dl, byte ptr [esp + 0xf]
        mov     byte ptr [ecx], al
        mov     al, byte ptr [esp + 0xe]
        mov     byte ptr [ecx + 1], ah
        mov     byte ptr [ecx + 2], al
        pop     esi
        mov     eax, ebx
        mov     byte ptr [ecx + 3], dl
        pop     ebx
        add     esp, 0x10
        ret     8
    L_3b6:
        call    FUN_100467ca
        test    eax, eax
        jg      L_3cc
        call    FUN_100467ca
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     8
    L_3cc:
        call    FUN_100467ca
        and     eax, 0xffff
        pop     esi
        or      eax, 0x80070000
        pop     ebx
        add     esp, 0x10
        ret     8
    }
}
