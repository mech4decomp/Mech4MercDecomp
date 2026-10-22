/*
 * FUN_00732870 (423 B) — __thiscall, 1 arg (ret 4). Builds a config/state
 * struct on the stack (float math, string lookups), validates a string
 * against a known value, and updates global state via function pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00732af0(void);

extern int g_8a9978;
extern int g_8a997c;
extern int g_8a9974;
extern char g_8a9980;
extern float g_8816d8;
extern float g_7a60a8;
extern float g_76dd60;
extern char g_8816e5;
extern char g_8816e6;
extern int g_8816cc;
extern void *g_76b068;
extern void *g_76b074;
extern void *g_76b320;
extern void *g_76b104;
extern void *g_76b07c;
extern char g_89697c[];
extern char g_779d48[];
extern char g_896a80[];
extern char g_76b768[];

__declspec(naked) void FUN_00732870(void)
{
    __asm {
        mov     eax, dword ptr [g_8a9978]
        sub     esp, 0x40
        test    eax, eax
        push    ebp
        mov     ebp, dword ptr [g_76b068]
        push    esi
        push    edi
        je      l_73288e
        push    eax
        mov     eax, dword ptr [g_8a997c]
        push    eax
        call    ebp
    l_73288e:
        mov     eax, dword ptr [g_8a9974]
        test    eax, eax
        je      l_73289e
        push    eax
        call    dword ptr [g_76b074]
    l_73289e:
        fld     dword ptr [g_8816d8]
        xor     eax, eax
        fmul    dword ptr [g_7a60a8]
        mov     ecx, 0xf
        lea     edi, [esp + 0x10]
        rep     stosd
        mov     al, byte ptr [g_8816e5]
        mov     edx, 0x400000
        fadd    dword ptr [g_76dd60]
        mov     byte ptr [esp + 0x27], 1
        mov     byte ptr [esp + 0x28], 0
        mov     byte ptr [esp + 0x29], 0
        fstp    dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0xc]
        and     ecx, 0x7fffff
        sub     edx, ecx
        mov     cl, byte ptr [g_8816e6]
        neg     al
        mov     byte ptr [esp + 0x24], cl
        mov     cl, byte ptr [g_8a9980]
        mov     dword ptr [esp + 0x10], edx
        mov     byte ptr [esp + 0x2b], 0
        sbb     eax, eax
        and     eax, 0x12c
        add     eax, 0x190
        test    cl, cl
        sete    dl
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [g_8816cc]
        dec     edx
        and     edx, 0xfffffffc
        add     edx, 4
        test    eax, eax
        mov     byte ptr [esp + 0x2a], dl
        je      l_73294e
        mov     ecx, dword ptr [eax + 0x75c]
        test    ecx, ecx
        je      l_73294e
        lea     edx, [eax + 0xc]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        add     ecx, -5
        push    ecx
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        jmp     l_73296a
    l_73294e:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_89697c
        repne   scasb
        not     ecx
        add     ecx, -5
        push    ecx
        push    offset g_89697c
        lea     ecx, [esp + 0x34]
        push    ecx
    l_73296a:
        call    dword ptr [g_76b320]
        mov     eax, dword ptr [esp + 0x5c]
        add     esp, 0xc
        test    eax, eax
        je      l_7329ef
        push    eax
        call    FUN_00732af0
        test    al, al
        je      l_7329ef
        mov     esi, offset g_779d48
        mov     eax, offset g_896a80
    l_73298f:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     l_7329b3
        test    cl, cl
        je      l_7329af
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jne     l_7329b3
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     l_73298f
    l_7329af:
        xor     eax, eax
        jmp     l_7329b8
    l_7329b3:
        sbb     eax, eax
        sbb     eax, -1
    l_7329b8:
        test    eax, eax
        jne     l_7329ef
        call    dword ptr [g_76b104]
        cmp     eax, 0x3a4
        jne     l_7329ef
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76b768
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [esp + 0x2c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
    l_7329ef:
        lea     ecx, [esp + 0x10]
        push    ecx
        call    dword ptr [g_76b07c]
        mov     edx, dword ptr [g_8a997c]
        push    eax
        push    edx
        mov     dword ptr [g_8a9974], eax
        call    ebp
        pop     edi
        pop     esi
        mov     dword ptr [g_8a9978], eax
        pop     ebp
        add     esp, 0x40
        ret     4
    }
}
