/*
 * FUN_0058BD70 (743 B) — __thiscall method.
 * Called with one float parameter on the stack (RET 0x4).
 * Handles animation/state transitions for some game object.
 *
 * CFLAGS: /O1
 */

#include "mw4/common.h"

__declspec(naked) void __stdcall FUN_0058bd70(void)
{
    

extern void __cdecl FUN_10040c5ac(void);
extern int DAT_007b8cec;
extern int DAT_007b8cf0;
extern void __cdecl FUN_10041a01e(void);
extern void __cdecl FUN_10040cfd0(void);
extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
extern int DAT_007b8ce8;
extern void __cdecl FUN_10041d72d(void);
extern void __cdecl FUN_100419f7f(void);
extern void __cdecl FUN_10040cf31(void);
extern void __cdecl FUN_1004da911(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_10041931e(void);
extern void __cdecl FUN_1004da8ce(void);
extern void __cdecl FUN_100419ec9(void);
extern void __cdecl FUN_1004da851(void);
extern void __cdecl FUN_10041d5be(void);
extern void __cdecl FUN_100419e10(void);
extern void __cdecl FUN_1004da798(void);
extern void __cdecl FUN_1004da74c(void);
__asm {
sub     esp, 0x50
        push    ebx
        mov     ebx, ecx                    ; ebx = this
        mov     eax, [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 4]         ; vtable[1](this+0x78)
        mov     esi, eax                    ; esi = result
        mov     eax, [ebx + 0x868]
        xor     edi, edi
        cmp     eax, 1
        jne     L_check_state2

        ; state == 1
        push 0x7b8d88
        lea     ecx, [esp + 0x18]
        call FUN_10040c5ac
        fld     dword ptr [ebx + 0x850]
        mov ecx, dword ptr [DAT_007b8cec]
        fchs
        mov edx, dword ptr [DAT_007b8cf0]
        lea     eax, [esp + 0x20]
        mov     [esp + 0x24], ecx
        fstp    dword ptr [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     [esp + 0x2c], edx
        call FUN_10041a01e
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x30]
        call FUN_10040cfd0
        lea     edx, [esp + 0x2c]
        jmp     L_call_daa20

    L_check_state2:
        cmp     eax, 2
        jne     L_default_state

        ; state == 2
        fld     dword ptr [ebx + 0x858]
        mov eax, dword ptr [DAT_007b8d88]
        fchs
        mov ecx, dword ptr [DAT_007b8d8c]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [ebx + 0x860]
        mov edx, dword ptr [DAT_007b8d90]
        fdiv    dword ptr [esi + 0x300]
        mov     [esp + 0x24], ecx
        mov ecx, dword ptr [DAT_007b8ce8]
        mov     [esp + 0x20], eax
        mov eax, dword ptr [DAT_007b8cec]
        push    ecx
        mov     [esp + 0x1c], eax
        mov     [esp + 0x18], ecx
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0x14]
        mov     [esp + 0x2c], edx
        mov edx, dword ptr [DAT_007b8cf0]
        mov     [esp + 0x20], edx
        mov dword ptr [esp + 0x14], 0
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call FUN_10041d72d
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x30]
        call FUN_100419f7f
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_10040cf31
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, [ebx + 0x844]
        call FUN_1004da911
        fld     dword ptr [ebx + 0x860]
        fsub    dword ptr [esp + 0x60]
        fst     dword ptr [ebx + 0x860]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_after_state2
        mov     [ebx + 0x868], edi
        jmp     L_after_state2

    L_default_state:
        push 0x7b9460
        lea     ecx, [esp + 0x30]
        call FUN_10041931e
        lea     edx, [esp + 0x2c]

    L_call_daa20:
        mov     ecx, [ebx + 0x844]
        push    edx
        call FUN_1004da8ce

    L_after_state2:
        mov     eax, [ebx + 0x864]
        cmp     eax, 1
        jne     L_check_substate2

        ; substate == 1
        mov ecx, dword ptr [DAT_007b8d8c]
        fld     dword ptr [ebx + 0x84c]
        mov edx, dword ptr [DAT_007b8d90]
        fchs
        mov eax, dword ptr [DAT_007b8d88]
        mov     [esp + 0x18], ecx
        mov ecx, dword ptr [DAT_007b8cf0]
        mov     [esp + 0x1c], edx
        mov     [esp + 0x14], eax
        mov eax, dword ptr [DAT_007b8cec]
        lea     edx, [esp + 0x20]
        mov     [esp + 0x28], ecx
        fstp    dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x30]
        mov     [esp + 0x28], eax
        call FUN_100419ec9
        mov     eax, [esp + 0x14]
        mov     ecx, [esp + 0x18]
        mov     edx, [esp + 0x1c]
        mov     [esp + 0x38], eax
        lea     eax, [esp + 0x2c]
        mov     [esp + 0x48], ecx
        mov     ecx, [ebx + 0x840]
        push    eax
        mov     [esp + 0x5c], edx
        call FUN_1004da851
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     4

    L_check_substate2:
        cmp     eax, 2
        jne     L_default_substate

        ; substate == 2
        fld     dword ptr [ebx + 0x854]
        mov ecx, dword ptr [DAT_007b8d88]
        fchs
        mov edx, dword ptr [DAT_007b8d8c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x85c]
        mov eax, dword ptr [DAT_007b8d90]
        fdiv    dword ptr [esi + 0x300]
        mov     [esp + 0x14], ecx
        mov ecx, dword ptr [DAT_007b8cec]
        push    ecx
        mov     [esp + 0x1c], edx
        mov edx, dword ptr [DAT_007b8ce8]
        mov     [esp + 0x28], ecx
        lea     ecx, [esp + 0x14]
        mov     [esp + 0x24], edx
        mov     [esp + 0x20], eax
        mov eax, dword ptr [DAT_007b8cf0]
        lea     edx, [esp + 0x10]
        mov     [esp + 0x2c], eax
        mov dword ptr [esp + 0x10], 0
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call FUN_10041d5be
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_100419e10
        mov     ecx, [esp + 0x14]
        mov     edx, [esp + 0x18]
        mov     eax, [esp + 0x1c]
        mov     [esp + 0x38], ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, [ebx + 0x840]
        mov     [esp + 0x4c], edx
        mov     [esp + 0x5c], eax
        call FUN_1004da798
        fld     dword ptr [ebx + 0x85c]
        fsub    dword ptr [esp + 0x60]
        fst     dword ptr [ebx + 0x85c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_default_substate_epilogue
        mov     [ebx + 0x864], edi

    L_substate2_done:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     4

    L_default_substate:
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x2c]
        lea     edx, [esp + 0x2c]
        rep movsd
        mov     ecx, [ebx + 0x840]
        push    edx
        call FUN_1004da74c

    L_default_substate_epilogue:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     4
    }


}
