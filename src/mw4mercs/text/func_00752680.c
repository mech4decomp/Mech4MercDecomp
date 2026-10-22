/*
 * FUN_00752680 (478 B) — Builds a DirectSound speaker-config string into the
 * DAT_008b9150 buffer by appending the DSSPEAKER_* name strings selected by
 * the bit flags in param_1. Returns &DAT_008b9150.
 *
 * __stdcall RET 4 (one uint param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b9150;

__declspec(naked) void * __stdcall FUN_00752680(unsigned int param_1)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    dl, 1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9150], 0
        jz      L_c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad740
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_c0:
        test    dl, 2
        jz      L_f2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad730
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_f2:
        test    dl, 3
        jz      L_724
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad720
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_724:
        test    dl, 4
        jz      L_756
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad70c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_756:
        mov     ebx, edx
        and     ebx, 5
        push    ebp
        jz      L_78b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad6f8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
    L_78b:
        test    dl, 0x14
        jz      L_7bd
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad6dc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
    L_7bd:
        test    dl, 0xa
        jz      L_7ef
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad6c0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
    L_7ef:
        test    ebx, ebx
        pop     ebp
        jz      L_821
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad6a8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
    L_821:
        test    dl, 0xb4
        jz      L_853
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad690
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9150
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_853:
        pop     edi
        pop     esi
        mov     eax, 0x8b9150
        pop     ebx
        ret     4
    }
}
