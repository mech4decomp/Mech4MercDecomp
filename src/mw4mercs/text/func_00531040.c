/*
 * FUN_00531040 (417 B) — __thiscall, 1 arg (ret 4), ecx=this. Initializes a
 * large object: allocates a vtable'd singleton, sets up sub-objects, copies a
 * string, and calls several constructors/initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00414fd0(void);
extern void __cdecl FUN_0061ae90(void);
extern void __cdecl FUN_0061b030(void);
extern void __cdecl FUN_0061c1b0(void);
extern void __cdecl FUN_006212d0(void);
extern void __cdecl FUN_0061db90(void);
extern void __cdecl FUN_00511920(void);
extern void __cdecl FUN_00511c30(void);
extern void __cdecl FUN_004d40e0(void);
extern void __cdecl FUN_00531f00(void);

extern int g_7f293c;
extern int g_7dab44;
extern int g_7dab40;
extern int g_7dd268;
extern int g_7ddd3c;
extern char g_77b2c8[];

__declspec(naked) void FUN_00531040(void)
{
    __asm {
        sub     esp, 0x80
        push    ebp
        mov     ebp, ecx
        cmp     byte ptr [ebp + 0x17], 1
        push    4
        jne     l_106a
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_1083
        mov     dword ptr [eax], 0x77b2f8
        mov     dword ptr [g_7f293c], eax
        jmp     l_108d
    l_106a:
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_1083
        mov     dword ptr [eax], 0x77b2ec
        mov     dword ptr [g_7f293c], eax
        jmp     l_108d
    l_1083:
        mov     dword ptr [g_7f293c], 0
    l_108d:
        push    ebx
        mov     bl, byte ptr [ebp + 0x16]
        test    bl, bl
        push    esi
        push    edi
        je      l_109f
        call    FUN_00414fd0
        mov     dword ptr [ebp + 0x18], eax
    l_109f:
        test    bl, bl
        mov     byte ptr [ebp + 0x3530], 0
        mov     byte ptr [ebp + 0x308c], 0
        je      l_10ff
        mov     ecx, dword ptr [g_7dab44]
        mov     edi, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edi
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     ecx, dword ptr [eax + 0xa0]
        test    ecx, ecx
        je      l_10ff
        push    0x5c08
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_10f0
        mov     ecx, eax
        call    FUN_0061ae90
        jmp     l_10f2
    l_10f0:
        xor     eax, eax
    l_10f2:
        mov     ecx, eax
        mov     dword ptr [ebp + 0x307c], eax
        call    FUN_0061b030
    l_10ff:
        mov     ecx, dword ptr [ebp + 0x3080]
        test    ecx, ecx
        je      l_1119
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [ebp + 0x3080], 0
    l_1119:
        push    0
        push    0
        push    0
        push    0
        push    0x64
        push    0xc8
        push    0xc7ff
        push    0x4fff
        push    0x4afff
        push    0x7cfff
        push    0xbb7ff
        call    FUN_0061c1b0
        add     esp, 0x2c
        call    FUN_006212d0
        test    eax, eax
        je      l_1156
        mov     byte ptr [eax + 0x10], 1
    l_1156:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77b2c8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x10]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        push    0
        push    0
        mov     ecx, eax
        push    0
        and     ecx, 3
        push    0
        rep     movsb
        lea     ecx, [esp + 0x20]
        push    0
        push    ecx
        call    FUN_0061db90
        mov     ecx, dword ptr [g_7dd268]
        add     esp, 0x18
        test    ecx, ecx
        pop     edi
        pop     esi
        pop     ebx
        je      l_11b6
        call    FUN_00511920
        mov     ecx, dword ptr [g_7dd268]
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x17]
        push    eax
        call    FUN_00511c30
    l_11b6:
        mov     edx, dword ptr [esp + 0x88]
        push    edx
        mov     ecx, ebp
        call    FUN_004d40e0
        mov     ecx, ebp
        call    FUN_00531f00
        mov     eax, dword ptr [g_7ddd3c]
        test    eax, eax
        pop     ebp
        je      l_11d8
        call    eax
    l_11d8:
        add     esp, 0x80
        ret     4
    }
}
