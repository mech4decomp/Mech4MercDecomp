/*
 * FUN_100011d0 (111 B) - SEH-guarded destructor wrapper. Calls
 * thunk_FUN_100030f0 on +0x1c8 and thunk_FUN_100011a0 on +0x130, +0x98,
 * +0x0.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001240(void);
extern void __cdecl FUN_10001190(void);

__declspec(naked) void __cdecl FUN_100011d0(void)
{
    __asm {
        push    -1
        push    0x1001f0b4
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        lea     ecx, [esi + 0x1c8]
        mov     dword ptr [esp + 0x10], 2
        call    FUN_10001240
        lea     ecx, [esi + 0x130]
        mov     byte ptr [esp + 0x10], 1
        call    FUN_10001190
        lea     ecx, [esi + 0x98]
        mov     byte ptr [esp + 0x10], 0
        call    FUN_10001190
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_10001190
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
