/* FUN_005386c0 - 513 bytes */
#include <windows.h>

extern int DAT_007b8810;
extern int DAT_007dab40;
extern int DAT_007dab44;
extern char DAT_007dc694;
extern short DAT_007dc696;
extern int DAT_007db0a0;
extern int DAT_007db094;
extern int DAT_007db0b0;

extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00544620(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004cfb20(void);
extern void __cdecl FUN_004d0600(void);
extern void __cdecl FUN_004cfb80(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0053ab70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0053beb0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_005386c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]
        push    0
        push    1
        mov     [ebp - 4], ecx
        push    edi
        lea     ecx, [ebp - 0x84]
        call    FUN_0040dca0
        mov     eax, dword ptr [DAT_007b8810]
        push    eax
        push    0x0c
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      label_alloc_fail
        lea     ecx, [ebp - 0x40]
        push    ecx
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], 0x76cd64
        mov     ebx, esi
        jmp     label_check_ptr
label_alloc_fail:
        xor     ebx, ebx
label_check_ptr:
        mov     eax, [ebx + 8]
        test    eax, eax
        jz      label_xor_esi
        mov     ecx, [eax]
        test    ecx, ecx
        mov     edx, [eax + 4]
        mov     [ebx + 8], edx
        mov     esi, ecx
        jnz     label_have_item
label_push_edi:
        push    edi
        push    0x77b660
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      label_have_item
        int     3
label_have_item:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, [esi + 0x14]
        xor     edx, ecx
        mov     ecx, [edx + 0x0c]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00544620
label_loop:
        mov     eax, [ebx + 8]
        test    eax, eax
        jz      label_done
        mov     edi, [eax]
        test    edi, edi
        mov     eax, [eax + 4]
        mov     [ebx + 8], eax
        jz      label_done
        push    0
        lea     ecx, [ebp - 0x34]
        call    FUN_0041ee70
        push    1
        lea     ecx, [ebp + 0x0b]
        push    ecx
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 8], 0
        mov     byte ptr [ebp + 0x0b], 0x5f
        call    FUN_0041f030
        push    1
        lea     edx, [ebp - 8]
        push    edx
        lea     ecx, [ebp - 0x34]
        call    FUN_0041f030
        push    1
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0041f030
        push    1
        push    0x77a8cc
        lea     ecx, [ebp - 0x34]
        call    FUN_0041f030
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      label_alloc2_fail
        mov     ecx, esi
        call    FUN_004cfb20
        mov     dword ptr [esi], 0x76c758
        mov     ecx, esi
        jmp     label_got_alloc2
label_xor_esi:
        xor     esi, esi
        jmp     label_push_edi
label_alloc2_fail:
        xor     ecx, ecx
label_got_alloc2:
        mov     dl, byte ptr [DAT_007dc694]
        mov     ax, word ptr [DAT_007dc696]
        mov     [ebp - 0x0c], dl
        lea     edx, [ebp - 0x0c]
        push    edx
        mov     [ebp - 0x0a], ax
        push    edi
        lea     eax, [ebp - 0x34]
        push    eax
        mov     dword ptr [DAT_007db0a0], ecx
        call    FUN_004d0600
        mov     eax, [eax]
        mov     ecx, [ebp - 0x20]
        add     ecx, eax
        cmp     ecx, [ebp - 0x1c]
        mov     [ebp - 0x20], ecx
        jbe     label_no_overflow
        mov     [ebp - 0x1c], ecx
label_no_overflow:
        mov     edx, [ebp - 0x34]
        push    0
        lea     ecx, [ebp - 0x34]
        call    dword ptr [edx + 0x0c]
        mov     esi, dword ptr [DAT_007db0a0]
        test    esi, esi
        mov     dword ptr [ebp - 0x2c], 0xffffffec
        jz      label_skip_free
        mov     ecx, esi
        call    FUN_004cfb80
        push    esi
        call    FUN_004084e0
        add     esp, 4
label_skip_free:
        mov     edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, [edx + 0x28]
        lea     eax, [ebp - 0x34]
        push    eax
        mov     dword ptr [DAT_007db0a0], 0
        push    ecx
        mov     ecx, [ebp - 4]
        call    FUN_0053ab70
        lea     ecx, [ebp - 0x34]
        call    FUN_0041ef60
        jmp     label_loop
label_done:
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        mov     ecx, [ebp - 4]
        push    0
        push    eax
        call    FUN_0053beb0
        push    ebx
        mov     dword ptr [DAT_007db0b0], 0
        call    FUN_004084e0
        add     esp, 4
        lea     ecx, [ebp - 0x84]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
