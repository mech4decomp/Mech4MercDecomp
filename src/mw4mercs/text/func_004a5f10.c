/*
 * FUN_004a5f10 (236 B) — MLR object default-init (__thiscall).
 * Calls FUN_004a94e0 then initializes sub-objects with 1.0f and clears
 * flag bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a94e0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004ade00(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void FUN_004a5f10(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_004a94e0
        push    0x3f800000
        lea     ecx, [esi+0x304]
        call    FUN_004aeb30
        xor     bl, bl
        push    0x3f800000
        lea     ecx, [esi+0x310]
        mov     byte ptr [esi+0x31c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi+0x324]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi+0x330]
        mov     byte ptr [esi+0x33c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi+0x344]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi+0x350]
        mov     byte ptr [esi+0x35c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi+0x364]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi+0x370]
        mov     byte ptr [esi+0x37c], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi+0x2b8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi+0x2c4]
        mov     byte ptr [esi+0x2d8], bl
        call    FUN_004adfb0
        mov     dword ptr [esi+0x2e4], 0x3e800000
        push    0x3f800000
        lea     ecx, [esi+0x2e8]
        mov     byte ptr [esi+0x2fc], bl
        call    FUN_004adfb0
        pop     esi
        pop     ebx
        ret
    }
}
