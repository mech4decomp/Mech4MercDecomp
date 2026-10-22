/*
 * FUN_007452d0 (289 B) — table insert: stores a 16-byte record at
 * DAT_008b252c[count*7], copies two strings into DAT_008b253c/2540,
 * increments count, returns count < 8.
 *
 * __cdecl, 3 params, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8b2610;   /* 0x008b2610 count */
extern char g_8b252c[]; /* 0x008b252c record base */
extern char g_8b2528[]; /* 0x008b2528 ptr array */
extern char g_8b253c[]; /* 0x008b253c string1 ptr array */
extern char g_8b2540[]; /* 0x008b2540 string2 ptr array */

extern void __cdecl FUN_006f3c80(void);

__declspec(naked) char __stdcall FUN_007452d0(void *p1, void *p2, void *p3)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L314
        mov     edx, dword ptr [g_8b2610]
        mov     edi, dword ptr [ecx]
        lea     eax, [edx * 8]
        sub     eax, edx
        shl     eax, 2
        lea     edx, [eax + g_8b252c]
        mov     esi, edx
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [ecx + 4]
        mov     dword ptr [esi + 4], edi
        mov     edi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [eax + g_8b2528], edx
        jmp     L32d
L314:
        mov     eax, [g_8b2610]
        lea     edx, [eax * 8]
        sub     edx, eax
        mov     dword ptr [edx * 4 + g_8b2528], 0
L32d:
        mov     esi, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_8b2610]
        mov     ebp, dword ptr [esp + 0x1c]
        lea     edx, [ecx * 8]
        sub     edx, ecx
        lea     ebx, [ecx * 8]
        sub     ebx, ecx
        mov     dword ptr [edx * 4 + g_8b253c], eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        shl     ebx, 2
        repne   scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     dword ptr [ebx + g_8b2540], eax
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx + g_8b253c]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, [g_8b2610]
        or      ecx, 0xffffffff
        lea     edx, [eax * 8]
        sub     edx, eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [edx * 4 + g_8b2540]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, [g_8b2610]
        inc     eax
        pop     edi
        cmp     eax, 8
        pop     esi
        mov     [g_8b2610], eax
        sbb     eax, eax
        pop     ebp
        neg     eax
        pop     ebx
        ret     0xc
    }
}
