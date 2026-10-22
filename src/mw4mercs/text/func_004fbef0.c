/*
 * FUN_004FBEF0 (52 B) — __fastcall (ecx=this) destructor. Sets vtable
 * 0x775ea0, walks the 0x12-entry table at this+0xa0 downward calling
 * each entry's virtual method (offset 0) with arg 3, then calls
 * FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void __stdcall FUN_004fbef0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x775ea0
        lea     esi, [edi + 0xa0]
        mov     ebx, 0x12
    l_loop:
        mov     ecx, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    ecx, ecx
        jz      l_skip
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
    l_skip:
        dec     ebx
        jnz     l_loop
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
