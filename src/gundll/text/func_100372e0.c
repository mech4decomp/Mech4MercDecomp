/*
 * FUN_100372E0 (132 B) - __stdcall, RET 0x10 (4 args).
 * Allocates a 0x88-byte object via FUN_10001d50, constructs it via
 * FUN_10034bc0 (thiscall, 3 stack args), queries it via FUN_10036380
 * (thiscall), and on failure destroys via FUN_10034dd0 + frees via
 * FUN_10001d60. Writes the resulting object pointer through arg1 (out
 * pointer). Returns HRESULT-style codes (0x8007000e / 0x80070057).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call, __cdecl alloc */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, __cdecl free */
extern void __cdecl FUN_10034bc0(void);   /* rel32 call, __thiscall (ECX=this), 3 stack args */
extern void __cdecl FUN_10036380(void);   /* rel32 call, __thiscall (ECX=this) */
extern void __cdecl FUN_10034dd0(void);   /* rel32 call, __thiscall (ECX=this) */

__declspec(naked) void __stdcall FUN_100372E0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        xor     esi, esi
        test    edi, edi
        je      L_err
        mov     ebx, dword ptr [esp+0x1c]
        test    ebx, ebx
        je      L_err
        test    ebp, ebp
        je      L_err
        push    0x88
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        je      L_allocfail
        mov     ecx, dword ptr [esp+0x20]
        push    ecx
        push    ebx
        push    edi
        mov     ecx, eax
        call    FUN_10034bc0
        mov     esi, eax
        jmp     L_afteralloc
L_allocfail:
        xor     esi, esi
L_afteralloc:
        test    esi, esi
        jne     L_ok
        mov     edi, 0x8007000e
        jmp     L_done
L_ok:
        mov     ecx, esi
        call    FUN_10036380
        mov     edi, eax
        test    edi, edi
        jge     L_done
        mov     ecx, esi
        call    FUN_10034dd0
        push    esi
        call    FUN_10001d60
        add     esp, 4
        xor     esi, esi
L_done:
        test    ebp, ebp
        mov     eax, edi
        je      L_skipout
        mov     dword ptr [ebp], esi
L_skipout:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
L_err:
        mov     edi, 0x80070057
        jmp     L_done
    }
}
