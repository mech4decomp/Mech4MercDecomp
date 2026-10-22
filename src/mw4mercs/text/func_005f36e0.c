/*
 * FUN_005f36e0 (116 B) — Destructor (__thiscall, RET).
 *
 * Sets vtable 0x78a618, releases the object at +0x508 (virtual call), then
 * calls a global-registered callback (obfuscated pointer chain through
 * DAT_007dab44/DAT_007dab40), FUN_00637b10, FUN_005f6ab0, and destroys the
 * two sub-objects at +0x4b4/+0x4a8, then FUN_005f89d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void FUN_00637b10(void);
extern void FUN_005f6ab0(void);
extern void FUN_0041fc90(void);
extern void FUN_005f89d0(void);

__declspec(naked) void __fastcall FUN_005f36e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x508]
        test    ecx, ecx
        mov     dword ptr [esi], 0x78a618
        jz      skip_release
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x508], 0
        mov     dword ptr [esi + 0x50c], 0
skip_release:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x8]
        call    FUN_00637b10
        mov     ecx, esi
        call    FUN_005f6ab0
        lea     ecx, [esi + 0x4b4]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x4a8]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005f89d0
        pop     esi
        ret
    }
}
