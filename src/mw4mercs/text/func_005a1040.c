/*
 * FUN_005a1040 (700 B) — State machine / update function.
 *
 * __fastcall (ECX = this), RET 0x4 (one stack param).
 * Uses a jump table switch on this+0x528 (cases 0-4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_0041fd80(void);
extern void   __stdcall FUN_00559be0(int);
extern void   __stdcall FUN_00603cd0(void);
extern int    __stdcall FUN_00416b60(void *);
extern double __stdcall FUN_00707e70(int);
extern int    __stdcall FUN_0050e1b0(int);
extern int    __stdcall FUN_0050e1a0(int);
extern int    __stdcall FUN_00416cc0(void);
extern int    __stdcall FUN_004e7760(void);
extern void   __stdcall FUN_004e6ce0(void);
extern int    __stdcall FUN_004e69a0(void);
extern void   __stdcall FUN_004e6180(void);
extern void   __fastcall FUN_005a1410(int);

__declspec(naked) void __fastcall FUN_005a1040(int param_1)
{
    

extern int DAT_007f1f7d;
extern int DAT_0076d064;
extern int DAT_0076de20;
extern int DAT_0076d968;
extern int DAT_0076c5b0;
extern int DAT_0076d588;
__asm {
sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [edi + 0x518]
        call    FUN_0041fd80
        mov     ebp, eax
        test    ebp, ebp
        jz      exit_func
        mov     ecx, dword ptr [ebp + 0x3b0]
        test    ecx, ecx
        jz      check_flag
        push    0xc
        call    FUN_00559be0
check_flag:
        mov     al, byte ptr [ebp + 0x2f8]
        test    al, al
        jz      call_5a1410
        mov     eax, dword ptr [edi + 0x528]
        cmp     eax, 0x4
        ja      switch_done
        jmp     dword ptr [eax*4 + 0x5a12fc]

case_0:
        mov     eax, dword ptr [ebp + 0x5b8]
        test    eax, eax
        jz      case_1_entry
        mov     esi, dword ptr [ebp + 0x2f4]
        mov     ecx, esi
        mov     dword ptr [ebp + 0x5b8], 0x0
        call    FUN_00603cd0
        mov     eax, dword ptr [esi]
        xor     ecx, ecx
        mov cl, byte ptr [DAT_007f1f7d]
        push    0x0
        push    ecx
        push    0x23
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        lea     edx, [esp + 0x10]
        add     ebp, 0x384
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00416b60
        mov     ecx, eax
        fld     dword ptr [ecx + 0x14]
        mov     ebx, 0x3f800000
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jz      skip_clamp_1
        mov     dword ptr [ecx + 0x14], ebx
skip_clamp_1:
        lea     eax, [esp + 0x14]
        mov     esi, 0x1
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x18], esi
        call    FUN_00416b60
        mov     ecx, eax
        fld     dword ptr [ecx + 0x14]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jz      skip_clamp_2
        mov     dword ptr [ecx + 0x14], ebx
skip_clamp_2:
        push    0x0
        call    FUN_00707e70
        fadd qword ptr [DAT_0076de20]
        mov     dword ptr [edi + 0x528], esi
        fstp    qword ptr [edi + 0x52c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4

case_1_entry:
        mov     ebx, dword ptr [edi + 0x534]
        mov     dword ptr [edi + 0x528], 0x1
case_1_loop:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      case_2_entry
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x8], ecx
        jz      case_2_entry
        mov     edx, dword ptr [esi + 0x1ac]
        push    edx
        call    FUN_0050e1b0
        mov     ecx, dword ptr [esi + 0x1b0]
        sub     ecx, eax
        add     esp, 0x4
        test    ecx, ecx
        jle     case_1_loop
        mov     edx, dword ptr [esi + 0x1b0]
        push    edx
        call    FUN_0050e1a0
        add     esp, 0x4
        push    0x0
        mov     dword ptr [esi + 0x1ac], eax
        call    FUN_00707e70
        fadd qword ptr [DAT_0076d968]
        fstp    qword ptr [edi + 0x52c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4

case_2_entry:
        mov     ecx, dword ptr [ebp + 0x408]
        fld     dword ptr [ecx + 0x54]
        mov     dword ptr [edi + 0x528], 0x2
        fld     dword ptr [ecx + 0x58]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     case_3_entry
        fld     dword ptr [ecx + 0x58]
        fadd    dword ptr [ecx + 0x54]
        fcom dword ptr [DAT_0076c5b0]
        fst     dword ptr [ecx + 0x54]
        fnstsw  ax
        test    ah, 0x1
        jz      case_2_else
        fstp    st(0)
        mov     dword ptr [ecx + 0x54], 0x0
        jmp     case_2_done
case_2_else:
        fcomp   dword ptr [ecx + 0x58]
        fnstsw  ax
        test    ah, 0x41
        jnz     case_2_done
        mov     eax, dword ptr [ecx + 0x58]
        mov     dword ptr [ecx + 0x54], eax
case_2_done:
        push    0x0
        mov     dword ptr [ecx + 0x28], 0x1
        call    FUN_00707e70
        fadd qword ptr [DAT_0076d968]
        fstp    qword ptr [edi + 0x52c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4

case_3_entry:
        mov     ebx, dword ptr [edi + 0x538]
        mov     ecx, ebx
        mov     dword ptr [edi + 0x528], 0x3
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      case_4_entry
case_3_loop:
        mov     ecx, esi
        call    FUN_004e7760
        cmp     eax, 0x1
        jz      case_3_found
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     case_3_loop
case_4_entry:
        mov     ebx, dword ptr [edi + 0x53c]
        mov     ecx, ebx
        mov     dword ptr [edi + 0x528], 0x4
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      switch_done
case_4_loop:
        mov     ecx, esi
        call    FUN_004e69a0
        test    al, al
        jnz     case_4_found
        mov     ecx, ebx
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     case_4_loop
        jmp     switch_done

case_3_found:
        mov     ecx, esi
        call    FUN_004e6ce0
        jmp     common_return

case_4_found:
        mov     ecx, esi
        call    FUN_004e6180
common_return:
        push    0x0
        call    FUN_00707e70
        fadd qword ptr [DAT_0076d588]
        fstp    qword ptr [edi + 0x52c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4

switch_done:
        mov     edx, dword ptr [ebp]
        push    0x0
        mov     ecx, ebp
        call    dword ptr [edx + 0xb0]
        mov     ebp, dword ptr [ebp + 0x3b0]
        test    ebp, ebp
        jz      call_5a1410
        push    0x39
        mov     ecx, ebp
        call    FUN_00559be0
call_5a1410:
        mov     ecx, edi
        call    FUN_005a1410
exit_func:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }


}
