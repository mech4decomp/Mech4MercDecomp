/*
 * FUN_006f1650 (343 B) — __fastcall destructor. Constructs a set of
 * sub-objects (FUN_0041fcb0) at offsets 0x8..0x58, frees the pointer at
 * +0x134 via FUN_004084e0 and zeroes it, tears down a chain of
 * sub-objects (FUN_006f3950) at +0x120..+0x6c, then destroys the
 * sub-objects (FUN_0041fc90) in reverse order.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fcb0(void);
extern void FUN_0041fc90(void);
extern void FUN_006f3950(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void __fastcall FUN_006f1650(void *param_1)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x8]
        mov     ecx, edi
        call    FUN_0041fcb0
        lea     ebx, [esi + 0x10]
        mov     ecx, ebx
        call    FUN_0041fcb0
        lea     ebp, [esi + 0x18]
        mov     ecx, ebp
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esp + 0x14], ecx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esp + 0x10], ecx
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x40]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x48]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x50]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x58]
        call    FUN_0041fcb0
        mov     eax, dword ptr [esi + 0x134]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esi + 0x120]
        mov     dword ptr [esi + 0x134], 0x0
        call    FUN_006f3950
        lea     ecx, [esi + 0x10c]
        call    FUN_006f3950
        lea     ecx, [esi + 0xf8]
        call    FUN_006f3950
        lea     ecx, [esi + 0xe4]
        call    FUN_006f3950
        lea     ecx, [esi + 0xd0]
        call    FUN_006f3950
        lea     ecx, [esi + 0xbc]
        call    FUN_006f3950
        lea     ecx, [esi + 0xa8]
        call    FUN_006f3950
        lea     ecx, [esi + 0x94]
        call    FUN_006f3950
        lea     ecx, [esi + 0x80]
        call    FUN_006f3950
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3950
        lea     ecx, [esi + 0x60]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x58]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x50]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x48]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x40]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x38]
        call    FUN_0041fc90
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_0041fc90
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_0041fc90
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_0041fc90
        mov     ecx, ebp
        call    FUN_0041fc90
        mov     ecx, ebx
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_0041fc90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
