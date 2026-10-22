/*
 * FUN_10017fc0 (178 B) - __stdcall, RET 0x10.  Object-registration helper.
 * Calls FUN_1001ca30(arg1, arg2, 0x1004a3f8, arg3, &local1); then
 * FUN_1002af80([arg1+0x20], &local2); then FUN_1001c660(arg2', arg3',
 * &local1, 0x1005033c, 0x10049bf8, [arg1+0x1c], 0x10049b60, local2) advancing
 * buffer pointers.  On success writes (local1 + local2) through arg4.  Frees
 * local2 via FUN_10001d60 if it differs from [arg1+0x20].  Returns esi.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);   /* rel32 call (callee cleans) */
extern void __cdecl FUN_1002af80(void);   /* rel32 call (callee cleans) */
extern void __cdecl FUN_1001c660(void);   /* rel32 call (cdecl, 8 args) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10017fc0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a3f8
        push    ebp
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x1c]
        push    eax
        push    0x10049b60
        push    ecx
        push    0x10049bf8
        push    0x1005033c
        lea     edx, [esp + 0x24]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_done:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      short L_skip
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_skip:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
