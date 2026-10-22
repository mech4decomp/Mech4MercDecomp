/*
 * FUN_0055e5c0 (378 B) ??? __cdecl function, pixel/coordinate clamping and drawing.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0055e740(int *a, int *b, int *c, int *d);
extern int __cdecl FUN_0055e420(int val);
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_006bf2c0(int a, int b, int c, int d, int e);

extern int DAT_00858940;
extern int DAT_00858944;
extern float DAT_007dddb8;
extern float DAT_0076c5b0;
extern float DAT_007dddb4;
extern int DAT_007dddbc;

__declspec(naked) void FUN_0055e5c0(void)
{
    __asm {
        mov     ecx, [esp + 0xc]            ; param_3
        mov     eax, [esp + 0x10]           ; param_4
        push    ebx
        inc     ecx
        push    esi
        inc     eax
        push    edi
        mov     [esp + 0x1c], eax
        lea     eax, [esp + 0x1c]
        push    eax
        mov     [esp + 0x1c], ecx
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_0055e740
        mov     edi, [esp + 0x20]           ; param_1
        mov     ecx, dword ptr [DAT_00858940]
        add     esp, 0x10
        test    edi, edi
        jge     clamp1_high
        xor     edi, edi
        jmp     clamp1_done
    clamp1_high:
        lea     eax, [ecx - 1]
        cmp     edi, eax
        jle     clamp1_next
        mov     edi, eax
    clamp1_done:
        mov     [esp + 0x10], edi
    clamp1_next:
        mov     ebx, [esp + 0x18]           ; param_3
        test    ebx, ebx
        jge     clamp3_high
        xor     ebx, ebx
        jmp     clamp3_done
    clamp3_high:
        lea     eax, [ecx - 1]
        cmp     ebx, eax
        jle     clamp3_next
        mov     ebx, eax
    clamp3_done:
        mov     [esp + 0x18], ebx
    clamp3_next:
        mov     esi, [esp + 0x14]           ; param_2
        test    esi, esi
        mov     ecx, dword ptr [DAT_00858944]
        jge     clamp2_high
        xor     esi, esi
        jmp     clamp2_done
    clamp2_high:
        lea     eax, [ecx - 1]
        cmp     esi, eax
        jle     clamp2_next
        mov     esi, eax
    clamp2_done:
        mov     [esp + 0x14], esi
    clamp2_next:
        mov     edx, [esp + 0x1c]           ; param_4
        test    edx, edx
        jge     clamp4_high
        xor     edx, edx
        jmp     clamp4_done
    clamp4_high:
        lea     eax, [ecx - 1]
        cmp     edx, eax
        jle     clamp4_next
        mov     edx, eax
    clamp4_done:
        mov     [esp + 0x1c], edx
    clamp4_next:
        fld     dword ptr [DAT_007dddb8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     skip_first
        push    edi
        call    FUN_0055e420
        mov     ecx, [esp + 0x18]
        push    ecx
        mov     [esp + 0x18], eax
        call    FUN_0055e420
        mov     edx, [esp + 0x20]
        push    edx
        mov     [esp + 0x20], eax
        call    FUN_0055e420
        mov     [esp + 0x24], eax
        mov     eax, [esp + 0x28]
        push    eax
        call    FUN_0055e420
        add     esp, 0x10
        push    1
        push    0xb
        mov     [esp + 0x24], eax
        call    FUN_00713cc0
        mov     edx, [esp + 0x1c]
        mov     ebx, [esp + 0x18]
        mov     esi, [esp + 0x14]
        mov     edi, [esp + 0x10]
    skip_first:
        fld     dword ptr [DAT_007dddb4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     skip_second
        mov     ecx, [esp + 0x20]           ; param_5
        mov     eax, ecx
        push    ebp
        mov     ebp, dword ptr [DAT_007dddbc]
        shr     eax, 0x18
        sub     eax, ebp
        and     ecx, 0xffffff
        test    eax, eax
        pop     ebp
        jge     alpha_clamp_high
        xor     eax, eax
        shl     eax, 0x18
        or      ecx, eax
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop     edi
        pop     esi
        pop     ebx
        ret
    alpha_clamp_high:
        cmp     eax, 0xff
        jle     alpha_ok
        mov     eax, 0xff
    alpha_ok:
        shl     eax, 0x18
        or      ecx, eax
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop     edi
        pop     esi
        pop     ebx
        ret
    skip_second:
        mov     ecx, [esp + 0x20]           ; param_5
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
