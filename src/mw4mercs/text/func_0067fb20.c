/*
 * FUN_0067fb20 (89 B) — __thiscall destructor. Sets vtable 0x79884C,
 * iterates a linked list at this+0x10 calling FUN_00417ad0 and a
 * virtual method (slot 0) with arg 1, then calls FUN_00417980 on
 * this+0x10 and FUN_00415380 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00417ad0(void);
extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_0067fb20(void *param_1)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x10]
        mov     dword ptr [edi], 0x79884C
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xC], 0x798850
L_43:
        test    eax, eax
        jz      L_64
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_64
        lea     ecx, [esp + 0xC]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        jmp     L_43
L_64:
        mov     ecx, ebx
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xC
        ret
    }
}
