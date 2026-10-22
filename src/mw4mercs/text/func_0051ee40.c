/*
 * FUN_0051ee40 (140 B) — Looks up a string by ID, allocates a buffer,
 * copies the string, and stores it in a caller-provided pointer slot.
 *
 * __stdcall, RET 0xC (3 params). param_3 is a pointer to an array of
 * pointers (int **). Checks **param_3 is in [0, 0xFF], then uses
 * FUN_004cdfa0 to resolve the ID, frees old buffer via FUN_006f4230,
 * allocates 0x100 bytes via FUN_006f3c80, copies string from
 * resolved+0x30 into buffer, stores in *param_3[1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_004cdfa0(int id);
extern void __cdecl FUN_006f4230(void *ptr);
extern void * __cdecl FUN_006f3c80(int size, int flags);

__declspec(naked) int __stdcall FUN_0051ee40(int param1, int param2, int **param3)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x10]  ; param3

        ; Check **param3
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax]
        cmp     ecx, 0xff
        jle     l_check_low
        xor     eax, eax
        pop     esi
        ret     0xc

    l_check_low:
        test    ecx, ecx
        jge     l_valid
        xor     eax, eax
        pop     esi
        ret     0xc

    l_valid:
        ; XOR two globals to get a pointer
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov edx, dword ptr [DAT_007dab40]
        push    edi
        xor     eax, edx

        ; Call FUN_004cdfa0(id)
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0

        ; Free old buffer if non-null
        mov     esi, dword ptr [esi + 0x4]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_006f4230

    l_alloc:
        ; Allocate 0x100 bytes
        push    0x0
        push    0x100
        call    FUN_006f3c80

        ; strlen of string at resolved+0x30
        mov     edi, dword ptr [edi + 0x30]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx

        ; Copy string into allocated buffer
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb

        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0xc
    }


}
