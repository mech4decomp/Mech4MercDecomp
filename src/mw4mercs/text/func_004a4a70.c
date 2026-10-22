/*
 * FUN_004a4a70 (169 B) — MLR subsystem. Resets sub-objects to default
 * (identity/zero) values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a94e0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void FUN_004a4a70(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_004a94e0
        push    0x3f800000
        lea     ecx, [esi + 0x2b8]
        call    FUN_004aeb30
        xor     ebx, ebx
        push    0x3f800000
        lea     ecx, [esi + 0x2c4]
        mov     byte ptr [esi + 0x2d0], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x2d8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x2e4]
        mov     byte ptr [esi + 0x2f0], bl
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0x2f8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x304]
        mov     byte ptr [esi + 0x318], bl
        call    FUN_004adfb0
        mov     dword ptr [esi + 0x320], ebx
        mov     dword ptr [esi + 0x328], ebx
        mov     dword ptr [esi + 0x330], 0x3f800000
        mov     dword ptr [esi + 0x338], 0x3f800000
        mov     byte ptr [esi + 0x33c], bl
        mov     byte ptr [esi + 0x33d], 0x1
        pop     esi
        pop     ebx
        ret
    }
}
