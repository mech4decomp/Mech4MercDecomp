/*
 * FUN_00402170 (181 B) — copies two strings into buffers and sets a mode
 * global based on a version code.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b7e60;
extern int g_7b7c5c;
extern int g_7b7e5c;
extern int g_7b7be0;
extern int g_7b7c68;
extern int g_7b21b8;
extern int g_7b21bc;
extern int g_7b21c0;

__declspec(naked) void FUN_00402170(void)
{
    __asm {
        or      ecx, 0xffffffff
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, 0x7b7c48
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [g_7b7e60]
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7b7be4
        repne scasb
        mov     eax, dword ptr [g_7b7c5c]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [g_7b7e5c]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_7b7be0]
        cmp     ecx, 0xa
        pop     edi
        mov     dword ptr [g_7b21b8], ecx
        mov     dword ptr [g_7b21bc], eax
        pop     esi
        je      L_21e0
        cmp     ecx, 0xb
        jne     L_221d
    L_21e0:
        cmp     ecx, 0xa
        mov     eax, 1
        mov     dword ptr [g_7b21c0], eax
        jne     L_2210
        mov     ecx, dword ptr [g_7b7c68]
        dec     ecx
        je      L_2208
        dec     ecx
        jne     L_2222
        mov     dword ptr [g_7b21c0], 2
        ret     0xc
    L_2208:
        mov     dword ptr [g_7b21c0], eax
        ret     0xc
    L_2210:
        mov     dword ptr [g_7b21c0], 3
        ret     0xc
    L_221d:
        mov     eax, 1
    L_2222:
        ret     0xc
    }
}
