/*
 * FUN_10040680 (88 B) - __cdecl.  memset-like: fills arg1 (dest) with byte
 * arg2 for arg3 (count) bytes, returns dest.  Fast 4-byte aligned fill.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10040680(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 4]
        test    edx, edx
        je      L_406d3
        xor     eax, eax
        mov     al, byte ptr [esp + 8]
        push    edi
        mov     edi, ecx
        cmp     edx, 4
        jb      L_406c7
        neg     ecx
        and     ecx, 3
        je      L_406a9
L_406a3:
        sub     edx, ecx
        mov     byte ptr [edi], al
        inc     edi
        dec     ecx
        __emit 0x75   /* jne L_406a3 - MSVC6 miscomputes backward rel8 (off-by-2) */
        __emit 0xFA
L_406a9:
        mov     ecx, eax
        shl     eax, 8
        add     eax, ecx
        mov     ecx, eax
        shl     eax, 0x10
        add     eax, ecx
        mov     ecx, edx
        and     edx, 3
        shr     ecx, 2
        je      L_406c7
        rep     stosd
        test    edx, edx
        je      L_406cd
L_406c7:
        mov     byte ptr [edi], al
        inc     edi
        dec     edx
        jne     L_406c7
L_406cd:
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
L_406d3:
        mov     eax, dword ptr [esp + 4]
        ret
    }
}
