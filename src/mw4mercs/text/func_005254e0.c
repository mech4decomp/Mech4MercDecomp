/*
 * FUN_005254e0 (237 B) — String copy helper (variant).
 *
 * __thiscall (ECX = this). Copies a string from param_1 into an internal
 * buffer, manages refcounts, and calls into some vtable dispatch.
 * Similar to FUN_00524790 but without the XOR obfuscation epilogue.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00417aa0(int param1);
extern void __fastcall FUN_004129c0(void);
extern void __fastcall FUN_00412950(void);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_00412780(int param1);

__declspec(naked) void __stdcall FUN_005254e0(void)
{
    

extern int DAT_007f1fbc;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x10
        mov eax, dword ptr [DAT_007f1fbc]
        push    ebx
        add     eax, 0x10
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x0c], eax
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ecx + 4]
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x10], 0x0077a080
        mov     ecx, dword ptr [eax]
        push    edi
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebx], 0xffffffff
        call    FUN_00417aa0
        mov     ebp, eax
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jz      l_skip_inc
        inc     byte ptr [eax - 1]
    l_skip_inc:
        lea     ecx, [esp + 0x24]
        call    FUN_004129c0
        lea     ecx, [esp + 0x24]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp + 0x10]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [eax + 0x40970]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov ecx, dword ptr [DAT_007dab44]
        mov     esi, dword ptr [ecx]
        xor esi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esi + 0x0c]
        mov     edi, dword ptr [ebp + 0x38]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esi + 0x0c]
        xor     ecx, 0x85739531
        push    eax
        add     ecx, 0xa8
        call    FUN_00412780
        mov     dword ptr [ebx], edi
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     eax, 1
        add     esp, 0x10
        ret     8
    }


}
