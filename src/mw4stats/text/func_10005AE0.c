/*
 * FUN_10005ae0 (271 B) - constructor. Calls sub-object ctors
 * (FUN_10003250, FUN_10005e40, FUN_10005f40, FUN_10001660) and zeroes a
 * large run of dword fields.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003250(void);
extern void __cdecl FUN_10005e40(void);
extern void __cdecl FUN_10005f40(void);
extern void __cdecl FUN_10001660(void);

__declspec(naked) void __cdecl FUN_10005ae0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    5
        lea     ecx, [esi + 0xb4]
        call    FUN_10003250
        xor     edi, edi
        push    edi
        lea     ecx, [esi + 0xbc]
        call    FUN_10005e40
        lea     ecx, [esi + 0x15c]
        call    FUN_10005f40
        push    0x10027590
        lea     ecx, [esi + 0x224]
        call    FUN_10001660
        mov     dword ptr [esi + 0x2c0], edi
        mov     dword ptr [esi + 0x2d4], edi
        mov     dword ptr [esi + 0x2f4], edi
        lea     ecx, [esi + 0x304]
        mov     dword ptr [esi + 0x2bc], edi
        mov     dword ptr [esi + 0x2c4], edi
        mov     dword ptr [esi + 0x2c8], edi
        mov     dword ptr [esi + 0x2cc], edi
        mov     dword ptr [esi + 0x2d0], edi
        mov     dword ptr [esi + 0x2d8], edi
        mov     dword ptr [esi + 0x2dc], edi
        mov     dword ptr [esi + 0x2e0], edi
        mov     dword ptr [esi + 0x2e4], edi
        mov     dword ptr [esi + 0x2e8], edi
        mov     dword ptr [esi + 0x2ec], edi
        mov     dword ptr [esi + 0x2f0], edi
        mov     dword ptr [esi + 0x2f8], edi
        mov     dword ptr [esi + 0x4ac], edi
        mov     dword ptr [esi + 0x2fc], edi
        mov     dword ptr [esi + 0x300], edi
        call    FUN_10005f40
        push    0x10027594
        lea     ecx, [esi + 0x338]
        mov     dword ptr [esi + 0x334], edi
        call    FUN_10001660
        lea     ecx, [esi + 0x3d8]
        mov     dword ptr [esi + 0x3d0], edi
        mov     dword ptr [esi + 0x3d4], edi
        call    FUN_10005f40
        push    0x10027598
        lea     ecx, [esi + 0x40c]
        mov     dword ptr [esi + 0x4a8], edi
        mov     dword ptr [esi + 0x408], edi
        call    FUN_10001660
        mov     dword ptr [esi + 0x4b0], edi
        mov     dword ptr [esi + 0x4a4], edi
        pop     edi
        pop     esi
        ret
    }
}
