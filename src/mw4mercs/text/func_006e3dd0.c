/*
 * FUN_006E3DD0 (85 B) — Buffer remove: remove param_2 bytes starting at
 * offset param_1 from a buffer. Returns original size.
 *
 * __thiscall (ECX = this), RET 8 (2 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006e2970(void);

__declspec(naked) void __stdcall FUN_006e3dd0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        push    edi
        mov     edi, ecx
        jge     l_clamp_done
        xor     esi, esi
    l_clamp_done:
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        mov     eax, dword ptr [edi]
        mov     ebx, dword ptr [eax - 8]
        jle     l_done
        cmp     esi, ebx
        jge     l_done
        mov     ecx, edi
        call    FUN_006e2970
        mov     eax, dword ptr [edi]
        mov     ecx, ebx
        sub     ecx, esi
        sub     ecx, ebp
        inc     ecx
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [eax + esi]
        lea     esi, [edi + ebp]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, ebx
        sub     ecx, ebp
        mov     dword ptr [eax - 8], ecx
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
