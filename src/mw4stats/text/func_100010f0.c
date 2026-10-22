/*
 * FUN_100010f0 (118 B) - SEH-guarded constructor wrapper. Calls
 * FUN_10001170 on sub-objects at +0x0, +0x98, +0x130 (each with 0x400)
 * and FUN_100030d0 on +0x1c8. Returns this.
 *
 * __fastcall (ECX = this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_100030d0(void);

__declspec(naked) void * __cdecl FUN_100010f0(void)
{
    __asm {
        push    -1
        push    0x1001f084
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    0x400
        mov     dword ptr [esp + 8], esi
        call    FUN_10001170
        push    0x400
        lea     ecx, [esi + 0x98]
        mov     dword ptr [esp + 0x14], 0
        call    FUN_10001170
        push    0x400
        lea     ecx, [esi + 0x130]
        mov     byte ptr [esp + 0x14], 1
        call    FUN_10001170
        lea     ecx, [esi + 0x1c8]
        mov     byte ptr [esp + 0x10], 2
        call    FUN_100030d0
        mov     ecx, dword ptr [esp + 8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
