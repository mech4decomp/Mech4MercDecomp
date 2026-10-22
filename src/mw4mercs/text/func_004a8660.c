/*
 * FUN_004a8660 (82 B) — __fastcall MLR object method: initializes sub-objects
 * with 1.0f scale values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a94e0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);

__declspec(naked) void FUN_004a8660(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004a94e0
        push    0x3f800000
        lea     ecx, [esi+0x2b8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi+0x2c4]
        mov     byte ptr [esi+0x2d8], 0x0
        call    FUN_004adfb0
        mov     dword ptr [esi+0x2e4], 0x3f800000
        push    0x3f800000
        lea     ecx, [esi+0x2e8]
        mov     byte ptr [esi+0x2fc], 0x0
        call    FUN_004adfb0
        pop     esi
        ret
    }
}
