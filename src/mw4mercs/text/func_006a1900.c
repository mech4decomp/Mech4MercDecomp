/*
 * FUN_006a1900 (88 B) — __thiscall constructor. Calls FUN_006a01e0,
 * zero-initializes a block of fields, calls FUN_0069e940 on this+0x30,
 * stores a byte arg into this+0xCC, sets vtable 0x799D14, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006a01e0(void);
extern void __fastcall FUN_0069e940(void);

__declspec(naked) void *__fastcall FUN_006a1900(void *param_1)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006a01e0
        xor     edi, edi
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x1C], edi
        mov     dword ptr [esi + 0x28], edi
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x24], 0xFFFFFFFE
        mov     dword ptr [esi + 0x2C], edi
        call    FUN_0069e940
        mov     al, byte ptr [esp + 0xB]
        mov     dword ptr [esi + 0xC4], edi
        mov     byte ptr [esi + 0xCC], al
        mov     dword ptr [esi + 0xCC], edi
        mov     dword ptr [esi + 0xC8], edi
        pop     edi
        mov     dword ptr [esi], 0x799D14
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }
}
