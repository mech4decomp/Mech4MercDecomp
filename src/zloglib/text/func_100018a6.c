/*
 * ZlogLib.dll - FUN_100018a6 (0x100018A6, 375 B, __cdecl)
 * Log init: enables/disables logging, emits a header block of
 * game/version/author info, and returns the log filename buffer.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_10006c0c;
extern int g_10027098;

extern void __cdecl FUN_10002974(void);
extern void __cdecl FUN_10001357(void);
extern int __cdecl FUN_10001a1d(void);
extern void __cdecl FUN_10001ce9(void);
extern char *__cdecl FUN_10002931(void);
extern void __cdecl FUN_10001be9(void);
extern void __cdecl FUN_10001561(void);

__declspec(naked) void FUN_100018a6(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        xor     ebx, ebx
        cmp     esi, ebx
        jnz     l_100018d9
        push    0x1000425c
        mov     esi, 0x10004908
        push    esi
        mov     dword ptr [g_10006c0c], ebx
        call    FUN_10002974
        pop     ecx
        pop     ecx
        mov     eax, esi
        jmp     l_10001a19
    l_100018d9:
        cmp     dword ptr [g_10006c0c], ebx
        jz      l_100018f2
        push    ebx
        push    ebx
        push    ebx
        call    FUN_10001357
        add     esp, 0xc
        mov     dword ptr [g_10006c0c], ebx
    l_100018f2:
        push    esi
        call    FUN_10001a1d
        test    eax, eax
        pop     ecx
        jnz     l_10001907
        mov     eax, 0x10004908
        jmp     l_10001a19
    l_10001907:
        push    edi
        call    FUN_10001ce9
        mov     eax, dword ptr [g_10027098]
        cmp     eax, ebx
        jz      l_10001923
        mov     eax, dword ptr [eax + 0x4]
        cmp     eax, ebx
        jz      l_10001923
        call    eax
        mov     edi, eax
        jmp     l_10001928
    l_10001923:
        mov     edi, 0x100040ec
    l_10001928:
        push    0x10004254
        push    edi
        push    0x1000423c
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        push    0x10004238
        push    edi
        push    0x10004220
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        push    0x10004208
        push    edi
        push    0x100041f0
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        push    dword ptr [esi + 0x8]
        push    edi
        push    0x100041d8
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        add     esp, 0x40
        push    dword ptr [esi + 0xc]
        push    edi
        push    0x100041c0
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        push    dword ptr [esi + 0x10]
        push    edi
        push    0x100041a8
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        push    dword ptr [esi + 0x14]
        push    edi
        push    0x1000418c
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        mov     esi, dword ptr [ebp + 0xc]
        add     esp, 0x30
    l_100019c3:
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      l_100019e3
        push    eax
        push    edi
        push    0x10004180
        add     esi, 0x4
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        add     esp, 0x10
        jmp     l_100019c3
    l_100019e3:
        lea     eax, [ebp + -0x80]
        push    0x80
        push    eax
        call    FUN_10001561
        lea     eax, [ebp + -0x80]
        push    eax
        push    edi
        push    0x10004170
        call    FUN_10002931
        push    eax
        call    FUN_10001be9
        add     esp, 0x18
        mov     dword ptr [g_10006c0c], 0x2
        mov     eax, 0x10004908
        pop     edi
    l_10001a19:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
