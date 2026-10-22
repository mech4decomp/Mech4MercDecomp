/* FUN_00538b20 - 1089 bytes */
#include <windows.h>

extern int DAT_007db094;
extern int DAT_007dab40;
extern int DAT_007dab44;

extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_0053cbf0(void);
extern void __cdecl FUN_004d6490(void);
extern void __cdecl FUN_004f3b00(void);
extern void __cdecl FUN_004f3cc0(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_00538f70(void);
extern void __cdecl FUN_00538f90(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_00538b20(void)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    0
        lea     ecx, [esp + 0x8c]
        call    FUN_0041ee70
        mov     ecx, dword ptr [DAT_007db094]
        mov     ebp, [esp + 0xe4]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        cmp     ebp, eax
        jnz     label_else
        mov     edx, [ebx + 0x50]
        mov     eax, [edx + 0x10]
        test    eax, eax
        jz      label_else
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        mov     edx, dword ptr [DAT_007dab40]
        push    1
        push    0
        xor     ecx, edx
        mov     ecx, [ecx + 0x14]
        push    0x2b
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004ce190
        jmp     label_epilogue
label_else:
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        mov     edx, ebp
        shl     edx, 7
        add     edx, ebp
        shl     edx, 3
        sub     edx, ebp
        mov     ecx, [ebx + edx * 8 + 0x3584]
        test    ecx, ecx
        lea     esi, [ebx + edx * 8]
        jnz     label_have_ptr
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x14]
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      label_epilogue
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        push    1
        mov     byte ptr [esi + 0x3544], 1
        mov     esi, dword ptr [DAT_007dab40]
        push    0
        xor     edx, esi
        mov     ecx, [edx + 0x14]
        push    0x1c
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004ce190
        push    0
        push    ebp
        mov     ecx, ebx
        call    FUN_0053cbf0
        jmp     label_epilogue
label_have_ptr:
        mov     ecx, [ecx + 0x16c]
        xor     eax, dword ptr [DAT_007dab40]
        push    ecx
        mov     ecx, [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490
        mov     ecx, 0x0c
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x58]
        rep movsd
        mov     cl, [ebx + 0x17]
        test    cl, cl
        jz      label_no_17
        lea     edx, [esp + 0xb0]
        push    edx
        mov     ecx, eax
        call    FUN_004f3b00
        jmp     label_got_17
label_no_17:
        lea     ecx, [esp + 0xb0]
        push    ecx
        mov     ecx, eax
        call    FUN_004f3cc0
label_got_17:
        mov     esi, eax
        mov     ecx, 0x0c
        lea     edi, [esp + 0x58]
        rep movsd
        mov     edx, [esp + 0x64]
        mov     ecx, [esp + 0x84]
        mov     eax, [esp + 0x74]
        mov     [esp + 0x18], edx
        lea     edx, [esp + 0x58]
        mov     [esp + 0x20], ecx
        push    edx
        lea     ecx, [esp + 0x50]
        mov     [esp + 0x20], eax
        call    FUN_0041acb0
        push    0
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        mov     eax, 1
        mov     dword ptr [esp + 0x14], 0
        mov     [esp + 0x10], eax
label_loop1:
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     dl, [ebx + ecx * 8 + 0x3538]
        test    dl, dl
        lea     ecx, [ebx + ecx * 8]
        jz      label_loop1_next
        mov     ecx, [ecx + 0x3584]
        test    ecx, ecx
        jz      label_loop1_next
        mov     edx, [ecx + 0x170]
        test    edx, edx
        jz      label_loop1_next
        inc     dword ptr [esp + 0x14]
label_loop1_next:
        inc     eax
        cmp     eax, 0xff
        mov     [esp + 0x10], eax
        jl      label_loop1
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, 1
        mov     [esp + 0x10], eax
label_loop2:
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     dl, [ebx + ecx * 8 + 0x3538]
        test    dl, dl
        lea     ecx, [ebx + ecx * 8]
        jz      label_loop2_next
        mov     ecx, [ecx + 0x3584]
        test    ecx, ecx
        jz      label_loop2_next
        mov     edx, [ecx + 0x170]
        test    edx, edx
        jz      label_loop2_next
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, [ebx + ecx * 8 + 0x3584]
        mov     eax, [edx + 0x170]
        push    4
        add     eax, 0x4c8
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, [esp + 0x10]
label_loop2_next:
        inc     eax
        cmp     eax, 0xff
        mov     [esp + 0x10], eax
        jl      label_loop2
        xor     edx, edx
        mov     ecx, 0x18
        mov     [esp + 0x14], edx
        lea     eax, [ebx + 0x205d30]
        mov     [esp + 0x10], ecx
label_loop3:
        cmp     byte ptr [eax + 0x204], 0
        jz      label_loop3_next
        cmp     dword ptr [eax], 0
        jz      label_loop3_next
        inc     edx
label_loop3_next:
        add     eax, 0x22ac
        dec     ecx
        jnz     label_loop3
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     [esp + 0x1c], edx
        call    FUN_0041f030
        xor     ecx, ecx
        mov     [esp + 0x10], ecx
label_loop4:
        mov     edx, ecx
        imul    edx, edx, 0x22ac
        lea     eax, [edx + ebx]
        mov     dl, [eax + 0x205f34]
        test    dl, dl
        jz      label_loop4_next
        mov     edx, [eax + 0x205d30]
        test    edx, edx
        jz      label_loop4_next
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     ecx, [esp + 0x10]
        imul    ecx, ecx, 0x22ac
        mov     edx, [ecx + ebx + 0x205d30]
        push    4
        add     edx, 0x4c8
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     ecx, [esp + 0x10]
label_loop4_next:
        inc     ecx
        cmp     ecx, 0x18
        mov     [esp + 0x10], ecx
        jl      label_loop4
        push    4
        lea     eax, [ebx + 0x18]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     edx, [esp + 0x54]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    4
        lea     eax, [esp + 0x58]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     edx, [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [edx + 0x0c]
        mov     ecx, [esp + 0x18]
        sub     esp, 0x0c
        mov     eax, esp
        mov     dword ptr [esp + 0x38], 0xffffffec
        mov     [eax], ecx
        mov     edx, [esp + 0x28]
        mov     [eax + 4], edx
        mov     ecx, [esp + 0x2c]
        mov     [eax + 8], ecx
        call    FUN_00538f70
        mov     edx, [eax]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     esi, [esp + 0x34]
        mov     eax, [esp + 0x3c]
        xor     edx, ecx
        mov     ecx, [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, [ecx + 0x1814]
        mov     edi, [ecx + ebp * 4 + 0x3c44]
        sub     eax, esi
        add     ecx, 0x3c3c
        shl     eax, 3
        add     edi, eax
        mov     [ecx + ebp * 4 + 8], edi
        add     dword ptr [ecx + 0x0c00], eax
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        cmp     ebp, eax
        jnz     label_log
        lea     edx, [esp + 0x24]
        push    edx
        push    ebp
        mov     ecx, ebx
        call    FUN_00538f90
        jmp     label_cleanup
label_log:
        mov     ecx, [edx]
        push    1
        lea     eax, [esp + 0x28]
        push    eax
        push    0x2b
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004ce190
label_cleanup:
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
label_epilogue:
        lea     ecx, [esp + 0x88]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret     4
    }
}
