/*
 * FUN_005ac000 (101 B) — __fastcall reset/init method.
 *
 * Zeroes fields, calls FUN_00707e70 (rand) several times to init doubles,
 * calls FUN_005acc20/FUN_005acc60, zeroes byte flags, and inits more doubles.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00707e70(void);
extern void FUN_005acc20(void);
extern void FUN_005acc60(void);

__declspec(naked) void __fastcall FUN_005ac000(void *this)
{
    __asm {
        push    ebx
        push    esi
        xor     ebx, ebx
        mov     esi, ecx
        push    ebx
        mov     dword ptr [esi + 0x4c], ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x2c]
        mov     eax, dword ptr [esi + 0x58]
        push    ebx
        mov     dword ptr [esi + 0x54], eax
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x2c]
        push    ebx
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x34]
        mov     ecx, esi
        call    FUN_005acc20
        mov     ecx, esi
        call    FUN_005acc60
        push    ebx
        mov     byte ptr [esi + 0x10], bl
        mov     byte ptr [esi + 0x60], bl
        mov     byte ptr [esi + 0x62], bl
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x74]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x7c]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x84]
        pop     esi
        pop     ebx
        ret
    }
}
