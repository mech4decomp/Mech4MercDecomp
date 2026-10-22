/*
 * FUN_004AEB30 (160 B) — __thiscall keyframe array resize + init.
 *   Resizes keyframe array to 1 element, copies old data, calls FUN_004AE290.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_004ae290(int a, int b);
extern void __stdcall FUN_006f4950(int handle);
extern void __stdcall FUN_006f49a0(void);

extern int DAT_007da920;

__declspec(naked) void __stdcall FUN_004aeb30(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [DAT_007da920]
        push    ebx
        push    edi
        mov     edi, ecx
        push    eax
        mov     dword ptr [esp + 0xc], edi
        call    FUN_006f4950
        mov     ebx, dword ptr [edi + 8]
        cmp     ebx, 1
        jz      l_skip_resize
        push    esi
        push    0xc
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 4]
        add     esp, 4
        test    edx, edx
        mov     esi, eax
        jz      l_set_ptr
        cmp     ebx, 1
        mov     ecx, 1
        ja      l_have_count
        mov     ecx, ebx
    l_have_count:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      l_free_old
        lea     eax, [ecx + ecx * 2]
        sub     edx, esi
        push    ebp
        lea     eax, [esi + eax * 4]
        inc     ecx
    l_copy_loop:
        lea     edi, [edx + eax]
        mov     ebp, dword ptr [edi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 4]
        mov     dword ptr [ebx + 4], ebp
        mov     edi, dword ptr [edi + 8]
        dec     ecx
        sub     eax, 0xc
        test    ecx, ecx
        mov     dword ptr [ebx + 8], edi
        ja      l_copy_loop
        mov     edi, dword ptr [esp + 0x10]
        pop     ebp
    l_free_old:
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_set_ptr:
        mov     dword ptr [edi + 4], esi
        mov     dword ptr [edi + 8], 1
        pop     esi
    l_skip_resize:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 4]
        push    0
        call    FUN_004ae290
        call    FUN_006f49a0
        pop     edi
        pop     ebx
        pop     ecx
        ret     4
    }
}
