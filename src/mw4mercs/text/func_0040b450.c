/*
 * FUN_0040b450 (82 B) — __fastcall constructor. Calls FUN_00415180 with
 * the global at 0x007b8c10, zeroes +8/+0xc, sets vtable 0x76cd9c,
 * constructs two sub-objects at +0x10 and +0x20 via FUN_004174d0 (each
 * with vtable 0x76cfe0), then sets the final vtable 0x76cfdc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *p);
extern void __cdecl FUN_004174d0(int a);
extern int g_007b8c10;

__declspec(naked) void FUN_0040b450(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        lea     edi, [esi + 0x10]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_004174d0
        mov     dword ptr [edi], 0x76cfe0
        lea     edi, [esi + 0x20]
        push    0x0
        mov     ecx, edi
        call    FUN_004174d0
        mov     dword ptr [edi], 0x76cfe0
        pop     edi
        mov     dword ptr [esi], 0x76cfdc
        mov     eax, esi
        pop     esi
        ret
    }
}
