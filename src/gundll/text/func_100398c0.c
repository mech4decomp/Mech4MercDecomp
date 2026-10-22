/*
 * FUN_100398c0 (76 B) - __stdcall, RET 0xc. Calls FUN_100378f9 to get a
 * function pointer, invokes it, then calls FUN_100378f9 again with a size
 * (0x100, or 2 if the arg equals 0x100). (Transcribed from reference bytes;
 * gaptext; real entry after 5 int3 pads at 0x100398bb.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100378f9(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100398c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4
        push    ebx
        push    ecx
        mov     eax, dword ptr [ebp + 0xc]
        add     eax, 0xc
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp + 0x8]
        push    ebp
        push    dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     ebp, dword ptr [ebp - 0x4]
        call    FUN_100378f9
        push    esi
        push    edi
        call    eax
        pop     edi
        pop     esi
        mov     ebx, ebp
        pop     ebp
        mov     ecx, dword ptr [ebp + 0x10]
        push    ebp
        mov     ebp, ebx
        cmp     ecx, 0x100
        jne     L_ff
        mov     ecx, 0x2
L_ff:
        push    ecx
        call    FUN_100378f9
        pop     ebp
        pop     ecx
        pop     ebx
        leave
        ret     0xc
    }
}
