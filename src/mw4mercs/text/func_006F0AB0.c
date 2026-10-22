/*
 * FUN_006F0AB0 (423 B) — __cdecl. Allocates a 0x14-byte object, walks a
 * linked list of string records (refcounted, length-prefixed strings),
 * comparing/copying strings, and frees records whose refcount drops to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0040f060(void);

extern int g_7dab44;
extern int g_7dab40;
extern void *g_76b2b0;

__declspec(naked) void FUN_006F0AB0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [g_7dab40]
        push    edi
        mov     edi, dword ptr [eax]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      l_6f0afa
        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        mov     dword ptr [esp + 8], esi
        jmp     l_6f0b06
    l_6f0afa:
        mov     dword ptr [esp + 8], 0
        mov     esi, dword ptr [esp + 8]
    l_6f0b06:
        mov     ecx, esi
        call    FUN_00416cc0
        test    eax, eax
        je      l_6f0c45
        push    ebx
        push    ebp
    l_6f0b17:
        mov     ebp, dword ptr [eax + 0x18]
        test    ebp, ebp
        lea     ebx, [eax + 0x18]
        mov     dword ptr [esp + 0x18], ebx
        je      l_6f0b63
        inc     byte ptr [ebp - 1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
    l_6f0b36:
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_0040f060
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x20]
        push    esi
        push    eax
        push    ecx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        jne     l_6f0bad
        mov     edx, dword ptr [ebx]
        test    edx, edx
        je      l_6f0b67
        inc     byte ptr [edx - 1]
        jmp     l_6f0b6b
    l_6f0b63:
        xor     esi, esi
        jmp     l_6f0b36
    l_6f0b67:
        xor     esi, esi
        jmp     l_6f0b79
    l_6f0b6b:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
    l_6f0b79:
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        seta    bl
        test    edx, edx
        je      l_6f0ba5
        mov     cl, byte ptr [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_6f0ba5
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_6f0ba5:
        test    bl, bl
        je      l_6f0bad
        mov     bl, 1
        jmp     l_6f0baf
    l_6f0bad:
        xor     bl, bl
    l_6f0baf:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      l_6f0bca
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_6f0bca
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_6f0bca:
        test    ebp, ebp
        je      l_6f0be3
        mov     cl, byte ptr [ebp - 1]
        lea     eax, [ebp - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_6f0be3
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_6f0be3:
        test    bl, bl
        je      l_6f0c2e
        mov     edx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edx]
        test    edx, edx
        je      l_6f0bf4
        inc     byte ptr [edx - 1]
    l_6f0bf4:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x24]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep     movsb
        je      l_6f0c2e
        mov     cl, byte ptr [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_6f0c2e
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_6f0c2e:
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jne     l_6f0b17
        mov     esi, dword ptr [esp + 0x10]
        pop     ebp
        pop     ebx
    l_6f0c45:
        test    esi, esi
        je      l_6f0c51
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
    l_6f0c51:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}
