/*
 * FUN_005DE090 (82 B) — __cdecl, no args. Creates a LancemateManager:
 * initializes a local object via FUN_004D1F80, allocates a 0x18-byte
 * object, constructs it via FUN_005DDF60, tears down the local via
 * FUN_004D21C0, returns the new object (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __fastcall FUN_005ddf60(void *);
extern void __fastcall FUN_004d1f80(void *, int);
extern void __fastcall FUN_004d21c0(void);

__declspec(naked) void * __cdecl FUN_005de090(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        push    0x1
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004d1f80
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LDE0D0
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     ecx, eax
        call    FUN_005ddf60
        lea     ecx, [esp + 0x4]
        mov     esi, eax
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
LDE0D0:
        lea     ecx, [esp + 0x4]
        xor     esi, esi
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
