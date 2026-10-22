/*
 * FUN_00647130 (134 B) — __thiscall (ECX = this) constructor.
 *
 * Initializes three embedded sub-objects (at +0x0, +0xc, +0x18) via
 * FUN_006479b0/90, FUN_00647a00/e0, FUN_00647a50/30, then zeroes a
 * block of fields and sets +0x3c to 1.0f. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006479b0(void);
extern void __cdecl FUN_00647990(void);
extern void __cdecl FUN_00647a00(void);
extern void __cdecl FUN_006479e0(void);
extern void __cdecl FUN_00647a50(void);
extern void __cdecl FUN_00647a30(void);

__declspec(naked) void *__fastcall FUN_00647130(void *this)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xf]
        mov     esi, ecx
        push    eax
        call    FUN_006479b0
        mov     cl, byte ptr [esp + 0xf]
        mov     byte ptr [esi + 0x8], cl
        xor     ebx, ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x4], ebx
        call    FUN_00647990
        lea     edx, [esp + 0xf]
        lea     edi, [esi + 0xc]
        push    edx
        mov     ecx, edi
        call    FUN_00647a00
        mov     al, byte ptr [esp + 0xf]
        mov     ecx, edi
        mov     dword ptr [edi + 0x4], ebx
        mov     byte ptr [edi + 0x8], al
        call    FUN_006479e0
        lea     ecx, [esp + 0xf]
        lea     edi, [esi + 0x18]
        push    ecx
        mov     ecx, edi
        call    FUN_00647a50
        mov     dl, byte ptr [esp + 0xf]
        mov     ecx, edi
        mov     dword ptr [edi + 0x4], ebx
        mov     byte ptr [edi + 0x8], dl
        call    FUN_00647a30
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x24], ebx
        pop     edi
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x3c], 0x3f800000
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
