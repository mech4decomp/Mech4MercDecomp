/*
 * FUN_10001260 (112 B) - SEH-guarded destructor wrapper. Calls
 * thunk_FUN_100011a0 on +0x1e8, +0x150, +0xb4, +0x1c.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Aliased via former cpp/ translation thunk: FUN_10001260 (deleted 2026-08; byte-identical jmp thunk, no .c scaffold).
 */

extern void __cdecl FUN_10001190(void);

__declspec(naked) void __cdecl FUN_10001260(void)
{
    __asm {
        push    -1
        push    0x1001f0e7
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        lea     ecx, [esi + 0x1e8]
        mov     dword ptr [esp + 0x10], 2
        call    FUN_10001190
        lea     ecx, [esi + 0x150]
        mov     byte ptr [esp + 0x10], 1
        call    FUN_10001190
        lea     ecx, [esi + 0xb4]
        mov     byte ptr [esp + 0x10], 0
        call    FUN_10001190
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_10001190
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
