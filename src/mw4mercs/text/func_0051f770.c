/*
 * FUN_0051f770 (213 B) — Campaign screen name lookup and copy.
 *
 * __stdcall, RET 0x8 (2 params). Takes a struct with fields at +0x04,
 * +0x08, +0x0C. Resolves a name via FUN_00617920, allocates/fills a
 * buffer, handles refcounting, and sets *field_0C = 0x2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_00617920(int param);
extern void * __cdecl FUN_006f3c80(int size, int flags);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_0051f770(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     ecx, dword ptr [esp + 0x4]   ; param1
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ecx + 0x8]   ; field_08
        push    ebp
        mov     ebp, dword ptr [ecx + 0xc]   ; field_0C
        mov     ecx, dword ptr [ecx + 0x4]   ; field_04
        mov     edx, dword ptr [ecx]          ; *field_04
        push    esi
        push    edi
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00617920

        mov     esi, eax                      ; result from FUN_00617920

        ; Check if buffer at *field_08 is null
        cmp     dword ptr [ebx], 0x0
        jnz     l_have_buffer
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     dword ptr [ebx], eax

    l_have_buffer:
        mov     eax, dword ptr [esi + 0x10]   ; name source
        test    eax, eax
        jz      l_use_default

        ; Get name string from resolved struct
        mov     edx, dword ptr [eax + 0x10]
        test    edx, edx
        jz      l_copy_empty
        inc     byte ptr [edx - 0x1]          ; refcount++

    l_copy_empty:
        ; strlen of name string
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx]          ; dest buffer
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep movsb
        jz      l_set_result

        ; Decrement refcount
        mov     cl, byte ptr [edx - 0x1]
        lea     eax, [edx - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_set_result
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        mov     dword ptr [ebp], 0x2c
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0x8

    l_use_default:
        ; Copy default string " " (0x76cb8c)
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76cb8c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

    l_set_result:
        pop     edi
        pop     esi
        mov     dword ptr [ebp], 0x2c
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }


}
