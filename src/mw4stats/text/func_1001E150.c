/*
 * FUN_1001e150 (96 B) - __stdcall (1 arg, RET 0x4). Tears down a stats
 * object: if [arg+0x18] is set, calls FUN_1001e2d0, then either frees the
 * sub-object (FUN_1001e430 + FUN_1000a110) or marks it state 2; then
 * releases [arg+0x14] via its vtable +0x8 method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001e2d0(void);
extern void __cdecl FUN_1001e430(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) int __cdecl FUN_1001e150(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L_e190
        push    esi
        call    FUN_1001e2d0
        mov     edi, dword ptr [esi + 0x18]
        cmp     dword ptr [edi + 0xc], 0x1
        jnz     L_e189
        test    edi, edi
        jz      L_e180
        mov     ecx, edi
        call    FUN_1001e430
        push    edi
        call    FUN_1000a110
        add     esp, 0x4
L_e180:
        mov     dword ptr [esi + 0x18], 0x0
        jmp     L_e190
L_e189:
        mov     dword ptr [edi + 0xc], 0x2
L_e190:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_e1ab
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L_e1ab
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x14], 0x0
L_e1ab:
        pop     edi
        pop     esi
        ret     0x4
    }
}
