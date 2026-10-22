/*
 * FUN_00700300 (370 B) — Table-list entry creation / option parsing.
 *
 * Validates an entry via virtual methods, then iterates a table of
 * wide-string pairs, converting them with wcslen/malloc/wcstombs,
 * comparing one field against "GameType" (0x79fa6c), and dispatching
 * through a virtual method. Uses CRT helpers via IAT (0x76b294 malloc,
 * 0x76b318 atoi, 0x76b2d0 free) and function-ptr globals.
 *
 * __thiscall-ish, 4 args, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ae0(void);
extern int  __cdecl FUN_006fab90(void);

extern void *g_76b404;   /* wcslen fn ptr */
extern void *g_76b294;   /* malloc IAT */
extern void *g_76b384;   /* wcstombs fn ptr */
extern void *g_76b318;   /* atoi IAT */
extern void *g_858a2c;   /* callback fn ptr */
extern void *g_76b2d0;   /* free fn ptr */

__declspec(naked) void __cdecl FUN_00700300(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10C
        push    esi
        mov     esi, dword ptr [ebp + 0xC]
        push    edi
        mov     edi, dword ptr [ebp + 8]
        push    esi
        mov     ecx, edi
        call    FUN_006f5ae0
        test    al, al
        jnz     L70033C
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 4]
        test    al, al
        jnz     L70033C
        push    edi
        push    0x7A1094
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L70033C
        int     3
L70033C:
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jbe     L700458
        mov     edx, dword ptr [ebp + 0x10]
        lea     esi, [eax + 4]
        sub     edx, eax
        push    ebx
        mov     dword ptr [ebp - 4], esi
        mov     dword ptr [ebp - 8], edx
        mov     dword ptr [ebp + 0x10], ecx
L70035B:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L700441
        mov     ebx, dword ptr [g_76b404]
        push    eax
        call    ebx
        mov     ecx, dword ptr [ebp - 8]
        mov     esi, dword ptr [ecx + esi*1]
        push    esi
        mov     edi, eax
        call    ebx
        inc     edi
        push    edi
        mov     ebx, eax
        call    dword ptr [g_76b294]
        inc     ebx
        push    ebx
        mov     dword ptr [ebp + 0x14], eax
        call    dword ptr [g_76b294]
        mov     edx, dword ptr [ebp - 4]
        mov     dword ptr [ebp - 0xC], eax
        mov     eax, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [g_76b384]
        push    eax
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        call    edi
        push    ebx
        mov     ebx, dword ptr [ebp - 0xC]
        push    esi
        push    ebx
        call    edi
        add     esp, 0x28
        mov     esi, 0x79FA6C
        mov     eax, ebx
L7003B6:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L7003DA
        test    cl, cl
        jz      L7003D6
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L7003DA
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L7003B6
L7003D6:
        xor     eax, eax
        jmp     L7003DF
L7003DA:
        sbb     eax, eax
        sbb     eax, -1
L7003DF:
        test    eax, eax
        jnz     L700418
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        call    dword ptr [g_76b318]
        lea     ecx, [ebp - 0x10C]
        push    ecx
        push    0x100
        push    eax
        push    0
        call    dword ptr [g_858a2c]
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ecx]
        add     esp, 0x14
        lea     eax, [ebp - 0x10C]
        push    eax
        push    0x79FA6C
        jmp     L700422
L700418:
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ebx
L700422:
        mov     eax, dword ptr [ebp + 0xC]
        push    eax
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [g_76b2d0]
        push    ecx
        call    esi
        push    ebx
        call    esi
        mov     edi, dword ptr [ebp + 8]
        mov     esi, dword ptr [ebp - 4]
        add     esp, 8
L700441:
        mov     eax, dword ptr [ebp + 0x10]
        add     esi, 4
        dec     eax
        mov     dword ptr [ebp - 4], esi
        mov     dword ptr [ebp + 0x10], eax
        jnz     L70035B
        mov     esi, dword ptr [ebp + 0xC]
        pop     ebx
L700458:
        mov     edx, dword ptr [edi]
        push    0x79FB30
        push    0x79FAD4
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
