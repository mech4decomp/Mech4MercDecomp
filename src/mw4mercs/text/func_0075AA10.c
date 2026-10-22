/*
 * FUN_0075AA10 (529 B) — __thiscall (this in ecx) / __stdcall (RET 4,
 * 1 stack param).
 *
 * In-.text data block at 0x75AA10. Builds a path string into the output
 * buffer at [esp+0x48] by concatenating several source strings (0x8589d8,
 * a stack temp, 0x76b9b0, and the FUN_0071F230 result), then loops calling
 * an IAT function (0x76b0e8) with the path until it succeeds or returns
 * -1 with GetLastError()==0x50. On success calls 0x76b0e4/0x76b2d0/0x76b0ec
 * and returns 1; on failure formats an error via 0x76b420 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8589d8;   /* DAT_008589d8 */
extern int g_87dbf4;   /* DAT_0087dbf4 */

extern void __cdecl FUN_0071F230(void);
extern void __cdecl FUN_0075AC30(void);
extern void __cdecl FUN_00731520(void);

extern void *g_76b320;  /* IAT 0x76b320 */
extern void *g_76b420;  /* IAT 0x76b420 */
extern void *g_76b0e8;  /* IAT 0x76b0e8 */
extern void *g_76b1f8;  /* IAT 0x76b1f8 */
extern void *g_76b0e4;  /* IAT 0x76b0e4 */
extern void *g_76b2d0;  /* IAT 0x76b2d0 */
extern void *g_76b0ec;  /* IAT 0x76b0ec */

__declspec(naked) void __cdecl FUN_0075AA10(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x1f
        mov     dword ptr [esp + 0x18], ecx
        call    FUN_0071F230
        push    eax
        lea     eax, [esp + 0x28]
        push    eax
        call    dword ptr [g_76b320]
        add     esp, 0xc
        call    FUN_0075AC30
        mov     edx, dword ptr [g_8589d8]
        mov     ebp, dword ptr [esp + 0x48]
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        mov     al, byte ptr [ecx + ebp - 2]
        dec     ecx
        cmp     al, 0x5c
        je      L75aa7e
        mov     byte ptr [ecx + ebp], 0x5c
        mov     byte ptr [ecx + ebp + 1], 0
L75aa7e:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x76b9b0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x76b9b0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, ebp
        mov     dword ptr [esp + 0x48], 1
L75ab32:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    0x7af138
        push    ecx
        call    dword ptr [g_76b420]
        or      ecx, 0xffffffff
        add     esp, 0xc
        xor     eax, eax
        lea     edi, [esp + 0x18]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        push    eax
        mov     edi, ebx
        rep     movsd
        push    0x8000080
        push    1
        push    eax
        push    eax
        mov     ecx, edx
        push    0x40000000
        and     ecx, 3
        push    ebp
        rep     movsb
        call    dword ptr [g_76b0e8]
        mov     esi, eax
        cmp     esi, -1
        jne     L75ab93
        call    dword ptr [g_76b1f8]
        cmp     eax, 0x50
        jne     L75abf9
L75ab93:
        mov     ecx, dword ptr [esp + 0x48]
        inc     ecx
        cmp     esi, -1
        mov     dword ptr [esp + 0x48], ecx
        je      L75ab32
        mov     edx, dword ptr [g_87dbf4]
        push    edx
        call    FUN_00731520
        mov     ebx, eax
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        push    eax
        not     ecx
        mov     dword ptr [esp + 0x14], eax
        dec     ecx
        lea     eax, [esp + 0x14]
        push    eax
        mov     edi, ecx
        push    edi
        push    ebx
        push    esi
        call    dword ptr [g_76b0e4]
        push    ebx
        mov     ebp, eax
        call    dword ptr [g_76b2d0]
        add     esp, 4
        push    esi
        call    dword ptr [g_76b0ec]
        test    ebp, ebp
        je      L75ac15
        cmp     edi, dword ptr [esp + 0x10]
        jne     L75ac15
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x34
        ret     4
L75abf9:
        mov     eax, dword ptr [g_8589d8]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        add     ecx, 0xe
        push    0x7af0e0
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
L75ac15:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x34
        ret     4
    }
}
