/*
 * FUN_005214c0 (257 B) — Pilot resource enumeration.
 *
 * Enumerates pilot files from "Resource\\Pilots\\*.*", allocates a
 * CFinder-style object, iterates entries, copies filenames into a buffer
 * array, and returns a count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00412570(void *this, const char *s);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern int __fastcall FUN_0041d890(void *this, int arg);
extern int __fastcall FUN_0041db80(void *this);
extern int __fastcall FUN_0041dbe0(void *this);
extern void __fastcall FUN_0041dac0(void *this);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_006f4230(void *ptr);

__declspec(naked) void FUN_005214c0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0x0c]
        push    ebx
        mov     ebx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        push    ebp
        push    edi
        push    0x0077a180
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc_fail
        mov     ecx, dword ptr [esp + 0x0c]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     ebp, eax
        jmp     alloc_done
alloc_fail:
        xor     ebp, ebp
alloc_done:
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], 0
        call    FUN_0041db80
        mov     edi, eax
        test    edi, edi
        jz      loop_end
        push    esi
loop_top:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
skip_free:
        push    0
        push    0x80
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, ebp
        call    FUN_0041dbe0
        mov     edx, dword ptr [esp + 0x1c]
        inc     edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], edx
        add     ebx, 4
        call    FUN_0041db80
        mov     edi, eax
        test    edi, edi
        jnz     loop_top
        pop     esi
loop_end:
        test    ebp, ebp
        jz      skip_destroy
        mov     ecx, ebp
        call    FUN_0041dac0
        push    ebp
        call    FUN_004084e0
        add     esp, 4
skip_destroy:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [edx], ecx
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        pop     ebp
        pop     ebx
        jz      ret_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     ret_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
ret_done:
        mov     eax, 1
        add     esp, 8
        ret     8
    }
}
