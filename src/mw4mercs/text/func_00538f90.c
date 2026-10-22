/* FUN_00538f90 - 452 bytes */
#include <windows.h>

extern void __cdecl FUN_0041a070(void);

__declspec(naked) void FUN_00538f90(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, ecx
        mov     al, [ebx + 0x16]
        test    al, al
        jz      label_do_work
        mov     eax, [ebx + 0x50]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jnz     label_skip_work
label_do_work:
        push    ebp
        push    esi
        mov     esi, [esp + 0x30]
        mov     edx, [esi]
        push    edi
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0
        call    dword ptr [edx + 0x20]
        mov     al, [esp + 0x10]
        xor     edi, edi
        test    al, al
        jbe     label_loop1_done
label_loop1:
        mov     edx, [esi]
        push    1
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x3c], 0
        call    dword ptr [edx + 0x20]
        mov     eax, [esp + 0x34]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [ebx + ecx * 8]
        mov     cl, [eax + 0x3538]
        test    cl, cl
        jz      label_loop1_cont
        mov     eax, [eax + 0x3584]
        test    eax, eax
        jz      label_loop1_cont
        mov     eax, [eax + 0x170]
        test    eax, eax
        jz      label_loop1_cont
        mov     edx, [esi]
        push    4
        add     eax, 0x4c8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
label_loop1_cont:
        mov     eax, [esp + 0x10]
        inc     edi
        and     eax, 0xff
        cmp     edi, eax
        jl      label_loop1
label_loop1_done:
        mov     edx, [esi]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0
        call    dword ptr [edx + 0x20]
        mov     al, [esp + 0x10]
        xor     edi, edi
        test    al, al
        jbe     label_loop2_done
label_loop2:
        mov     edx, [esi]
        push    1
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x3c], 0
        call    dword ptr [edx + 0x20]
        mov     ecx, [esp + 0x34]
        and     ecx, 0xff
        imul    ecx, ecx, 0x22ac
        lea     eax, [ecx + ebx]
        mov     cl, [eax + 0x205f34]
        test    cl, cl
        jz      label_loop2_cont
        mov     eax, [eax + 0x205d30]
        test    eax, eax
        jz      label_loop2_cont
        mov     edx, [esi]
        push    4
        add     eax, 0x4c8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
label_loop2_cont:
        mov     eax, [esp + 0x10]
        inc     edi
        and     eax, 0xff
        cmp     edi, eax
        jl      label_loop2
label_loop2_done:
        mov     edx, [esi]
        push    4
        lea     eax, [ebx + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     ebp, [ebx + 0x1c]
        mov     ecx, 0x0c
        mov     esi, 0x7b9460
        mov     edi, ebp
        rep movsd
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebp
        call    FUN_0041a070
        mov     edx, [esp + 0x14]
        mov     eax, [esp + 0x18]
        mov     ecx, [esp + 0x1c]
        mov     [ebp + 0x0c], edx
        pop     edi
        mov     [ebp + 0x1c], eax
        pop     esi
        mov     [ebp + 0x2c], ecx
        pop     ebp
label_skip_work:
        mov     ebx, [ebx + 0x4c]
        mov     edx, [ebx]
        push    0
        push    4
        mov     ecx, ebx
        call    dword ptr [edx + 4]
        pop     ebx
        add     esp, 0x1c
        ret     8
    }
}
