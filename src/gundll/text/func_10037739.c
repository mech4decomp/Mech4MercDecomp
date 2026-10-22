/*
 * FUN_10037739 (114 B) — __cdecl.
 * SEH exception handler. If (ExceptionFlags & 0x66) != 0, sets flag at
 * [param_2+0x24]=1 and returns 1; otherwise calls FUN_100390a4, optionally
 * FUN_1003756b, then unwinds via the context block (ESP/EBP from +0x1c/+0x20)
 * and jumps to the handler at [param_2+0x18].
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100390a4(void);
extern void __cdecl FUN_1003756b(void);

__declspec(naked) void FUN_10037739(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        cld
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x4]
        and     eax, 0x66
        test    eax, eax
        jz      L75c
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [eax + 0x24], 0x1
        push    0x1
        pop     eax
        jmp     La9
    L75c:
        push    0x1
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0x14]
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0x8]
        push    0
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [eax + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_100390a4
        add     esp, 0x20
        mov     eax, dword ptr [ebp + 0xc]
        cmp     dword ptr [eax + 0x24], 0
        jnz     L79a
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp + 0xc]
        call    FUN_1003756b
    L79a:
        mov     ebx, dword ptr [ebp + 0xc]
        mov     esp, dword ptr [ebx + 0x1c]
        mov     ebp, dword ptr [ebx + 0x20]
        jmp     dword ptr [ebx + 0x18]
        push    1
        pop     eax
    La9:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
