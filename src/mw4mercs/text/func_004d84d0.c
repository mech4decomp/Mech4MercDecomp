/*
 * FUN_004d84d0 (171 B) — __cdecl base64 encoder. Reads up to 3 bytes from
 * arg1, packs into 4 base64 chars via FUN_004d8580, writes to arg3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d8580(void);

__declspec(naked) void FUN_004d84d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0xc]
        push    edi
        xor     edi, edi
        test    esi, esi
        jle     L8571
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    ebp
        mov     ebp, dword ptr [esp+0x1c]
        jmp     L84f0
L84ec:
        mov     esi, dword ptr [esp+0x18]
L84f0:
        xor     eax, eax
L84f2:
        cmp     edi, esi
        jge     L84ff
        mov     cl, byte ptr [ebx]
        mov     byte ptr [esp+eax*1+0x1c], cl
        inc     ebx
        jmp     L8504
L84ff:
        mov     byte ptr [esp+eax*1+0x1c], 0x0
L8504:
        inc     eax
        inc     edi
        cmp     eax, 0x2
        jle     L84f2
        mov     al, byte ptr [esp+0x1c]
        mov     cl, byte ptr [esp+0x1d]
        mov     dl, al
        shr     dl, 0x2
        mov     byte ptr [esp+0x14], dl
        and     al, 0x3
        mov     dl, cl
        shl     al, 0x4
        shr     dl, 0x4
        add     al, dl
        mov     byte ptr [esp+0x15], al
        mov     al, byte ptr [esp+0x1e]
        and     cl, 0xf
        mov     dl, al
        shl     cl, 0x2
        shr     dl, 0x6
        add     cl, dl
        and     al, 0x3f
        mov     byte ptr [esp+0x16], cl
        mov     byte ptr [esp+0x17], al
        xor     esi, esi
L8549:
        xor     eax, eax
        mov     al, byte ptr [esp+esi*1+0x14]
        push    eax
        call    FUN_004d8580
        add     esp, 0x4
        mov     byte ptr [ebp], al
        inc     ebp
        inc     esi
        cmp     esi, 0x3
        jle     L8549
        cmp     edi, dword ptr [esp+0x18]
        jl      L84ec
        mov     byte ptr [ebp], 0x0
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        ret
L8571:
        mov     ecx, dword ptr [esp+0x14]
        pop     edi
        mov     byte ptr [ecx], 0x0
        pop     esi
        ret
    }
}
