/*
 * FUN_100058c0 (272 B) - SEH-guarded constructor. Sets up an exception
 * registration frame, initializes a large object (sub-objects at various
 * offsets), installs two vtables, then tears down the frame.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005ab0(void);
extern void __cdecl FUN_10005ad0(void);
extern void __cdecl FUN_10006170(void);
extern void __cdecl FUN_10005e20(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10005ea0(void);
extern void __cdecl FUN_100059d0(void);
extern void __cdecl FUN_10005ae0(void);

__declspec(naked) void __cdecl FUN_100058c0(void)
{
    __asm {
        push    -1
        push    0x1001f6d8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 8], esi
        call    FUN_10005ab0
        lea     edi, [esi + 0xa8]
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    FUN_10005ad0
        lea     ecx, [esi + 0xb0]
        mov     byte ptr [esp + 0x14], 1
        call    FUN_10006170
        lea     eax, [esi + 0xc]
        push    eax
        lea     ecx, [esi + 0xb4]
        call    FUN_10005e20
        lea     ecx, [esi + 8]
        push    ecx
        lea     ecx, [esi + 0xbc]
        call    FUN_10005e20
        push    0x400
        lea     ecx, [esi + 0xc4]
        call    FUN_10001170
        push    0x100252bc
        lea     ecx, [esi + 0x15c]
        mov     byte ptr [esp + 0x18], 2
        call    FUN_10005ea0
        push    0x400
        lea     ecx, [esi + 0x224]
        call    FUN_10001170
        lea     ecx, [esi + 0x304]
        mov     byte ptr [esp + 0x14], 4
        call    FUN_100059d0
        push    0x400
        lea     ecx, [esi + 0x338]
        call    FUN_10001170
        lea     ecx, [esi + 0x3d8]
        mov     byte ptr [esp + 0x14], 6
        call    FUN_100059d0
        push    0x400
        lea     ecx, [esi + 0x40c]
        call    FUN_10001170
        mov     ecx, esi
        mov     byte ptr [esp + 0x14], 8
        mov     dword ptr [esi], 0x1002126c
        mov     dword ptr [edi], 0x10021260
        call    FUN_10005ae0
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     dword ptr [esi + 0xac], 0
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
