/*
 * FUN_004D6DB0 (148 B) — __cdecl (2 stack args, RET 8). String comparison
 * helper: compares the string at [arg1+0x1C] against the string at
 * [arg2+0x1C] (two passes), returning a strcmp-style result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004D6DB0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx + 0x1c]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x1c]
        mov     esi, edi
        mov     eax, ebp
loc_4d6dc6:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6dee
        test    cl, cl
        je      loc_4d6dea
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6dee
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     loc_4d6dc6
loc_4d6dea:
        xor     eax, eax
        jmp     loc_4d6df3
loc_4d6dee:
        sbb     eax, eax
        sbb     eax, -1
loc_4d6df3:
        test    eax, eax
        jne     loc_4d6dfe
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
loc_4d6dfe:
        mov     esi, edi
        mov     eax, ebp
loc_4d6e02:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6e2a
        test    cl, cl
        je      loc_4d6e26
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     loc_4d6e2a
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     loc_4d6e02
loc_4d6e26:
        xor     eax, eax
        jmp     loc_4d6e2f
loc_4d6e2a:
        sbb     eax, eax
        sbb     eax, -1
loc_4d6e2f:
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
