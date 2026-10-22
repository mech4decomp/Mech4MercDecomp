/*
 * FUN_006030a0 (189 B) — __thiscall recursive render-node walker.
 * Recurses into node->[0xc], calls FUN_00603480/FUN_00603200/
 * FUN_00580620, invokes a virtual method (vtable+0x18) on node->[0x18]
 * when its low bits indicate a live object, then frees the node via
 * FUN_004084e0 and walks the sibling list at node->[0x8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006030a0(void);
extern void __cdecl FUN_00603480(void);
extern void __cdecl FUN_00603200(void);
extern void __cdecl FUN_00580620(void);
extern void __cdecl FUN_00603160(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006030a0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     dword ptr [esp + 0x4], ecx
        jz      L_epilogue
        push    ebx
        push    ebp
        push    edi
L_loop:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006030a0
        mov     ecx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi + 0x20]
        mov     ebx, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ebx
        call    FUN_00603480
        mov     edi, dword ptr [esi + 0x24]
        lea     ebp, [esi + 0x24]
        push    0x0
        sub     edi, ebx
        push    ebp
        sar     edi, 0x2
        call    FUN_00603200
        push    edi
        push    ebx
        call    FUN_00580620
        add     esp, 0x1c
        mov     ecx, ebp
        call    FUN_00603160
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        jnz     L_cleanup
        mov     edx, eax
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_case1
        and     eax, 0xfffffffc
        mov     dword ptr [esi + 0x18], eax
        jz      L_cleanup
        mov     edx, dword ptr [eax]
        push    0x3
        jmp     L_vcall
L_case1:
        and     eax, 0xfffffffc
        mov     dword ptr [esi + 0x18], eax
        jz      L_cleanup
        mov     edx, dword ptr [eax]
        push    0x1
L_vcall:
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
L_cleanup:
        test    esi, esi
        mov     dword ptr [esi + 0x18], 0x0
        jz      L_next
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_next:
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        jnz     L_loop
        pop     edi
        pop     ebp
        pop     ebx
L_epilogue:
        pop     esi
        pop     ecx
        ret     0x4
    }
}
