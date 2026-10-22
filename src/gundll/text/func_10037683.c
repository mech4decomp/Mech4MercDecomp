/*
 * FUN_10037683 (182 B) - __cdecl. Sets up an SEH frame, calls a virtual
 * method through FUN_10038512's return, restores the exception list.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10038512(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10037683(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        and     dword ptr [ebp - 0x28], 0x0
        mov     dword ptr [ebp - 0x24], 0x10037739
        mov     eax, dword ptr [ebp + 0x18]
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [ebp + 0x1c]
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, dword ptr [ebp + 0x20]
        mov     dword ptr [ebp - 0x14], eax
        and     dword ptr [ebp - 0x10], 0x0
        and     dword ptr [ebp - 0xc], 0x0
        and     dword ptr [ebp - 0x8], 0x0
        and     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x10], 0x1003770b
        mov     dword ptr [ebp - 0xc], esp
        mov     dword ptr [ebp - 0x8], ebp
        mov     eax, dword ptr fs:[0]
        mov     dword ptr [ebp - 0x28], eax
        __emit 0x8D  /* __emit: reference uses disp32 lea eax,[ebp-0x28] (8D 85 D8 FF FF FF); MSVC6 emits disp8 8D 45 D8 */
        __emit 0x85
        __emit 0xD8
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     dword ptr fs:[0], eax
        mov     dword ptr [ebp - 0x34], 0x1
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x30], eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 0x2c], eax
        lea     eax, [ebp - 0x30]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    dword ptr [eax]
        call    FUN_10038512
        call    dword ptr [eax + 0x68]
        pop     ecx
        pop     ecx
        and     dword ptr [ebp - 0x34], 0x0
L_3770b:
        cmp     dword ptr [ebp - 0x4], 0x0
        jz      L_37728
        mov     ebx, dword ptr fs:[0]
        mov     eax, dword ptr [ebx]
        mov     ebx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebx], eax
        mov     dword ptr fs:[0], ebx
        jmp     L_37731
L_37728:
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr fs:[0], eax
L_37731:
        mov     eax, dword ptr [ebp - 0x34]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
