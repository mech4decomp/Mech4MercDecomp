/*
 * FUN_006069c0 (88 B) — Iterates a linked list of objects rooted at
 * this+0x10, calling FUN_0066be50/FUN_004084e0 on each sub-object's
 * +0x10 member, then FUN_00417ad0, then a virtual method (slot 0) with
 * arg 1.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0066be50(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __fastcall FUN_00417ad0(void);

__declspec(naked) void __fastcall FUN_006069c0(void *param_1)
{
    __asm {
        sub     esp, 0xC
        lea     eax, [ecx + 0x10]
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [eax]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x8], 0x78BA88
L_loop:
        test    eax, eax
        jz      L_exit
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_exit
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        jz      L_skip
        mov     ecx, edi
        call    FUN_0066be50
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        lea     ecx, [esp + 0x8]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        jmp     L_loop
L_exit:
        pop     edi
        pop     esi
        add     esp, 0xC
        ret
    }
}
