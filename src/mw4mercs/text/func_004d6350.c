/*
 * FUN_004d6350 (124 B) — __thiscall. Walks the linked list at
 * this->field60, building a temporary 12-byte object (vtable 0x772d80)
 * around each node; for each node either calls FUN_004d6240 or invokes a
 * virtual method (*(*node))(1). Returns AL=1 on success, 0 if list empty.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004d6240(void);

__declspec(naked) void FUN_004d6350(void)
{
    __asm {
        sub     esp, 0xc
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi+0x60]
        test    ecx, ecx
        lea     eax, [edi+0x60]
        jz      L_63c5
        mov     dword ptr [esp+8], eax
        mov     eax, ecx
        push    esi
        mov     dword ptr [esp+0x10], eax
        mov     dword ptr [esp+8], 0x772d80
L_6373:
        test    eax, eax
        jz      L_63bd
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_63bd
        mov     eax, dword ptr [esi+0x10]
        shr     eax, 0x14
        test    al, 1
        lea     ecx, [esp+8]
        jz      L_63a4
        call    FUN_00417ad0
        push    esi
        mov     ecx, edi
        call    FUN_004d6240
        mov     eax, dword ptr [esp+0xc]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
        jmp     L_6373
L_63a4:
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp+0xc]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x10], eax
        jmp     L_6373
L_63bd:
        pop     esi
        mov     al, 1
        pop     edi
        add     esp, 0xc
        ret
L_63c5:
        xor     al, al
        pop     edi
        add     esp, 0xc
        ret
    }
}
