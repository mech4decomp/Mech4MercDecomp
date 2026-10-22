/*
 * FUN_10034960 (126 B) — __thiscall, RET 0x14. SEH-guarded constructor:
 * initializes fields, allocates a self-linked node via FUN_10001d50,
 * calls FUN_10034ab0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10034ab0(void);

__declspec(naked) void FUN_10034960(void)
{
    __asm {
        push    -1
        push    0x10048b0b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esp + 0x28]
        push    edi
        mov     dword ptr [esi + 0xc], ecx
        mov     cl, byte ptr [esp + 0x28]
        xor     edi, edi
        mov     dword ptr [esi + 4], edi
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x14], eax
        push    0xc
        mov     dword ptr [esp + 0xc], esi
        mov     byte ptr [esi + 0x18], cl
        call    FUN_10001d50
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 4], eax
        add     esp, 4
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], edi
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_10034ab0
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x14
    }
}
