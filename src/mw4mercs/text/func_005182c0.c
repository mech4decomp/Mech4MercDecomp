/*
 * FUN_005182c0 (617 B) — String table entry insertion helper.
 *
 * __thiscall (ECX = this). Allocates two 0x100-byte buffers, copies
 * string data between them based on a type parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00518530(void);
extern void * __stdcall FUN_004cdfa0(int param);
extern void * __stdcall FUN_004084d0(int size);

__declspec(naked) void __fastcall FUN_005182c0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x104
        push    ebx
        mov     ebx, ecx

        mov     eax, dword ptr [ebx + 0x409ac]
        cmp     eax, dword ptr [ebx + 0x409b0]
        push    ebp
        jle     l_skip_grow

        mov     ecx, ebx
        call    FUN_00518530

    l_skip_grow:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ebp, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esp + 0x110]
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x14]
        and     edx, 0xff
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     ebp, eax
        test    ebp, ebp
        jz      l_done

        push    esi
        push    edi

        push    0x100
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx + 0x409ac]
        mov     edx, dword ptr [ebx + 0x409b8]
        push    0x100
        mov     dword ptr [edx + ecx*4], eax
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx + 0x409ac]
        mov     edx, dword ptr [ebx + 0x409b4]
        mov     dword ptr [edx + ecx*4], eax

        mov     al, byte ptr [esp + 0x124]
        add     esp, 8
        test    al, al
        jz      l_case0
        cmp     al, 8
        jnz     l_case_other

        ; case 8: load string from obfuscated vtable, copy to buffer1, then copy from buffer2 to buffer2
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x2e8
        call    dword ptr [edx + 0x34]

        ; strlen of result
        or      ecx, 0xffffffff
        mov     edx, dword ptr [ebx + 0x409ac]
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp + 0x124]
        not     ecx
        lea     edi, [ecx + eax]

        ; strlen of param_4
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ebx + 0x409b8]
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edx + edi*4]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        ; load another string from obfuscated vtable
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x2e5
        call    dword ptr [eax + 0x34]

        ; strlen, copy to stack buffer
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        ; strlen of [ebp+0x30]
        mov     edi, dword ptr [ebp + 0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx

        ; strlen of stack buffer
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb

        mov     edx, dword ptr [ebx + 0x409ac]
        mov     ecx, ebp
        dec     edi
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [ebx + 0x409b4]
        and     ecx, 3
        rep     movsb
        lea     edi, [esp + 0x14]
        jmp     l_final_copy

    l_case_other:
        ; param_4 is a string pointer
        mov     edi, dword ptr [esp + 0x124]
        mov     edx, dword ptr [ebx + 0x409ac]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [ebx + 0x409b8]
        mov     edi, dword ptr [edx + edi*4]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        ; strlen of [ebp+0x30]
        mov     edi, dword ptr [ebp + 0x30]
        mov     edx, dword ptr [ebx + 0x409ac]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ebx + 0x409b4]
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edx + edi*4]
        mov     eax, ecx
        jmp     l_final_copy2

    l_case0:
        mov     edi, dword ptr [esp + 0x124]
        mov     edx, dword ptr [ebx + 0x409ac]
        mov     ebp, dword ptr [ebx + 0x409b8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp + edx*4]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        mov     edx, dword ptr [ebx + 0x409ac]
        mov     ebp, dword ptr [ebx + 0x409b4]
        mov     edi, 0x76b768

    l_final_copy:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp + edx*4]
        mov     eax, ecx

    l_final_copy2:
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        mov     eax, dword ptr [ebx + 0x409ac]
        inc     eax
        pop     edi
        mov     dword ptr [ebx + 0x409ac], eax
        pop     esi

    l_done:
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret     0x10
    }


}
