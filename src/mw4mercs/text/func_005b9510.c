/*
 * FUN_005b9510 (75 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_005b9b90(void);
extern void __stdcall FUN_005b9760(void);

__declspec(naked) void __stdcall FUN_005b9510(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        xor     ebx, ebx
        lea     ecx, [esi + 0x198]
        mov     dword ptr [esi + 0x18c], ebx
        mov     byte ptr [esi + 0x2ec], bl
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x1a4]
        mov     dword ptr [esi + 0x1a0], ebx
        call    FUN_0041fcb0
        mov     ecx, esi
        mov     dword ptr [esi + 0x1ac], ebx
        mov     dword ptr [esi + 0x17c], ebx
        call    FUN_005b9b90
        mov     ecx, esi
        call    FUN_005b9760
        pop     esi
        pop     ebx
        ret
    }
}
