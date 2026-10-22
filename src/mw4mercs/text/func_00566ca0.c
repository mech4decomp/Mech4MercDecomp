/* Auto-generated inline asm transcription for FUN_00566ca0 */
#include <windows.h>

__declspec(naked) void FUN_00566ca0(int param_1, void *param_2, char param_3)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fd3d(void);
extern int DAT_007f25c0;
extern void __cdecl FUN_1004151c7(void);
extern void __cdecl FUN_005806b0(void);
extern void __cdecl FUN_10041fcaa(void);
extern int DAT_007f25b8;
extern void __cdecl FUN_100415142(void);
extern void __cdecl FUN_100415105(void);
extern void __cdecl FUN_10040832b(void);
extern void __cdecl FUN_005807e9(void);
extern void __cdecl FUN_1004082d6(void);
__asm {
mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x14
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jl      L_exit
        cmp     eax, 0x8
        jg      L_exit
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edi, dword ptr [ecx + 0x10]
        xor     edi, 0x85739531
        mov     eax, dword ptr [edi + 0x1c]
        test    eax, eax
        jle     L_second_loop
        mov     ebp, dword ptr [edi + 0x18]
        add     ebp, 0x14
        mov     ebx, eax
L_first_loop:
        mov     ecx, dword ptr [ebp]
        call FUN_10041fd3d
        mov     esi, eax
        test    esi, esi
        jz      L_first_next
        cmp     byte ptr [esp + 0x30], 0x1
        jz      L_first_check_type
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_first_next
L_first_check_type:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_1004151c7
        cmp     al, 0x1
        jnz     L_first_next
        mov     eax, dword ptr [esi + 0x4cc]
        cmp     eax, 0x8
        jz      L_first_next
        mov     ecx, dword ptr [esp + 0x28]
        test    ecx, ecx
        jz      L_first_store
        dec     ecx
        cmp     eax, ecx
        jnz     L_first_next
L_first_store:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x18], esi
        jz      L_first_grow
        test    eax, eax
        jz      L_first_store2
        mov     dword ptr [eax], esi
L_first_store2:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_first_next
L_first_grow:
        push    0x1
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call FUN_005806b0
L_first_next:
        add     ebp, 0x1c
        dec     ebx
        jnz     L_first_loop

L_second_loop:
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jle     L_exit
        mov     edi, dword ptr [edi + 0x28]
        add     edi, 0x14
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], eax
L_second_iter:
        mov     ecx, dword ptr [edi]
        call FUN_10041fcaa
        mov     esi, eax
        test    esi, esi
        jz      L_second_next
        mov eax, dword ptr [DAT_007f25b8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415142
        cmp     al, 0x1
        jnz     L_second_next
        mov     ebp, dword ptr [esi + 0x170]
        test    ebp, ebp
        mov     dword ptr [esp + 0x20], ebp
        jz      L_second_next
        cmp     byte ptr [esp + 0x30], 0x1
        jz      L_second_check_type
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_second_next
L_second_check_type:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call FUN_100415105
        cmp     al, 0x1
        jnz     L_second_next
        mov     eax, dword ptr [ebp + 0x4cc]
        cmp     eax, 0x8
        jz      L_second_next
        mov     ecx, dword ptr [esp + 0x28]
        test    ecx, ecx
        jz      L_second_store
        dec     ecx
        cmp     eax, ecx
        jnz     L_second_next
L_second_store:
        mov     eax, dword ptr [esp + 0x2c]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, dword ptr [eax + 0x8]
        jz      L_second_grow
        test    esi, esi
        jz      L_second_store2
        mov     dword ptr [esi], ebp
L_second_store2:
        add     esi, 0x4
        mov     dword ptr [eax + 0x4], esi
        jmp     L_second_next
L_second_grow:
        mov     ebx, dword ptr [eax]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x10]
        jc      L_grow_sel
        lea     ecx, [esp + 0x1c]
L_grow_sel:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_grow_zero
        shl     ecx, 0x2
        push    ecx
        call FUN_10040832b
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_grow_copy
L_grow_zero:
        mov     dword ptr [esp + 0x10], 0x0
L_grow_copy:
        cmp     ebx, esi
        mov     edi, dword ptr [esp + 0x10]
        jz      L_grow_append
        mov     ebp, ebx
L_grow_loop:
        push    ebp
        push    edi
        call FUN_005807e9
        add     ebp, 0x4
        add     esp, 0x8
        add     edi, 0x4
        cmp     ebp, esi
        jnz     L_grow_loop
        mov     ebp, dword ptr [esp + 0x20]
L_grow_append:
        test    edi, edi
        jz      L_grow_append2
        mov     dword ptr [edi], ebp
L_grow_append2:
        add     edi, 0x4
        cmp     esi, esi
        jz      L_grow_free
        mov     eax, esi
        sub     eax, edi
L_grow_shift:
        test    edi, edi
        jz      L_grow_shift2
        mov     edx, dword ptr [eax + edi]
        mov     dword ptr [edi], edx
L_grow_shift2:
        add     edi, 0x4
        lea     ecx, [eax + edi]
        cmp     ecx, esi
        jnz     L_grow_shift
L_grow_free:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_grow_update
        push    ebx
        call FUN_1004082d6
        add     esp, 0x4
L_grow_update:
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
        lea     ecx, [ecx + edx*0x4]
        mov     dword ptr [eax + 0x4], edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
L_second_next:
        mov     eax, dword ptr [esp + 0x18]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], eax
        jnz     L_second_iter

L_exit:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }


}
