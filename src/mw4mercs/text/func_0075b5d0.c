/*
 * FUN_0075b5d0 (186 B) — Copies two strings (from FUN_00752e30) into local
 * buffers, calls a vtable method at [*param_1 + 0x38], and on failure logs
 * "FAILED (0x%x - %s) - SetPositions(...)" via FUN_006fabf0.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7af69c[];   /* "FAILED (0x%x - %s) - SetPositions(...)" */

extern char *__cdecl FUN_00752e30(int);
extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_0075b5d0(
    int *p1, int p2, int p3, int p4, int p5)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x200
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        push    ebx
        call    FUN_00752e30
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebp - 0x100]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebx
        rep     movsb
        call    FUN_00752e30
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x200]
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x18]
        rep     movsd
        push    edx
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [ecx + 0x38]
        mov     esi, eax
        test    esi, esi
        jge     Lend
        mov     edx, dword ptr [ebp + 0x14]
        lea     ecx, [ebp - 0x200]
        push    ecx
        push    edx
        lea     eax, [ebp - 0x100]
        push    eax
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7af69c
        call    FUN_006fabf0
        add     esp, 0x20
        test    eax, eax
        jz      Lend
        int     3
Lend:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
