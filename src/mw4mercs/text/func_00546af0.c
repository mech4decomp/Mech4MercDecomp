/*
 * FUN_00546af0 (340 B) — __thiscall method with 2 stack params.
 * Checks availability flags and dispatches.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_004cdfa0(int a);
extern void __stdcall FUN_004ce190(int a, int b, int c, int d);
extern void __stdcall FUN_0053cbf0(int a, int b);

__declspec(naked) void __fastcall FUN_00546af0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00546c44;
extern int DAT_007dd510;
__asm {
mov     edx, dword ptr [esp + 8]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, esi
        shl     eax, 7
        add     eax, esi
        shl     eax, 3
        push    edi
        mov     edi, ecx
        sub     eax, esi
        mov     cl, byte ptr [edi + eax * 8 + 0x3544]
        test    cl, cl
        lea     eax, [edi + eax * 8 + 0x3544]
        mov     dword ptr [esp + 0xc], eax
        jz      l_check_flag
        cmp     edx, 0x34
        jz      l_check_flag
        pop     edi
        mov     al, 1
        pop     esi
        ret     8

l_check_flag:
        mov     al, byte ptr [edi + 0x16]
        push    ebx
        sub     edx, 0xa
        xor     bl, bl
        test    al, al
        push    ebp
        jz      l_no_flag

        mov     eax, edx
        shl     eax, 5
        mov     ecx, dword ptr [eax + 0x7dd6a8]
        xor     ebp, ebp
        test    ecx, ecx
        jnz     l_after_init_check
        jmp     l_set_bl

l_no_flag:
        mov     eax, edx
        shl     eax, 5
        mov     ecx, dword ptr [eax + 0x7dd6ac]
        test    ecx, ecx
        mov     ebp, 1
        jnz     l_after_init_check

l_set_bl:
        mov     bl, 1

l_after_init_check:
        mov     ecx, dword ptr [edi + 0x4c]
        mov     ecx, dword ptr [ecx + 0x14]
        add     ecx, -2
        cmp     ecx, 5
        ja      l_switch_end

        jmp     dword ptr [ecx*4 + DAT_00546c44]

        /* case 0 (original 2) */
        mov     ecx, dword ptr [eax + 0x7dd6b0]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

        /* case 1 (original 3) */
        mov     ecx, dword ptr [eax + 0x7dd6b4]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

        /* case 2 (original 4) */
        mov     ecx, dword ptr [eax + 0x7dd6b8]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

        /* case 3 (original 5) */
        mov     ecx, dword ptr [eax + 0x7dd6bc]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

        /* case 4 (original 6) */
        mov     ecx, dword ptr [eax + 0x7dd6c0]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

        /* case 5 (original 7) */
        mov     ecx, dword ptr [eax + 0x7dd6c4]
        test    ecx, ecx
        jnz     l_switch_end
        mov     bl, 1
        jmp     l_after_switch

l_switch_end:
        test    bl, bl
        jz      l_return_false

l_after_switch:
        lea     edx, [ebp + edx * 2]
        mov     eax, dword ptr [edx*4 + DAT_007dd510]
        cmp     eax, 1
        jz      l_return_false
        cmp     eax, 2
        jnz     l_return_false

        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      l_return_false

        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov ebp, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esp + 0x14]
        push    1
        push    0
        mov     byte ptr [ecx], 1
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x14]
        push    0x1c
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190

        push    0
        push    esi
        mov     ecx, edi
        call    FUN_0053cbf0

l_return_false:
        pop     ebp
        mov     al, bl
        pop     ebx
        pop     edi
        pop     esi
        ret     8
    }


}
