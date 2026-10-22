/*
 * FUN_10001370 (198 B) - SEH-guarded destructor wrapper. Calls a series
 * of sub-object destructors (thunk_FUN_100011a0 / FUN_100014A0 /
 * FUN_10001450), then FUN_10003190 on +0xa8 (or NULL) and FUN_10001440.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100014A0(void);
extern void __cdecl FUN_10001450(void);
extern void __cdecl FUN_10003190(void);
extern void __cdecl FUN_10001440(void);

__declspec(naked) void __cdecl FUN_10001370(void)
{
    __asm {
        push    -1
        push    0x1001f185
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 8], esi
        lea     ecx, [esi + 0x40c]
        mov     dword ptr [esp + 0x14], 7
        call    FUN_10001190
        lea     ecx, [esi + 0x3d8]
        mov     byte ptr [esp + 0x14], 6
        call    FUN_100014A0
        lea     ecx, [esi + 0x338]
        mov     byte ptr [esp + 0x14], 5
        call    FUN_10001190
        lea     ecx, [esi + 0x304]
        mov     byte ptr [esp + 0x14], 4
        call    FUN_100014A0
        lea     ecx, [esi + 0x224]
        mov     byte ptr [esp + 0x14], 3
        call    FUN_10001190
        lea     ecx, [esi + 0x15c]
        mov     byte ptr [esp + 0x14], 2
        call    FUN_10001450
        lea     ecx, [esi + 0xc4]
        mov     byte ptr [esp + 0x14], 1
        call    FUN_10001190
        xor     ecx, ecx
        cmp     esi, ecx
        mov     byte ptr [esp + 0x14], cl
        jz      label1
        lea     ecx, [esi + 0xa8]
label1:
        call    FUN_10003190
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        call    FUN_10001440
        mov     ecx, dword ptr [esp + 0xc]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret
    }
}
