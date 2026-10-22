/*
 * FUN_0061ae90 (99 B) — Constructor. __fastcall (ECX = this), returns this.
 *
 * Calls FUN_00415180(DAT_007b8c10), initializes a vtable pointer and a
 * 0xFF-entry table via FUN_0061ae30, then a 0xFF-dword array via rep stosd,
 * then FUN_0061af60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void *param);
extern void __cdecl FUN_0061ae30(void *param);
extern void __cdecl FUN_0061af60(void *param);

__declspec(naked) void __fastcall FUN_0061ae90(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebp, ebp
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi], 0x76cd9c
        lea     edi, [esi + 0x38]
        mov     ebx, 0xff
L_loop:
        mov     ecx, edi
        call    FUN_0061ae30
        add     edi, 0x58
        dec     ebx
        jnz     L_loop
        mov     dword ptr [esi + 0x5bdc], ebp
        xor     eax, eax
        mov     dword ptr [esi], 0x78c63c
        mov     dword ptr [esi + 0x30], ebp
        mov     dword ptr [esi + 0x34], ebp
        lea     edi, [esi + 0x57e0]
        mov     ecx, 0xff
        rep stosd
        mov     ecx, esi
        call    FUN_0061af60
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
