/*
 * FUN_100059d0 (83 B) - SEH-guarded constructor. Sets up an exception
 * registration frame, calls base ctor FUN_10003890, sub-object ctor
 * FUN_10003f50, installs vtable 0x10021270, calls FUN_10005a30, tears
 * down the frame.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003890(void);
extern void __cdecl FUN_10003f50(void);
extern void __cdecl FUN_10005a30(void);

__declspec(naked) void __cdecl FUN_100059d0(void)
{
    __asm {
        push    -1
        push    0x1001f6fb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        call    FUN_10003890
        push    1
        lea     ecx, [esi + 4]
        call    FUN_10003f50
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esi], 0x10021270
        call    FUN_10005a30
        mov     ecx, dword ptr [esp + 8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
