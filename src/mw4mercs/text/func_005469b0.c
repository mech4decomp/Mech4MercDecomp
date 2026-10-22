/*
 * FUN_005469b0 (312 B) — __cdecl function. Loads a version/type record
 * from a file path lookup.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00412780(int ptr);
extern void * __cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00416bc0(int ptr);
extern int __fastcall FUN_00416cc0(void);
extern void __stdcall FUN_004128e0(void);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void FUN_005469b0(void)
{
    

extern int DAT_007dd268;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007dd268]
        test    eax, eax
        push    ebx
        jz      l_exit

        push    ebp
        push    esi
        push    edi

        push    0x76b768
        lea     ecx, [eax + 0x40978]
        call    FUN_00412780

        mov eax, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [eax]
        mov esi, dword ptr [DAT_007dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc_fail

        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        mov     ebx, esi
        jmp     l_after_alloc

l_alloc_fail:
        xor     ebx, ebx

l_after_alloc:
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup

l_loop_start:
        mov     eax, dword ptr [edi + 0x1c]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_skip_refcnt
        inc     byte ptr [eax - 1]
l_skip_refcnt:
        lea     ecx, [esp + 0x10]
        call    FUN_004128e0

        mov     ebp, dword ptr [esp + 0x10]
        mov     esi, 0x77b890
        mov     eax, ebp

l_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     l_strcmp_done
        test    cl, cl
        jz      l_strcmp_equal
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     l_strcmp_done
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_strcmp_loop

l_strcmp_equal:
        xor     eax, eax
        jmp     l_strcmp_result

l_strcmp_done:
        sbb     eax, eax
        sbb     eax, -1

l_strcmp_result:
        test    eax, eax
        jz      l_found_match

        test    ebp, ebp
        jz      l_next_iter
        mov     cl, byte ptr [ebp - 1]
        lea     eax, [ebp - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_next_iter
        push    eax
        call    FUN_004084e0
        add     esp, 4

l_next_iter:
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     l_loop_start
        jmp     l_cleanup

l_found_match:
        mov     ax, word ptr [edi + 0x10]
        mov edx, dword ptr [DAT_007dd268]
        mov     cx, word ptr [edi + 0x12]
        mov     word ptr [edx + 0x4097c], ax
        mov     word ptr [edx + 0x4097e], cx

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_cleanup
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_cleanup
        push    eax
        call    FUN_004084e0
        add     esp, 4

l_cleanup:
        test    ebx, ebx
        pop     edi
        pop     esi
        pop     ebp
        jz      l_exit
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax]

l_exit:
        pop     ebx
        pop     ecx
        ret
    }


}
