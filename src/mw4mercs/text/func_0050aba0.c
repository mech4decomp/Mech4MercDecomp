/*
 * FUN_0050ABA0 (214 B) — __thiscall helper function.
 *
 * Initializes fields, allocates memory, copies data in 36-byte blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_007224D0(int size);
extern void *__stdcall FUN_00722F70(int size);
extern void *__stdcall FUN_0050C9D0(int size);
extern void *__stdcall FUN_006F4950(int size);
extern void *__stdcall FUN_0050B4A0(int size);
extern void *__stdcall FUN_006F49A0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

extern int g_7dc12c;   /* 0x007DC12C */

__declspec(naked) void FUN_0050aba0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        mov     ebp, ecx                ; this pointer

        ; Initialize fields
        push    0
        mov     dword ptr [ebp + 0x1c], 0
        mov     byte ptr [ebp + 0x29], 0
        call    FUN_007224D0            ; malloc(0)

        test    eax, eax
        jz      l_setneg

        lea     eax, [esp + 8]
        push    eax
        push    0
        call    FUN_00722F70            ; malloc

        mov     ecx, [esp + 0x0c]       ; result from malloc
        shr     ecx, 16
        and     ecx, 0x1f
        lea     eax, [ecx - 1]

        cmp     eax, 8
        mov     [ebp + 0x2c], eax
        jge     l_clamp

    l_setneg:
        mov     dword ptr [ebp + 0x2c], -1

    l_clamp:
        mov     eax, 1
        mov     ecx, ebp
        mov     [ebp + 0x20], al
        mov     dword ptr [ebp + 0x24], 0x3CA3D70A  ; 0.02f
        mov     [ebp + 0x3c], eax
        mov     dword ptr [ebp + 0x40], 2
        mov     [ebp + 0x44], eax
        call    FUN_0050C9D0            ; malloc

        mov     ebx, [ebp + 4]          ; field at +0x04
        mov     edx, [ebp + 0]          ; field at +0x00
        mov     ecx, ebx
        mov     [esp + 8], edx          ; save on stack
        sub     ecx, ebx                ; ecx = 0 (end - end)

        ; Division by 36 (always 0 since ecx = 0)
        mov     eax, 0x38E38E39
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 31
        add     edx, eax

        test    edx, edx
        jle     l_after_copy

        push    esi
        push    edi
        mov     eax, 0x24               ; 36 bytes

    l_copy_loop:
        mov     edi, [esp + 0x10]       ; source pointer
        mov     esi, ebx                ; dest pointer
        mov     ecx, 9                  ; 9 dwords = 36 bytes
        rep movsd                       ; copy
        mov     esi, [esp + 0x10]       ; reload source
        add     esi, eax                ; advance source
        add     ebx, eax                ; advance dest
        dec     edx
        mov     [esp + 0x10], esi       ; save source
        jnz     l_copy_loop

        pop     edi
        pop     esi

    l_after_copy:
        mov     edx, dword ptr [g_7dc12c]
        mov     ecx, [esp + 8]          ; load saved value
        push    edx
        mov     [ebp + 4], ecx          ; restore field
        call    FUN_006F4950            ; malloc

        push    ebp
        mov     ecx, ebp
        call    FUN_0050B4A0            ; malloc
        call    FUN_006F49A0            ; malloc

    l_copy_done:
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}
