/*
 * FUN_005DE030 (91 B) — __cdecl, 1 arg. Creates a LancemateManager:
 * initializes a local object via FUN_004D2000/FUN_004D2310, allocates a
 * 0x18-byte object, constructs it via FUN_005DDF60, tears down the local
 * via FUN_004D21C0, returns the new object (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __fastcall FUN_005ddf60(void *);
extern void __fastcall FUN_004d2000(void *, int);
extern void __fastcall FUN_004d2310(void);
extern void __fastcall FUN_004d21c0(void);

__declspec(naked) void * __cdecl FUN_005de030(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x44
        push    esi
        push    0x0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004d2000
        lea     ecx, [esp + 0x4]
        call    FUN_004d2310
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LDE079
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
LDE079:
        lea     ecx, [esp + 0x4]
        xor     esi, esi
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
