/*
 * FUN_10001450 (77 B) - SEH-guarded destructor wrapper. Calls
 * thunk_FUN_100011a0 on +0x30 and FUN_10003F80 on +0x4 (a critical
 * section).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10003F80(void);

__declspec(naked) void __cdecl FUN_10001450(void)
{
    __asm {
        push    -1
        push    0x1001f19b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_10001190
        lea     ecx, [esi + 4]
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_10003F80
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
