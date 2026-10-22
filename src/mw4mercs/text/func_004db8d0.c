#include <windows.h>

extern char g_7b4348[];                 /* "skin_0" string at 0x7b4348 */
extern char g_7734c8[];                 /* format string at 0x7734c8 */
extern char g_7734ac[];                 /* format string at 0x7734ac */
extern void __cdecl FUN_004DB640(void *, int);
extern int __cdecl FUN_006FAB90(int, const char *, ...);
extern void __cdecl FUN_00490A40(void *, int, void *, void *);
extern void __stdcall FUN_00717C10(void *);

__declspec(naked) void __stdcall FUN_004DB8D0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        test    byte ptr [esi + 0x18], 0x1
        push    edi
        jz      l_else
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_else:
        mov     edi, dword ptr [esi + 0x10]
        mov     al, byte ptr [edi + 0x1]
        cmp     al, 0x40
        lea     ebx, [edi + 0x1]
        mov     dword ptr [ebp - 0x4], ebx
        jnz     l_skip
        mov     al, byte ptr [edi]
        cmp     al, 0x40
        jnz     l_skin
        mov     edi, ebx
    l_skip:
        mov     ecx, dword ptr [ebp + 0xc]
        or      ecx, 0x8
        push    ecx
        push    edi
        call    FUN_004DB640
        mov     edi, dword ptr [esi + 0x18]
        add     esp, 0x8
        xor     edx, edx
        test    eax, eax
        setnz   dl
        mov     dword ptr [esi + 0x1c], eax
        or      edi, edx
        mov     dword ptr [esi + 0x18], edi
        mov     eax, edi
        pop     edi
        pop     esi
        and     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_skin:
        push    0x41
        push    offset g_7b4348
        mov     byte ptr [g_7b4348 + 0x4], al
        call    FUN_004DB640
        add     esp, 0x8
        test    eax, eax
        mov     dword ptr [ebp + 0x8], eax
        jnz     l_skin2
        push    offset g_7b4348
        push    offset g_7734c8
        push    eax
        call    FUN_006FAB90
        add     esp, 0xc
        test    eax, eax
        jz      l_skin2
        int     3
    l_skin2:
        push    0x41
        push    ebx
        call    FUN_004DB640
        mov     ebx, eax
        add     esp, 0x8
        test    ebx, ebx
        jnz     l_skin3
        mov     eax, dword ptr [ebp - 0x4]
        push    eax
        push    offset g_7734ac
        push    ebx
        call    FUN_006FAB90
        add     esp, 0xc
        test    eax, eax
        jz      l_skin3
        int     3
    l_skin3:
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    ecx
        push    0x0
        push    edi
        call    FUN_00490A40
        add     esp, 0x10
        mov     edi, eax
        push    ebx
        mov     dword ptr [esi + 0x1c], edi
        call    FUN_00717C10
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        call    FUN_00717C10
        mov     edx, dword ptr [esi + 0x18]
        xor     eax, eax
        test    edi, edi
        setnz   al
        pop     edi
        or      edx, eax
        mov     dword ptr [esi + 0x18], edx
        mov     eax, edx
        pop     esi
        and     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
