/*
 * FUN_005a61e0 (281 B) — State machine / execution state handler.
 *
 * Switch-based function with jump table at 0x5a62fc.
 * Handles state transitions with FPU comparisons.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_0050e230(float val);
extern int __stdcall FUN_005f0430(void *this, int p1, int p2);
extern double __stdcall FUN_00707e70(int val);
extern void __stdcall FUN_005a6bb0(void *this);
extern int __stdcall FUN_006fab90(const char *msg);

__declspec(naked) int __stdcall FUN_005a61e0(int param1, int param2)
{
    

extern int DAT_0076d3c8;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x14]
        push    edi
        mov     edi, dword ptr [ebp + 0x08]
        cmp     edi, eax
        mov     dword ptr [ebp - 0x04], eax
        jz      ret_early
        cmp     edi, 0x06
        mov     esi, dword ptr [ebx + 0x18]
        jnz     check_5
        mov     eax, dword ptr [esi + 0x1c0]
        push    eax
        call    FUN_0050e230
        fcomp dword ptr [DAT_0076d3c8]
        add     esp, 0x04
        fnstsw  ax
        test    ah, 0x01
        jz      after_fcomp
        mov     eax, dword ptr [ebp - 0x04]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
check_5:
        cmp     edi, 0x05
        jz      ret_early
after_fcomp:
        mov     ecx, dword ptr [ebp + 0x0c]
        push    ecx
        push    edi
        mov     ecx, ebx
        call    FUN_005f0430
        dec     eax
        cmp     eax, 0x06
        ja      default_case
        jmp     dword ptr [eax*4 + 0x5a62fc]
case_6:
        mov     eax, dword ptr [esi + 0x10]
        or      eax, 0x40
        push    0x00
        mov     dword ptr [esi + 0x10], eax
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xe4]
        mov     edx, dword ptr [esi + 0x1b0]
        mov     ecx, dword ptr [edx + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x0b
        mov     al, 0x01
        mov     byte ptr [esi + 0x1ac], al
        jnz     skip_set_ad
        mov     byte ptr [esi + 0x1ad], al
skip_set_ad:
        push    0x00
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov     eax, dword ptr [ebx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
case_7:
        cmp     dword ptr [ebx + 0x10], 0x07
        jz      case_7_or_1_common
case_1:
        mov     ecx, esi
        call    FUN_005a6bb0
case_7_or_1_common:
        push    0x00
        mov     byte ptr [esi + 0x1ac], 0x00
        mov     byte ptr [esi + 0x1ad], 0x00
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov     eax, dword ptr [ebx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
case_3:
        cmp     dword ptr [ebx + 0x10], 0x01
        jz      case_7_or_1_common
        jmp     case_1
default_case:
        push    0x7849b8
        call    FUN_006fab90
        add     esp, 0x04
        test    eax, eax
        jz      load_eax_ret
        int     3
        /* fall through to load_eax_ret */
load_eax_ret:
        mov     eax, dword ptr [ebx + 0x14]
ret_early:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x08
    }


}
