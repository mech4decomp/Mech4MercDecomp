/*
 * FUN_005287f0 (228 B) — Control mapping data query helper (variant 4).
 *
 * __stdcall. Reads a global pointer, XOR-decrypts it, calls helper functions,
 * compares result fields against reference values, and either zeroes output
 * or allocates+populates a struct via virtual method calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412570(const char *str);
extern int __stdcall FUN_006140c0(int a);
extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_004d1f80(int *a, int b);

__declspec(naked) int __stdcall FUN_005287f0(int param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [eax + 4]
        push    edi
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x0c]
        push    ecx
        xor     eax, 0x85739531
        mov     edi, dword ptr [eax + 0x84]
        mov     ecx, esp
        push    0x77a448
        call    FUN_00412570
        mov     ecx, edi
        call    FUN_006140c0
        mov     cx, word ptr [eax + 0x10]
        cmp cx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [eax + 0x12]
        mov     word ptr [esp + 0x0c], cx
        mov     word ptr [esp + 0x0e], ax
        jnz     l_alloc_path
        cmp ax, word ptr [DAT_007db0ae]
        jz      l_zero_output

    l_alloc_path:
        push    0x44
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        push    1
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_004d1f80
        mov     edi, eax
        jmp     l_got_obj

    l_alloc_fail:
        xor     edi, edi

    l_got_obj:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 4]
        test    edi, edi
        mov     ecx, dword ptr [eax + 0x134]
        mov     edx, dword ptr [eax + 0x140]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x138]
        mov     dword ptr [esi + 4], edx
        mov     edx, dword ptr [eax + 0x13c]
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [esi + 0x0c], edx
        jz      l_done
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     eax, 1
        pop     edi
        pop     esi
        ret     8

    l_zero_output:
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0x0c], 0

    l_done:
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    }


}
