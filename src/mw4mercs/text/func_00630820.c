/*
 * FUN_00630820 (108 B) — __fastcall object constructor (ECX = this).
 *
 * Calls FUN_00415180(g_7b8c10), initializes sub-objects at this+0x10 and
 * this+0x18 via FUN_0041fc80, sets vtables, zeroes fields, then calls
 * FUN_00630cd0 and FUN_00630e90. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int a);
extern void __cdecl FUN_0041fc80(int a);
extern void __cdecl FUN_00630cd0(void);
extern void __cdecl FUN_00630e90(void);

extern int g_7b8c10;   /* 0x007B8C10 */

__declspec(naked) void *__cdecl FUN_00630820(void *this)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        lea     edi, [esi + 0x10]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x774a0c
        lea     edi, [esi + 0x18]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78d78c
        mov     ecx, esi
        mov     dword ptr [esi], 0x78d788
        mov     byte ptr [esi + 0x20], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 0x28], bl
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        call    FUN_00630cd0
        mov     ecx, esi
        call    FUN_00630e90
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
