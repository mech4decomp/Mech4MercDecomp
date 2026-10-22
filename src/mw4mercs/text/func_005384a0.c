/* FUN_005384a0 - 295 bytes */
#include <windows.h>

extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007db094;
extern double DAT_0077b658;
extern double DAT_007db8c0;

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005446c0(void);

__declspec(naked) void FUN_005384a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x08
        mov     al, [ecx + 0x17]
        test    al, al
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      label_epilogue
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, [eax]
        mov     esi, dword ptr [DAT_007dab40]
        mov     al, [ecx + 0x16]
        xor     edx, esi
        mov     ebx, [edx + 0x0c]
        xor     ebx, 0x85739531
        test    al, al
        jz      label_no_16
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        xor     esi, esi
        mov     edi, 0x7db8c0
        lea     ebp, [ebx + 0x3543]
label_loop:
        mov     al, [ebp - 0x0b]
        test    al, al
        jz      label_loop_next
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, [ecx + 0x28]
        cmp     esi, eax
        jz      label_loop_next
        cmp     dword ptr [edi], 0
        jnz     label_check_time
        cmp     dword ptr [edi + 4], 0xbff00000
        jz      label_check_active
label_check_time:
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [edi]
        fcomp   qword ptr [DAT_0077b658]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_check_active
        push    1
        push    esi
        mov     ecx, ebx
        call    FUN_005446c0
label_check_active:
        cmp     byte ptr [ebp], 0
        jz      label_loop_next
        push    1
        push    esi
        mov     ecx, ebx
        call    FUN_005446c0
label_loop_next:
        add     edi, 8
        inc     esi
        add     ebp, 0x2038
        cmp     edi, 0x7dc0b8
        jl      label_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
label_no_16:
        mov     eax, dword ptr [DAT_007db094]
        test    eax, eax
        jz      label_epilogue
        mov     al, [eax + 0x28]
        mov     edx, eax
        and     edx, 0xff
        /* __emit: MSVC6 encodes [edx*8+abs] with EBX base (8D 8C D3) instead of no-base disp32 (8D 0C D5) */
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD5
        __asm _emit 0xC0
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        cmp     dword ptr [ecx], 0
        jnz     label_check_time2
        cmp     dword ptr [ecx + 4], 0xbff00000
        jz      label_epilogue
label_check_time2:
        push    0
        mov     [esp + 0x14], al
        call    FUN_00707e70
        mov     eax, [esp + 0x10]
        and     eax, 0xff
        /* __emit: MSVC6 encodes [eax*8+abs] with EBX base (DC A4 C3) instead of no-base disp32 (DC 24 C5) */
        __asm _emit 0xDC
        __asm _emit 0x24
        __asm _emit 0xC5
        __asm _emit 0xC0
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        fcomp   qword ptr [DAT_0077b658]
        fnstsw  ax
        test    ah, 0x41
        jnz     label_epilogue
        mov     edx, [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x28]
        mov     eax, [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax + 0x2c]
label_epilogue:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
