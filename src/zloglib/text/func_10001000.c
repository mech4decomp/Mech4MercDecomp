/*
 * ZlogLib.dll - FUN_10001000 (0x10001000, 513 B, __stdcall)
 * Log API init/emit core. Opens log files, formats header strings.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_100042f8;
extern int g_100042fc;
extern int g_10004014;
extern int g_10004304;
extern void (*g_10003040)(void);
extern void (*g_1000303c)(void);
extern char g_10004d07;
extern char g_10005107;
extern char g_10005f4b;
extern char g_1000658b;

extern void __cdecl FUN_10001357(void);
extern void __cdecl FUN_10001ce9(void);
extern void __cdecl FUN_10002974(void);
extern void __cdecl FUN_100015fb(void);
extern void __cdecl FUN_10001561(void);
extern char *__cdecl FUN_10002931(void);
extern int __cdecl FUN_100016a6(void);
extern void __cdecl FUN_1000296e(void);

__declspec(naked) void FUN_10001000(void)
{
    __asm {
        sub     esp, 0x88
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     dword ptr [g_100042f8], ebp
        push    esi
        push    edi
        jnz     l_1000101c
        cmp     dword ptr [g_100042fc], ebp
        jz      l_10001027
    l_1000101c:
        push    ebp
        push    ebp
        push    ebp
        call    FUN_10001357
        add     esp, 0xc
    l_10001027:
        call    FUN_10001ce9
        mov     eax, dword ptr [g_10004014]
        cmp     eax, 0x1
        mov     edi, dword ptr [g_10003040]
        mov     ebx, 0x10004034
        mov     esi, 0x10004908
        jz      l_100010fd
        cmp     eax, 0x5
        jz      l_100010fd
        cmp     eax, 0x2
        jnz     l_1000105e
        push    ebx
        jmp     l_10001102
    l_1000105e:
        cmp     eax, 0x3
        jnz     l_1000107a
        lea     eax, [esp + 0x10]
        push    ebx
        push    eax
        call    FUN_10002974
        pop     ecx
        pop     ecx
        call    FUN_100015fb
        jmp     l_1000110e
    l_1000107a:
        cmp     eax, 0x4
        jnz     l_100010f0
        lea     eax, [esp + 0x10]
        push    ebx
        push    eax
        call    FUN_10002974
        lea     eax, [esp + 0x20]
        push    0x80
        push    eax
        call    FUN_10001561
        add     esp, 0x10
        mov     ebp, 0x3ff
        push    ebp
        push    0x1000658c
        lea     eax, [esp + 0x20]
        push    eax
        push    0x1000550c
        push    0x1000402c
        call    FUN_10002931
        add     esp, 0x10
        push    eax
        push    esi
        call    edi
        and     byte ptr [g_10004d07], 0x0
        add     esp, 0xc
        push    ebp
        push    esi
        push    0x10004024
        call    FUN_10002931
        pop     ecx
        pop     ecx
        push    eax
        push    0x10004d08
        call    edi
        and     byte ptr [g_10005107], 0x0
        add     esp, 0xc
        xor     ebp, ebp
        jmp     l_1000110e
    l_100010f0:
        cmp     dword ptr [g_10004304], ebp
        jnz     l_1000110e
        jmp     l_100011ef
    l_100010fd:
        push    0x10004020
    l_10001102:
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_10002974
        pop     ecx
        pop     ecx
    l_1000110e:
        cmp     dword ptr [g_10004014], ebp
        jz      l_1000115a
        push    esi
        call    FUN_100016a6
        cmp     eax, 0x3
        pop     ecx
        jnz     l_1000112e
        cmp     dword ptr [g_10004304], ebp
        jz      l_100011ef
    l_1000112e:
        cmp     dword ptr [g_10004014], ebp
        jz      l_1000115a
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        call    dword ptr [g_1000303c]
        cmp     eax, ebp
        pop     ecx
        pop     ecx
        mov     dword ptr [g_100042f8], eax
        jnz     l_1000115a
        cmp     dword ptr [g_10004304], ebp
        jnz     l_10001166
        jmp     l_100011ef
    l_1000115a:
        cmp     dword ptr [g_10004304], ebp
        jz      l_100011f4
    l_10001166:
        lea     eax, [esp + 0x18]
        push    0x80
        push    eax
        call    FUN_10001561
        pop     ecx
        pop     ecx
        mov     ebp, 0x63f
        push    ebp
        push    0x1000658c
        lea     eax, [esp + 0x20]
        push    eax
        push    0x100065cc
        push    0x1000402c
        call    FUN_10002931
        add     esp, 0x10
        push    eax
        mov     esi, 0x1000590c
        push    esi
        call    edi
        and     byte ptr [g_10005f4b], 0x0
        push    ebp
        push    esi
        push    0x10005f4c
        call    edi
        and     byte ptr [g_1000658b], 0x0
        push    0x10004018
        push    esi
        call    FUN_1000296e
        and     byte ptr [g_10005f4b], 0x0
        push    ebx
        push    esi
        call    dword ptr [g_1000303c]
        add     esp, 0x28
        test    eax, eax
        mov     dword ptr [g_100042fc], eax
        jnz     l_100011f4
        cmp     dword ptr [g_100042f8], eax
        jz      l_100011ef
        cmp     dword ptr [g_10004014], eax
        jnz     l_100011f4
    l_100011ef:
        or      eax, 0xffffffff
        jmp     l_100011f6
    l_100011f4:
        xor     eax, eax
    l_100011f6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x88
        ret
    }
}
