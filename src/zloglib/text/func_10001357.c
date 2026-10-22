/*
 * ZlogLib.dll - FUN_10001357 (0x10001357, 522 B, __cdecl)
 * Log close/flush: closes active log files, optionally renames them
 * and spawns a stats-collection process. Uses _alloca_probe (0x3210).
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_100042f8;
extern int g_100042fc;
extern int g_10004014;
extern void (*g_10003040)(void);
extern void (*g_10003018)(void);
extern void (*g_10003028)(void);
extern void (*g_10003024)(void);
extern void (*g_1000301c)(void);
extern void (*g_10003008)(void);

extern void __cdecl FUN_10002980(void);
extern char *__cdecl FUN_10002931(void);

__declspec(naked) void FUN_10001357(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x3210
        call    FUN_10002980
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10003040]
        xor     ebx, ebx
        cmp     dword ptr [ebp + 0x8], 0x2
        push    edi
        jz      l_100013da
        mov     eax, dword ptr [g_100042f8]
        cmp     eax, ebx
        jz      l_100013da
        push    eax
        call    dword ptr [g_10003018]
        push    dword ptr [g_100042f8]
        call    dword ptr [g_10003028]
        cmp     dword ptr [g_10004014], 0x4
        pop     ecx
        pop     ecx
        mov     dword ptr [g_100042f8], ebx
        jnz     l_100013da
        push    0x3ff
        push    0x10004d08
        push    0x10004094
        call    FUN_10002931
        pop     ecx
        pop     ecx
        push    eax
        lea     eax, [ebp + 0xfffffbbc]
        push    eax
        call    esi
        lea     eax, [ebp + 0xfffffbbc]
        push    eax
        push    0x10004908
        mov     byte ptr [ebp + -0x45], bl
        call    dword ptr [g_10003024]
        add     esp, 0x14
    l_100013da:
        mov     edx, dword ptr [g_100042fc]
        cmp     edx, ebx
        jnz     l_100013fb
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, ebx
        jz      l_1000155c
        mov     dword ptr [eax + 0xc], 0xfffffba9
        jmp     l_1000155c
    l_100013fb:
        cmp     dword ptr [ebp + 0x8], 0x1
        jz      l_1000155c
        push    0x10
        pop     ecx
        xor     eax, eax
        mov     dword ptr [ebp + -0x44], ebx
        lea     edi, [ebp + -0x40]
        push    edx
        rep stosd
        call    dword ptr [g_10003018]
        push    dword ptr [g_100042fc]
        call    dword ptr [g_10003028]
        pop     ecx
        pop     ecx
        push    0x7ff
        push    0x10005f4c
        push    0x10004094
        mov     dword ptr [g_100042fc], ebx
        call    FUN_10002931
        pop     ecx
        pop     ecx
        push    eax
        lea     eax, [ebp + 0xfffff7bc]
        push    eax
        call    esi
        lea     eax, [ebp + 0xfffff7bc]
        push    eax
        push    0x1000590c
        mov     byte ptr [ebp + -0x45], bl
        call    dword ptr [g_10003024]
        add     esp, 0x14
        cmp     dword ptr [ebp + 0x10], ebx
        jz      l_1000155c
        lea     eax, [ebp + 0xfffff7bc]
        push    0x800
        push    eax
        mov     dword ptr [ebp + -0x44], 0x44
        mov     dword ptr [ebp + -0x18], 0x101
        mov     word ptr [ebp + -0x14], bx
        mov     dword ptr [ebp + -0xc], ebx
        mov     dword ptr [ebp + -0x8], ebx
        mov     dword ptr [ebp + -0x4], ebx
        call    dword ptr [g_1000301c]
        pop     ecx
        pop     ecx
        push    0xa27
        mov     edi, 0x10004508
        push    edi
        lea     eax, [ebp + 0xfffff7bc]
        push    eax
        push    0x1000406c
        call    FUN_10002931
        add     esp, 0xc
        push    eax
        lea     eax, [ebp + 0xffffe36c]
        push    eax
        call    esi
        add     esp, 0xc
        push    0xa27
        push    edi
        lea     eax, [ebp + 0xfffff7bc]
        push    eax
        push    0x10004050
        mov     byte ptr [ebp + 0xffffed93], bl
        call    FUN_10002931
        add     esp, 0xc
        push    eax
        lea     eax, [ebp + 0xffffed94]
        push    eax
        call    esi
        add     esp, 0xc
        push    0x157b
        push    0x10004408
        lea     eax, [ebp + 0xffffed94]
        push    eax
        lea     eax, [ebp + 0xffffe36c]
        push    eax
        push    0x10004040
        mov     byte ptr [ebp + 0xfffff7bb], bl
        call    FUN_10002931
        add     esp, 0x10
        push    eax
        lea     eax, [ebp + 0xffffcdf0]
        push    eax
        call    esi
        mov     esi, dword ptr [ebp + 0x10]
        add     esp, 0xc
        push    esi
        lea     eax, [ebp + -0x44]
        push    eax
        push    ebx
        push    ebx
        push    0x8
        push    ebx
        push    ebx
        push    ebx
        lea     eax, [ebp + 0xffffcdf0]
        push    eax
        push    ebx
        mov     byte ptr [ebp + 0xffffe36b], bl
        call    dword ptr [g_10003008]
        test    eax, eax
        jnz     l_1000155c
        mov     dword ptr [esi + 0xc], 0xfffffba9
    l_1000155c:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
