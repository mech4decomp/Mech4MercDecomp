/*
 * FUN_006a1990 (292 B) — __thiscall (ECX=this), RET.
 *
 * Destructor: sets vtable 0x799d14, iterates a registry vector
 * [this+0xc4..0xc8], releasing each entry's refcounted sub-object
 * (indirect vtable calls), then frees the vector, calls FUN_0069e970
 * and FUN_006a0250, and releases the this+0x10 refcounted field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_799d14;               /* vtable pointer */
extern void __cdecl FUN_006a2260(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0069e970(void);
extern void __cdecl FUN_006a0250(void);

__declspec(naked) void __stdcall FUN_006a1990(void *this)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0xc4]
        mov     dword ptr [edi], offset g_799d14
        mov     ebp, dword ptr [edi + 0xc8]
        cmp     ebx, ebp
        jz      L_after_loop
        push    esi
L_loop:
        mov     eax, dword ptr [ebx]
        lea     esi, [eax + 0x5f4]
        test    dword ptr [esi], 0xfffffffc
        jz      L_loop_next
        lea     eax, [esp + 0x10]
        cmp     eax, esi
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x10], ecx
        jz      L_second
        mov     ecx, dword ptr [esi]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_first_clear
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     L_first_1
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_first_clear
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
        jmp     L_first_clear
L_first_1:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_first_clear
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_first_clear:
        mov     dword ptr [esi], 0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], ecx
        push    0x0
        lea     ecx, [esp + 0x14]
        call    FUN_006a2260
        mov     ecx, dword ptr [esp + 0x10]
L_second:
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_loop_next
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     L_second_1
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x10], ecx
        jz      L_loop_next
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
        jmp     L_loop_next
L_second_1:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x10], ecx
        jz      L_loop_next
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_loop_next:
        add     ebx, 0x4
        cmp     ebx, ebp
        jnz     L_loop
        pop     esi
L_after_loop:
        mov     eax, dword ptr [edi + 0xc4]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      L_free_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_free_done:
        lea     ecx, [edi + 0x30]
        call    FUN_0069e970
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        jnz     L_field_done
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 0x2
        mov     dword ptr [edi + 0x10], eax
        call    FUN_004084e0
        add     esp, 0x4
L_field_done:
        mov     ecx, edi
        mov     dword ptr [edi + 0x10], 0
        call    FUN_006a0250
        pop     edi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
