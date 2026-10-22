/*
 * FUN_0055af90 (214 B) ??? Object method. Handles sound-related
 * logic with FPU operations.
 *
 * __thiscall (ECX = this), 1 param (byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055AF90(void)
{
    

extern int DAT_0077b998;
extern void __cdecl FUN_00707e51(void);
extern int DAT_007b46c8;
extern void __cdecl FUN_00707e2d(void);
extern void __cdecl FUN_10041fd2a(void);
extern void __cdecl FUN_1004ebc76(void);
extern void __cdecl FUN_10041fc49(void);
extern void __cdecl FUN_1004ebe00(void);
extern void __cdecl FUN_10041fcd4(void);
extern void __cdecl FUN_10041fcc9(void);
extern void __cdecl FUN_1004ebe22(void);
__asm {
mov     al, byte ptr [esp + 4]
        sub     esp, 8
        test    al, al
        push    esi
        mov     esi, ecx
        jz      L_param_zero
        fld dword ptr [DAT_0077b998]
        push    0
        fadd    qword ptr [esi + 0x6e0]
        fstp    qword ptr [esp + 8]
        call FUN_00707e51
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_end_param
        mov al, byte ptr [DAT_007b46c8]
        test    al, al
        jz      L_end_param
        push    edi
        push    0
        call FUN_00707e2d
        fstp    qword ptr [esi + 0x6d8]
        lea     edi, [esi + 0x6d0]
        mov     ecx, edi
        call FUN_10041fd2a
        test    eax, eax
        jnz     L_skip_create
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77dc6c
        push    3
        call FUN_1004ebc76
        add     esp, 0x18
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call FUN_10041fc49
        push    1
        mov     ecx, esi
        call FUN_1004ebe00
L_skip_create:
        pop     edi
        mov byte ptr [DAT_007b46c8], 0x0
        pop     esi
        add     esp, 8
        ret     4

L_param_zero:
        add     esi, 0x6d0
        mov     ecx, esi
        call FUN_10041fcd4
        test    eax, eax
        jz      L_set_flag
        mov     ecx, esi
        call FUN_10041fcc9
        mov     ecx, eax
        call FUN_1004ebe22
L_set_flag:
        mov byte ptr [DAT_007b46c8], 0x1
L_end_param:
        pop     esi
        add     esp, 8
        ret     4
    }


}
