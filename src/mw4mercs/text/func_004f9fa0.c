/*
 * FUN_004f9fa0 (74 B) — backspace handler. CharPrevA + memmove to
 * delete the previous character from a text buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b28c;   /* IAT: memmove */

extern char *FUN_0075e118(char *a, char *b);

__declspec(naked) void FUN_004f9fa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        lea     ebp, [esi + ebx]
        push    ebp
        push    ebx
        call    FUN_0075e118
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, esi
        sub     edi, eax
        add     edi, ebx
        mov     ebx, dword ptr [ecx]
        mov     edx, ebx
        sub     edx, esi
        inc     edx
        push    edx
        push    ebp
        push    eax
        call    dword ptr [g_0076b28c]
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 0xc
        sub     ebx, edi
        sub     esi, edi
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ebx
        pop     ebx
        ret
    }
}
