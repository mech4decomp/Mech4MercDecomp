/*
 * FUN_100010a0 (71 B) - SEH-guarded constructor wrapper. Calls
 * FUN_100010f0(this) and FUN_10004610(this+0x1d0), returns this.
 *
 * __fastcall (ECX = this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100010f0(void);
extern void __cdecl FUN_10004610(void);

__declspec(naked) void * __cdecl FUN_100010a0(void)
{
    __asm {
        push    -1
        push    0x1001f048
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        call    FUN_100010f0
        lea     ecx, [esi + 0x1d0]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_10004610
        mov     ecx, dword ptr [esp + 8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
