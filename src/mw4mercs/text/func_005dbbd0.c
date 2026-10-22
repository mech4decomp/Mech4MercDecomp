/*
 * FUN_005DBBD0 (344 B) - Unit state / sound dispatch.
 *
 * __thiscall (ECX = this). Uses FPU to scale a value, dispatches on a
 * virtual call result and a global state field via three jump tables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00637b40(int param);
extern int __fastcall FUN_00637a20(int param);
extern void __fastcall FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_005dbbd0(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_005DBD28;
extern int DAT_005DBD38;
extern int DAT_005DBD48;
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x17c]
        cmp     eax, -1
        jnz     l_after_init
        push    0xe4
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        call    FUN_0075db4a
    l_after_init:
        mov     ecx, dword ptr [esi + 0x170]
        mov     dword ptr [esp + 4], eax
        fild    dword ptr [esp + 4]
        xor     eax, eax
        test    ecx, ecx
        fst     dword ptr [esp + 4]
        jz      l_after_call
        mov     eax, dword ptr [ecx]
        fstp    st(0)
        call    dword ptr [eax + 0x60]
        fld     dword ptr [esp + 4]
    l_after_call:
        sub     eax, 0
        jz      l_case3
        dec     eax
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov esi, dword ptr [DAT_007dab40]
        jz      l_case2
        xor     edx, esi
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x3508]
        cmp     eax, 3
        ja      l_ftol
        jmp     dword ptr [eax*4 + DAT_005DBD28]
    l_t106:
        fstp    st(0)
        push    0x106
        jmp     l_common
    l_t107:
        fstp    st(0)
        push    0x107
        jmp     l_common
    l_t108:
        fstp    st(0)
        push    0x108
        jmp     l_common
    l_t109:
        fstp    st(0)
        push    0x109
        jmp     l_common
    l_case2:
        xor     edx, esi
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x3508]
        cmp     eax, 3
        ja      l_ftol
        jmp     dword ptr [eax*4 + DAT_005DBD38]
    l_t102:
        fstp    st(0)
        push    0x102
        jmp     l_common
    l_t103:
        fstp    st(0)
        push    0x103
        jmp     l_common
    l_t104:
        fstp    st(0)
        push    0x104
        jmp     l_common
    l_t105:
        fstp    st(0)
        push    0x105
        jmp     l_common
    l_case3:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x3508]
        cmp     eax, 3
        ja      l_ftol
        jmp     dword ptr [eax*4 + DAT_005DBD48]
    l_t10a:
        fstp    st(0)
        push    0x10a
        jmp     l_common
    l_t10b:
        fstp    st(0)
        push    0x10b
        jmp     l_common
    l_t10c:
        fstp    st(0)
        push    0x10c
        jmp     l_common
    l_t10d:
        fstp    st(0)
        push    0x10d
    l_common:
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fmul    dword ptr [esp + 4]
    l_ftol:
        call    FUN_0075db4a
        pop     esi
        pop     ecx
        ret
    }


}
