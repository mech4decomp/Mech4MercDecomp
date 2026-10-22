/*
 * FUN_10034180 (125 B) - __stdcall, RET 0x18.  Dispatches to
 * FUN_10033b10 (thiscall) with 5 args; on 0x80004005 failure, sums a
 * 16-bit field over edi entries of an array at ebx+8, calls
 * FUN_100342c0 (thiscall, 2 args), then re-dispatches FUN_10033b10.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10033b10(void);
extern void FUN_100342c0(void);

__declspec(naked) void __stdcall FUN_10034180(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        push    edi
        push    ebx
        push    ebp
        push    ecx
        lea     esi, [eax - 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_10033b10
        cmp     eax, 0x80004005
        jne     L_f6
        test    edi, edi
        mov     dword ptr [esp + 0x14], ebp
        jle     L_d0
        lea     eax, [ebx + 8]
        mov     edx, edi
        mov     cx, bp
    L_c2:
        add     cx, word ptr [eax]
        add     eax, 0xc
        dec     edx
        jne     L_c2
        mov     word ptr [esp + 0x14], cx
    L_d0:
        mov     eax, dword ptr [esp + 0x14]
        push    0
        push    eax
        mov     ecx, esi
        call    FUN_100342c0
        test    eax, eax
        jl      L_f6
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    edi
        push    ebx
        push    ebp
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_10033b10
    L_f6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
