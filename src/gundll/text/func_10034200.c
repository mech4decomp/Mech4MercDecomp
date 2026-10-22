/*
 * FUN_10034200 (68 B) - __stdcall, RET 0x10.  Dispatches to
 * FUN_10033c10 (thiscall, 3 args); on failure calls FUN_100342c0
 * (thiscall, 2 args) then re-dispatches FUN_10033c10.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10033c10(void);
extern void FUN_100342c0(void);

__declspec(naked) void __stdcall FUN_10034200(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        lea     esi, [eax - 0x18]
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_10033c10
        test    eax, eax
        jge     L_3d
        push    0
        push    edi
        mov     ecx, esi
        call    FUN_100342c0
        test    eax, eax
        jl      L_3d
        push    edi
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_10033c10
    L_3d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
