/*
 * FUN_004D6E50 (147 B) — __cdecl (2 stack args, RET 8). String comparison
 * helper: compares the string at [arg1] against the string at [arg2+0x1C]
 * (two passes), returning a strcmp-style result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004D6E50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x1c]
        mov     esi, edi
        mov     eax, ebp
loc_4d6e65:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6e8d
        test    cl, cl
        je      loc_4d6e89
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6e8d
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     loc_4d6e65
loc_4d6e89:
        xor     eax, eax
        jmp     loc_4d6e92
loc_4d6e8d:
        sbb     eax, eax
        sbb     eax, -1
loc_4d6e92:
        test    eax, eax
        jne     loc_4d6e9d
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
loc_4d6e9d:
        mov     esi, edi
        mov     eax, ebp
loc_4d6ea1:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6ec9
        test    cl, cl
        je      loc_4d6ec5
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6ec9
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     loc_4d6ea1
loc_4d6ec5:
        xor     eax, eax
        jmp     loc_4d6ece
loc_4d6ec9:
        sbb     eax, eax
        sbb     eax, -1
loc_4d6ece:
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        dec     ecx
        and     ecx, 2
        dec     ecx
        mov     eax, ecx
        ret     8
    }
}
