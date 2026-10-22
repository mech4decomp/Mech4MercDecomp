/*
 * FUN_00526600 (195 B) — String copy/refcount helper.
 *
 * Copies a string from a struct, manages refcount, allocates buffer.
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* Function declarations */
extern int __stdcall FUN_00416b60(void *param);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_004084e0(void *ptr);

/* Data symbols */
extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */

__declspec(naked) void FUN_00526600(void)
{
    __asm {
        push    ecx                     ; allocate local var
        mov     eax, dword ptr [esp + 0x8]  ; param_1
        mov     ecx, dword ptr [DAT_007dab44]   ; mov ecx, [0x007dab44]
        push    ebp
        mov     ebp, dword ptr [DAT_007dab40]   ; mov ebp, [0x007dab40]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [ecx]
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x44]
        lea     edx, [esp + 0x10]
        xor     ecx, 0x85739531
        push    edx
        add     ecx, 0x40
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00416b60
        mov     ebp, eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
    skip_free:
        push    ebx
        push    edi
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov     dword ptr [esi], ebx
        jz      strlen_start
        inc     byte ptr [edx - 0x1]
    strlen_start:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    edx, edx
        rep     movsb
        pop     edi
        pop     ebx
        jz      done_refcount
        mov     cl, byte ptr [edx - 0x1]
        lea     eax, [edx - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done_refcount
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    done_refcount:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 0x20]
        pop     esi
        mov     dword ptr [eax], edx
        mov     eax, 0x1
        pop     ebp
        pop     ecx
        ret     0x8
    }
}
