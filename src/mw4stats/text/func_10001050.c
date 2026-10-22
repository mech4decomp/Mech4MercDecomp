/*
 * FUN_10001050 (79 B) - SEH-guarded constructor wrapper. Sets up an
 * exception registration frame, calls a sub-object ctor at +0x1d0
 * (thunk_FUN_10001260) and FUN_100011d0, then tears down the frame.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001250(void);
extern void __cdecl FUN_100011d0(void);

__declspec(naked) void __cdecl FUN_10001050(void)
{
    __asm {
        push    -1
        push    0x1001f028
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        lea     ecx, [esi + 0x1d0]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_10001250
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_100011d0
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
