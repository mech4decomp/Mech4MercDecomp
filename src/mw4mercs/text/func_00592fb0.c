/*
 * FUN_00592fb0 (0x00592FB0)
 * Decompiled from MW4Mercs.exe
 * __thiscall destructor.
 * Destroys sub-objects at offsets 0x10/0x18/0x20/0x28/0x30/0x38,
 * decrements refcounts at offsets 0x88/0x8C/0x90/0x94/0x98,
 * then calls base destructor.
 */

#include "mw4/common.h"

/* Forward declarations */
void __cdecl sub_4179F0(void);   /* __thiscall: linked list node release */
void __cdecl sub_417980(void);   /* __thiscall: linked list clear */
void __cdecl sub_4084E0(void);   /* __cdecl: free */
void __cdecl sub_415380(void);   /* __thiscall: base destructor */

__declspec(naked) void FUN_00592fb0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x10]
        mov ecx, edi
        mov dword ptr [esi], 0x782ab0
        call sub_4179F0

        lea ebx, [esi + 0x18]
        mov ecx, ebx
        call sub_4179F0

        lea ebp, [esi + 0x20]
        mov ecx, ebp
        call sub_4179F0

        lea ecx, [esi + 0x30]
        call sub_4179F0

        lea ecx, [esi + 0x38]
        call sub_4179F0

        lea ecx, [esi + 0x28]
        call sub_4179F0

        /* Refcounted pointer at [esi+0x98] */
        mov eax, dword ptr [esi + 0x98]
        test eax, eax
        je  skip_98
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_98
        push eax
        call sub_4084E0
        add esp, 4
skip_98:

        /* Refcounted pointer at [esi+0x94] */
        mov eax, dword ptr [esi + 0x94]
        test eax, eax
        je  skip_94
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_94
        push eax
        call sub_4084E0
        add esp, 4
skip_94:

        /* Refcounted pointer at [esi+0x90] */
        mov eax, dword ptr [esi + 0x90]
        test eax, eax
        je  skip_90
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_90
        push eax
        call sub_4084E0
        add esp, 4
skip_90:

        /* Refcounted pointer at [esi+0x8c] */
        mov eax, dword ptr [esi + 0x8c]
        test eax, eax
        je  skip_8c
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_8c
        push eax
        call sub_4084E0
        add esp, 4
skip_8c:

        /* Refcounted pointer at [esi+0x88] */
        mov eax, dword ptr [esi + 0x88]
        test eax, eax
        je  skip_88
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_88
        push eax
        call sub_4084E0
        add esp, 4
skip_88:

        /* Clear sub-objects in reverse order */
        lea ecx, [esi + 0x38]
        call sub_417980

        lea ecx, [esi + 0x30]
        call sub_417980

        lea ecx, [esi + 0x28]
        call sub_417980

        mov ecx, ebp
        call sub_417980

        mov ecx, ebx
        call sub_417980

        mov ecx, edi
        call sub_417980

        /* Call base destructor */
        mov ecx, esi
        call sub_415380

        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
